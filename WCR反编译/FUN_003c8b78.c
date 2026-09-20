// FUN_003c8b78 @ 003c8b78

void FUN_003c8b78(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_28;
  undefined4 local_20;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar4 = local_18;
  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar2 = local_18;
  if ((uVar4 & 1) == 0) {
    local_20 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setHidden__026ca970,0);
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_28,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNumberOfLines__026ca9d8,1);
    uVar1 = 2;
    if ((local_19 & 1) == 0) {
      uVar1 = 4;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLineBreakMode__026ca988,uVar1);
    if ((local_19 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323d60,local_28,PTR_s_setMinimumScaleFactor__026ca9d0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBaselineAdjustment__026a3018,1);
    }
    _objc_storeStrong(&local_28,0);
    local_20 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

