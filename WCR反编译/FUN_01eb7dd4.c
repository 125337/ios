// FUN_01eb7dd4 @ 01eb7dd4

void FUN_01eb7dd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_40 = DAT_02323d88;
  local_48 = *(double *)(param_1 + 0x28) * 0.3;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = 0;
  uVar2 = 0;
  local_38 = param_1;
  FUN_01eb5344();
  local_88 = uVar2;
  local_80 = uVar4;
  local_78 = uVar6;
  local_70 = uVar7;
  _CGRectInset();
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  local_68 = uVar2;
  local_60 = uVar4;
  local_58 = uVar6;
  local_50 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar4,uVar6,uVar7,local_48,PTR__OBJC_CLASS___UIBezierPath_026ce268,
             PTR_s_bezierPathWithRoundedRect_corner_026ca530);
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar1,PTR_s_setLineWidth__026ca9b0);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_setStroke_026a31a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_stroke_026a31c8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_setFill_026a3190);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_fill_026a3198);
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
    _objc_retainAutoreleasedReturnValue();
    dVar3 = *(double *)(param_1 + 0x28) * DAT_02323e88;
    dVar5 = *(double *)(param_1 + 0x28) * DAT_02324050;
    local_98 = puVar1;
    FUN_01eb335c();
    (*(code *)PTR__objc_msgSend_02578628)(dVar3,dVar5,puVar1,PTR_s_moveToPoint__026a01b0);
    puVar1 = local_98;
    dVar3 = *(double *)(param_1 + 0x28) * DAT_02324038;
    dVar5 = *(double *)(param_1 + 0x28) * DAT_02323d70;
    FUN_01eb335c();
    (*(code *)PTR__objc_msgSend_02578628)(dVar3,dVar5,puVar1,PTR_s_addLineToPoint__026a01b8);
    puVar1 = local_98;
    dVar3 = *(double *)(param_1 + 0x28) * DAT_02339af8;
    dVar5 = *(double *)(param_1 + 0x28) * DAT_02323f18;
    FUN_01eb335c();
    (*(code *)PTR__objc_msgSend_02578628)(dVar3,dVar5,puVar1,PTR_s_addLineToPoint__026a01b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40 + DAT_02323da8,local_98,PTR_s_setLineWidth__026ca9b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setLineCapStyle__026a31c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setLineJoinStyle__026a31b8,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_stroke_026a31c8);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_30,0);
  return;
}

