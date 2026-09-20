// FUN_00f1a400 @ 00f1a400

byte FUN_00f1a400(undefined8 param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  byte local_4c;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00f1a350(local_20,PTR_s_m_uiIsSenderStatus_026a62e0);
  local_24 = (int)uVar1;
  if (local_24 == 1) {
    local_11 = 1;
    local_28 = 1;
  }
  else if (local_24 == 2) {
    local_11 = 0;
    local_28 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_00f16348(local_20,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_48 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_48;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    local_4c = 0;
    if (pcVar2 != (cfstringStruct *)0x0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_38);
      local_4c = (byte)uVar1;
    }
    local_11 = local_4c & 1;
    local_28 = 1;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

