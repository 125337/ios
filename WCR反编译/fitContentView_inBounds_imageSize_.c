// fitContentView:inBounds:imageSize: @ 010e1da4

/* Function Stack Size: 0x48 bytes */

void WCRefineNameplateHelper::fitContentView_inBounds_imageSize_
               (ID param_1,SEL param_2,ID param_3,CGRect param_4,CGSize param_5)

{
  long lVar1;
  undefined8 in_d0;
  undefined8 uVar2;
  undefined8 in_d1;
  undefined8 uVar3;
  double in_d2;
  double in_d3;
  double in_d4;
  double in_d5;
  double local_278;
  undefined1 auStack_250 [48];
  undefined1 auStack_220 [80];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_190 [48];
  undefined1 auStack_160 [48];
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  double dStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  double dStack_d8;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [52];
  undefined4 local_6c;
  long local_68;
  SEL local_60;
  ID local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  double local_30;
  double dStack_28;
  
  param_5.field0_0x0 = param_5.field0_0x0;
  local_68 = 0;
  local_60 = param_2;
  local_58 = param_1;
  local_50 = in_d4;
  local_48 = in_d5;
  local_40 = in_d0;
  uStack_38 = in_d1;
  local_30 = in_d2;
  dStack_28 = in_d3;
  _objc_storeStrong(&local_68,param_3,param_3,param_4.field0_0x0.field0_0x0,
                    param_4.field0_0x0.field1_0x8,param_4.field1_0x10.field0_0x0,
                    param_4.field1_0x10.field1_0x8,param_5.field0_0x0);
  if (local_68 == 0) {
    local_6c = 1;
  }
  else {
    FUN_010e20ec(local_68,4);
    if ((((local_50 < 1.0) || (local_48 < 1.0)) || (local_30 < 1.0)) || (dStack_28 < 1.0)) {
      _memcpy(auStack_a0,PTR__CGAffineTransformIdentity_025782d8,0x30);
      lVar1 = local_68;
      _memcpy(auStack_d0,auStack_a0,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_d0);
      uStack_e8 = uStack_38;
      local_f0 = local_40;
      dStack_d8 = dStack_28;
      local_e0 = local_30;
      uStack_108 = uStack_38;
      local_110 = local_40;
      dStack_f8 = dStack_28;
      local_100 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,uStack_38,local_30,dStack_28,local_68,PTR_s_setFrame__026ca960);
      local_6c = 1;
    }
    else {
      local_120 = local_30 / local_50;
      local_128 = dStack_28 / local_48;
      local_278 = local_128;
      if (local_120 < local_128) {
        local_278 = local_120;
      }
      local_130 = local_278;
      local_118 = local_278;
      _memcpy(auStack_160,PTR__CGAffineTransformIdentity_025782d8,0x30);
      lVar1 = local_68;
      _memcpy(auStack_190,auStack_160,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_190);
      uVar3 = 0;
      uVar2 = 0;
      FUN_010e1d58();
      local_1d0 = uVar2;
      uStack_1c8 = uVar3;
      local_1b0 = uVar2;
      uStack_1a8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,uVar3,local_50,local_48,local_68,PTR_s_setBounds__026ca8a0);
      uVar2 = local_40;
      _CGRectGetMidX(local_40,uStack_38,local_30,dStack_28);
      _CGRectGetMidY(local_40,uStack_38,local_30,dStack_28);
      FUN_010e2340();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,local_40,local_68,PTR_s_setCenter__026ca8c0);
      _CGAffineTransformMakeScale(local_118,local_118);
      lVar1 = local_68;
      _memcpy(auStack_250,auStack_220,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_250);
      local_6c = 0;
    }
  }
  _objc_storeStrong(&local_68,0);
  return;
}

