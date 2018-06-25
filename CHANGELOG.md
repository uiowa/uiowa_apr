# Changelog

## Unreleased

## 1.0.0 - 2017-05-04
### Added
- Added default line-height to CSS.
- Added hook_migration_plugins_alter() to uiowa_apr_migration module to handle custom source URLs.
- Added cron functions for updates and imports to uiowa_apr_migration module.
- Added rollback of all imports upon uninstall of uiowa_apr_migration module.
- Added Migrate Plus JSON data parsers to handle source JSON.
- Added editrev section.

### Changed
- Changed from using UID to UserID as unique identifier.
- Changed div class='field-label' to h2 class='field-header' to avoid style conflicts in template files.
- Changed template files to handle where Education or Education (PostGrad) degree was equal to 'Other'.
- Changed creation of node title during migration changed to firstname (or preferred firstname) middlename lastname, removed suffix and credentials.
- Replaced node->person_type field with paragraph->person_type field in APR Profiles view filter criteria.
- Show Working Title, unless empty, then Rank in APR Profiles view.
- Updated CSS to handle changes.

### Removed
- Removed bold styling on Last Modified Date on profile page.
- Removed fields from APR Profiles view that allowed creation of name.
