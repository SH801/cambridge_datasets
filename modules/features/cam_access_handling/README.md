Drupal 7 University of Cambridge user access (403) handler feature
==================================================================

This is a general 403 handler.

This feature handles two scenarios: 1), an anonymous user trying to access a protected page, 2), a logged-in user trying to access a page they do not have sufficient permissions to access.

In order for this to work you need to create a completely blank page with the title something like "Access Denied". The title can be anything - you just need to remember the alias or NID for the next step.

Save the (blank) page and go to admin/config/system/site-information. In the "ERROR PAGES" section for "Default 403 (access denied) page" enter either the alias or NID for the page you've just created (it should be "access-denied" if you gave it the title of "Access Denied"). Note the NID will be saved on this page if you enter an alias. If the module is enabled that's all you need to do.

The content of this page will be dynamically populated depending on which of the above two scenarios arise.
In scenario 1) the user will be invited to log in. In scenario 2) the user will be informed they don't have sufficient permissions.

Don't worry about the feature showing as "overridden" - this is normal because the NID of this page will almost certainly be different to the NID of the page on the site I created the feature on. The feature was partly to highlight the save that a 403 page need to be created and assigned to the 403 handler.

MA