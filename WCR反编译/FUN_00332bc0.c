// FUN_00332bc0 @ 00332bc0

void FUN_00332bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_5;
  local_28 = param_4;
  (*DAT_028c9e80)(param_4,param_5);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setHidden__026ca970,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
  uStack_50 = 0;
  uStack_78 = 0;
  local_90 = param_1;
  uStack_88 = param_2;
  local_80 = param_3;
  local_68 = param_1;
  uStack_60 = param_2;
  local_58 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFrame__026ca960);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_98 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_accessibilityLabel_0269e1c8);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = uVar1;
  if (uVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasPrefix__0269d320,&cf__);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_frame_026ca640);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,0,local_98,PTR_s_setFrame__026ca960);
    }
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_38,0);
  return;
}

