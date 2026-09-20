// FUN_00333838 @ 00333838

void FUN_00333838(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9e98)(param_1,param_2);
  uVar2 = local_18;
  FUN_0033441c();
  if ((uVar2 & 1) == 0) {
    uVar2 = local_18;
    FUN_00334898();
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrefineApplyTransparentTips_026a2130);
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_28 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_accessibilityLabel_0269e1c8);
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar2;
      if ((uVar2 != 0) &&
         ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasPrefix__0269d320,&cf__),
         uVar1 = local_28, (uVar2 & 1) != 0)) {
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUserInteractionEnabled__026caad8,1);
      }
      _objc_storeStrong(&local_30);
      _objc_storeStrong(&local_28,0);
    }
  }
  else {
    FUN_00334504(local_18);
  }
  return;
}

