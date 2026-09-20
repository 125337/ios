// FUN_0066c488 @ 0066c488

void FUN_0066c488(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong local_28;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_19 = param_2;
  _objc_getAssociatedObject(local_18,&DAT_028cbc90);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,local_19 & 1);
    uVar3 = 0;
    if ((local_19 & 1) == 0) {
      uVar3 = 0x3ff0000000000000;
    }
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,local_28,PTR_s_setAlpha__026ca860);
    if ((local_19 & 1) != 0) {
      FUN_0066e134(local_28,&cf___);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),local_28,PTR_s_setFrame__026ca960)
      ;
    }
  }
  if ((local_19 & 1) != 0) {
    _objc_setAssociatedObject(local_18,&DAT_028cbc91,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028cbc92,0,1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

