// FUN_01638808 @ 01638808

void FUN_01638808(long param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0R___z_);
  }
  else {
    FUN_01637f78(local_20,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  _objc_storeStrong(&local_20,0);
  return;
}

