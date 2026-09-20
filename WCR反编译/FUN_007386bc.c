// FUN_007386bc @ 007386bc

void FUN_007386bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_4);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,DAT_02323cd0,local_18,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,1);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

