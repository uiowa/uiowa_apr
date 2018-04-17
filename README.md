# University of Iowa APR Module

1. Enter the API Key and Population ID under the University of Iowa APR admin interface. For instance, if the URL of the data feed is https://apps.its.uiowa.edu/facadmin/api/listing/?key=iashdfi7sdf74evah23&population_id=1 then use the following values:
   - API Key: iashdfi7sdf74evah23
   - Population ID: 1

2. Under the Migration UI in Structure > Migrations, select 'List migrations' under the 'Operations' column to edit the APR People Migrations group. Click the 'Execute' button in the row for the APR People migration.

3. Migration Operations:
   - To import new records, select 'Import' and click the 'Execute' button.
   - To update existing records, check the 'Update' checkbox under the 'Options' fieldset below, then click the 'Execute' button.
   - To delete existing records, select 'Rollback' and click the 'Execute' button.

4. For manual operations, please use the drush migrate commands shown below.

### Drush Migrate Commands

From the command line, manually perform the imports using the drush migrate commands:

migrate-status (ms) - List all migrations with current status.
```
> drush ms
Group: apr_people      Total  Imported  Unprocessed  Status  Last imported
APRPeople              99     0         99           Idle    2017-01-01 00:00:01
APRPeopleAppointments  999    0         999          Idle    2017-01-01 00:00:01
```
migrate-import (mim) - Perform one or more migration processes
```
> drush mim APRPeople
Processed 99 (99 created, 0 updated, 0 failed, 0 ignored) in 0.6 sec (1963/min) - done with 'APRPeople'
> drush mim APRPeopleAppointments
Processed 999 (999 created, 0 updated, 0 failed, 0 ignored) in 0.6 sec (1963/min) - done with 'APRPeopleAppointments'
```
migrate-import (mim) - WITH Update
```
> drush mim APRPeople --update
Processed 99 (0 created, 99 updated, 0 failed, 0 ignored) in 0.6 sec (1963/min) - done with 'APRPeople'
> drush mim APRPeopleAppointments --update
Processed 999 (0 created, 999 updated, 0 failed, 0 ignored) in 0.6 sec (1963/min) - done with 'APRPeopleAppointments'
```
migrate-rollback (mr) - Roll back the destination objects from a given migration
```
> drush mr APRPeople --force
> drush mr APRPeopleAppointments --force
```

## Maintainers

Current maintainers:
 * Mark Ahrens - https://drupal.org/user/1145210
 * Mark Bennett - https://drupal.org/user/2506978
 * Alina Shybayeva - https://drupal.org/user/3302789
