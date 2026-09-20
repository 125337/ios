// FUN_016b3fe8 @ 016b3fe8

void FUN_016b3fe8(undefined8 param_1,uint param_2)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isHidden_026ca768);
    if ((uint)lVar1 != (param_2 & 1)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,param_2 & 1);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

