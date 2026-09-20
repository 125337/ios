// FUN_01acd34c @ 01acd34c

void FUN_01acd34c(double param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
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
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) || (local_30 < 1.0)) {
    local_34 = 1;
  }
  else {
    _memcpy(auStack_68,PTR__CGAffineTransformIdentity_025782d8,0x30);
    uVar3 = local_28;
    _memcpy(auStack_98,auStack_68,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_98);
    uVar7 = 0;
    uVar5 = 0;
    dVar6 = local_30;
    dVar8 = local_30;
    FUN_01a9eccc();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar7,dVar6,dVar8,local_28,PTR_s_setBounds__026ca8a0);
    uVar7 = 0;
    uVar5 = uVar7;
    dVar6 = local_30;
    dVar8 = local_30;
    FUN_01a9eccc();
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar5,dVar6,dVar8,local_28,PTR_s_setFrame__026ca960)
    ;
    uVar3 = local_28;
    pcVar4 = &cf_setImageSize_;
    _NSSelectorFromString(&cf_setImageSize_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar4);
    uVar1 = local_28;
    if ((uVar3 & 1) != 0) {
      pcVar4 = &cf_setImageSize_;
      _NSSelectorFromString();
      dVar6 = local_30;
      dVar8 = local_30;
      FUN_01a9eca0();
      (*(code *)PTR__objc_msgSend_02578628)(dVar6,dVar8,uVar1,pcVar4);
    }
    uVar3 = local_28;
    pcVar4 = &cf_setConerSize_;
    _NSSelectorFromString(&cf_setConerSize_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar4);
    uVar1 = local_28;
    if ((uVar3 & 1) != 0) {
      pcVar4 = &cf_setConerSize_;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar4,0);
    }
    uVar3 = local_28;
    pcVar4 = &cf_setBRoundCorner_;
    _NSSelectorFromString(&cf_setBRoundCorner_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar4);
    uVar1 = local_28;
    if ((uVar3 & 1) != 0) {
      pcVar4 = &cf_setBRoundCorner_;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar4,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,1);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutIfNeeded_026ca790);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

