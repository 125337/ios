// FUN_00f29864 @ 00f29864

void FUN_00f29864(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar1 = local_18;
  if ((uVar3 & 1) == 0) {
    local_1c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setHidden__026ca970,1);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUserInteractionEnabled__026caad8,0);
    uVar3 = local_28;
    puVar2 = PTR__OBJC_CLASS___UIWindow_026cdf68;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(double *)PTR__UIWindowLevelNormal_02578238 - 1.0,local_28,
                 PTR_s_setWindowLevel__026caae8);
    }
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

