# University of Iowa APR Module

(1) Enter the API Key and Population ID under the University of Iowa APR admin interface.
    https://apps.its.uiowa.edu/facadmin/api/listing/?key=iashdfi7sdf74evah23&population_id=1

(2) Navigate to the new content type settings and save the following changes:
    Uncheck 'Promoted to front page' under Publishing options,
    Uncheck 'Display author and date information' under Display settings,
    Change 'Default comment setting for new content' to 'Closed' under Comment settings.

(3) Click on 'Manage Display' next to 'APR Profile' under Home » Administration » Structure » Content types.
    Click on 'Full content' button and click 'Save'.

(4) From the command line, perform the imports using the drush migrate commands:

    migrate-status (ms) List all migrations with current status.

    > drush ms
    Group: apr_people      Total  Imported  Unprocessed  Status  Last imported
    APRPeople              19     0         19           Idle    2017-10-10 14:16:21
    APRPeopleAppointments  22     0         22           Idle    2017-10-10 14:16:13

    migrate-import (mi) Perform one or more migration processes

    > drush mi APRPeople
    Processed 19 (19 created, 0 updated, 0 failed, 0 ignored) in 0.6 sec (1963/min) - done with 'APRPeople'

    > drush mi APRPeopleAppointments
    Processed 22 (22 created, 0 updated, 0 failed, 0 ignored) in 0.6 sec (1963/min) - done with 'APRPeopleAppointments'

    migrate-rollback (mr) Roll back the destination objects from a given migration

    > drush mr APRPeople --force
    > drush mr APRPeopleAppointments --force
