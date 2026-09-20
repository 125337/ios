// FUN_00738450 @ 00738450

void FUN_00738450(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  undefined8 uVar4;
  double local_c8;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_4);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar4 = 0x3ff0000000000000;
    local_c8 = param_1;
    if (param_1 <= 1.0) {
      local_c8 = 55.0;
    }
    dVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar3,uVar4,param_3,local_c8,local_18,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,0);
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_18,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

