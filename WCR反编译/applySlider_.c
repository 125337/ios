// applySlider: @ 01edaff4

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRToDoAdjustmentViewController::applySlider_
          (WCRToDoAdjustmentViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  float in_s0;
  float fVar5;
  double dVar6;
  ulong local_38;
  double local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  dVar6 = (double)in_s0;
  FUN_01ebe070(uVar1);
  local_30 = dVar6;
  fVar5 = (float)dVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  if (0.001 < ABS((float)dVar6 - fVar5)) {
    (*(code *)PTR__objc_msgSend_02578628)((float)local_30,local_28,PTR_s_setValue__026a51b0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  FUN_01ebeb78(local_30);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  uVar3 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_viewWithTag__026cabe0,uVar2 + 91000);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    FUN_01ebef60(local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTitle_forState__026caab8,uVar1,0);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

