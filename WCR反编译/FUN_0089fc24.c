// FUN_0089fc24 @ 0089fc24

void FUN_0089fc24(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (((DAT_028cdd48 & 1) == 0) && (local_18 != 0)) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_loadUpdateAndExcute_026a95e8);
    if ((uVar1 & 1) == 0) {
      DAT_028cdd48 = 1;
    }
    else {
      FUN_008a0428();
      DAT_028cdd49 = 1;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadUpdateAndExcute_026a95e8);
      DAT_028cdd49 = 0;
      DAT_028cdd48 = 1;
      FUN_008a04e0();
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

