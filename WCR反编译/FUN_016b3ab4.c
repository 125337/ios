// FUN_016b3ab4 @ 016b3ab4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016b3ab4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uVar7;
  double local_170;
  undefined *local_e8;
  ulong local_e0;
  undefined *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_38;
  uint local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == 0) {
    local_2c = 1;
    goto LAB_016b3f68;
  }
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_shadowOpacity_026acc30);
  uVar3 = (ulong)(uint)param_1;
  uVar7 = 0x3c23d70a;
  if (0.01 < param_1) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    uVar2 = (uint)uVar4;
    local_90 = uVar3;
    uStack_88 = uVar7;
    local_80 = param_3;
    uStack_78 = param_4;
    local_68 = uVar3;
    uStack_60 = uVar7;
    local_58 = param_3;
    uStack_50 = param_4;
    _CGRectIsEmpty(uVar3,uVar7,param_3,param_4);
    if ((uVar2 & 1) == 0) {
      uStack_a8 = uStack_60;
      local_b0 = local_68;
      uStack_98 = uStack_50;
      local_a0 = local_58;
      _CGRectIsNull(local_68,uStack_60,local_58,uStack_50);
      if ((uVar2 & 1) == 0) {
        dVar6 = 0.0;
        local_c0 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_cornerRadius_026ca5c8);
        local_170 = dVar6;
        if (dVar6 <= local_c0) {
          local_170 = local_c0;
        }
        local_d0 = local_170;
        local_b8 = local_170;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_c8 = dVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf___2f___2f___2f);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_28;
        local_d8 = puVar5;
        _objc_getAssociatedObject(local_28,&DAT_028e3eb8);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,local_d8);
        bVar1 = (uVar3 & 1) == 0;
        if (bVar1) {
          puVar5 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,uStack_60,local_58,uStack_50,local_b8,
                     PTR__OBJC_CLASS___UIBezierPath_026ce268,
                     PTR_s_bezierPathWithRoundedRect_corner_026ca530);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = puVar5;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGPath_026ca478);
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setShadowPath__026caa50,puVar5);
          _objc_setAssociatedObject(local_28,&DAT_028e3eb8,local_d8,3);
          _objc_storeStrong(&local_e8,0);
        }
        local_2c = (uint)!bVar1;
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
        goto LAB_016b3f58;
      }
    }
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_shadowPath_026b2c88);
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setShadowPath__026caa50,0);
    }
    local_2c = 1;
  }
  else {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_shadowPath_026b2c88);
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setShadowPath__026caa50,0);
    }
    _objc_setAssociatedObject(local_28,&DAT_028e3eb8,0,3);
    local_2c = 1;
  }
LAB_016b3f58:
  _objc_storeStrong(&local_38,0);
LAB_016b3f68:
  _objc_storeStrong(&local_28,0);
  return;
}

