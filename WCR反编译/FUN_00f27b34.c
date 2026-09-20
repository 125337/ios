// FUN_00f27b34 @ 00f27b34

void FUN_00f27b34(void)

{
  char *pcVar1;
  char *local_20;
  char *local_18;
  
  pcVar1 = "VoIPInvitationService";
  FUN_00f27d14();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_viewController_026a5588);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewController_026a5588);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
      goto LAB_00f27bcc;
    }
  }
  local_18 = (char *)0x0;
LAB_00f27bcc:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

