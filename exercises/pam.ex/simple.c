#include <security/pam_appl.h>
#include <security/pam_misc.h>

retval = pam_start("check_user", user, &conv, &pamh);

if ( reval == PAM_SUCCESS)
	reval = pam_authenticate(pamh, 0);

if ( reval == PAM_SUCCESS )
	retval = pam_acct_mgmt(pamh, 0);

if ( reval = PAM_SUCCESS )
	/* authenticated !! */

