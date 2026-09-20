// FUN_002b8ccc @ 002b8ccc

byte FUN_002b8ccc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  byte local_68;
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_20;
  FUN_002b9990(local_20,local_28);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isHidden_026ca768);
    local_68 = 1;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
      local_68 = 1;
      if (param_1 <= DAT_02323db0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isUserInteractionEnabled_026ca770);
        local_68 = (byte)uVar1;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,1);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUserInteractionEnabled__026caad8,0);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_11 = local_68 & 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

