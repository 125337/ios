// scaleFreeformFromStartRect:toRect: @ 0164af5c

/* Function Stack Size: 0x50 bytes */

void WCRSuperFloatCropViewController::scaleFreeformFromStartRect_toRect_
               (ID param_1,SEL param_2,CGRect param_3,CGRect param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  ID IVar4;
  double in_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  double in_d6;
  double in_d7;
  uint local_204;
  undefined1 auStack_200 [48];
  undefined1 auStack_1d0 [48];
  undefined1 auStack_1a0 [48];
  undefined1 auStack_170 [48];
  undefined1 auStack_140 [48];
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [48];
  double local_80;
  double local_78;
  SEL local_70;
  ID local_68;
  undefined8 local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  param_4.field0_0x0.field1_0x8 = param_4.field0_0x0.field1_0x8;
  param_4.field0_0x0.field0_0x0 = param_4.field0_0x0.field0_0x0;
  local_70 = param_2;
  local_68 = param_1;
  local_60 = in_d4;
  local_58 = in_d5;
  local_50 = in_d6;
  local_48 = in_d7;
  local_40 = in_d0;
  local_38 = in_d1;
  local_30 = in_d2;
  local_28 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_freeformPath_026b1ee8,param_3.field0_0x0.field0_0x0,
             param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
             param_3.field1_0x10.field1_0x8,param_4.field0_0x0.field0_0x0,
             param_4.field0_0x0.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  local_204 = 1;
  if (param_1 != 0) {
    IVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_freeformClosed_026b1ef0);
    local_204 = (uint)IVar4 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((((local_204 & 1) == 0) && (1.0 <= local_30)) && (1.0 <= local_28)) {
    local_78 = local_50 / local_30;
    local_80 = local_48 / local_28;
    _memcpy(auStack_b0,PTR__CGAffineTransformIdentity_025782d8,0x30);
    _memcpy(auStack_110,auStack_b0,0x30);
    _CGAffineTransformTranslate(local_60,local_58,auStack_110);
    _memcpy(auStack_b0,auStack_e0,0x30);
    dVar3 = local_78;
    dVar2 = local_80;
    _memcpy(auStack_170,auStack_b0,0x30);
    _CGAffineTransformScale(dVar3,dVar2,auStack_170);
    _memcpy(auStack_b0,auStack_140,0x30);
    _memcpy(auStack_1d0,auStack_b0,0x30);
    _CGAffineTransformTranslate(-local_40,-local_38,auStack_1d0);
    _memcpy(auStack_b0,auStack_1a0,0x30);
    IVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_freeformPath_026b1ee8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_applyTransform__026b1f20;
    _memcpy(auStack_200,auStack_b0,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,puVar1,auStack_200);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  return;
}

