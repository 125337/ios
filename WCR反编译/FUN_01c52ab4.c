// FUN_01c52ab4 @ 01c52ab4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01c52ab4(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [52];
  undefined4 local_34;
  double local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) || (local_30 < 1.0)) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAutoresizingMask__026ca878,0);
    _memcpy(auStack_68,PTR__CGAffineTransformIdentity_025782d8,0x30);
    uVar2 = local_28;
    _memcpy(auStack_98,auStack_68,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_98);
    uVar7 = 0;
    uVar5 = 0;
    dVar6 = local_30;
    dVar8 = local_30;
    FUN_01c52a68();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar7,dVar6,dVar8,local_28,PTR_s_setBounds__026ca8a0);
    uVar7 = 0;
    uVar5 = uVar7;
    dVar6 = local_30;
    dVar8 = local_30;
    FUN_01c52a68();
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar5,dVar6,dVar8,local_28,PTR_s_setFrame__026ca960)
    ;
    pcVar3 = &cf_setImageSize_;
    _NSSelectorFromString();
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar3);
    uVar2 = local_28;
    if ((uVar4 & 1) != 0) {
      dVar6 = local_30;
      dVar8 = local_30;
      FUN_01c54ac8();
      (*(code *)PTR__objc_msgSend_02578628)(dVar6,dVar8,uVar2,pcVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutIfNeeded_026ca790);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

