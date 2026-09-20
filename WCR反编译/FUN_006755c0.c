// FUN_006755c0 @ 006755c0

void FUN_006755c0(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  if (local_18 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,param_2 & 1);
      uVar3 = 0;
      if ((param_2 & 1) == 0) {
        uVar3 = 0x3ff0000000000000;
      }
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,local_18,PTR_s_setAlpha__026ca860);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

