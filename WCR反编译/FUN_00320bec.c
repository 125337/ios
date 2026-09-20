// FUN_00320bec @ 00320bec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00320bec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  undefined *local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  double local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  double local_30;
  undefined *local_28;
  undefined *puVar3;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = param_1;
  if (local_28 == (undefined *)0x0) {
    local_34 = 1;
  }
  else {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    uVar2 = (uint)puVar3;
    local_90 = param_1;
    uStack_88 = param_2;
    local_80 = param_3;
    uStack_78 = param_4;
    local_58 = param_1;
    uStack_50 = param_2;
    local_48 = param_3;
    uStack_40 = param_4;
    _CGRectIsEmpty(param_1,param_2,param_3,param_4);
    if (((uVar2 & 1) != 0) || (local_30 <= DAT_02323d38)) {
      FUN_00321200(local_28);
      local_34 = 1;
    }
    else {
      local_99 = 0;
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      if (puVar4 != (undefined *)0x0) {
        puVar5 = local_28;
        FUN_00321318();
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        bVar1 = puVar5 == (undefined *)0x0;
        local_98 = puVar5;
      }
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      if (bVar1) {
        local_34 = 1;
      }
      else {
        uStack_c8 = uStack_50;
        local_d0 = local_58;
        uStack_b8 = uStack_40;
        local_c0 = local_48;
        dVar6 = local_30;
        dVar7 = local_30;
        FUN_0032167c();
        local_e0 = dVar6;
        local_d8 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,uStack_c8,local_c0,uStack_b8,dVar6,dVar7,puVar3,
                   PTR_s_bezierPathWithRoundedRect_byRoun_026a0400,3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_28;
        local_a8 = puVar3;
        FUN_00321318();
        _objc_retainAutoreleasedReturnValue();
        local_e8 = puVar4;
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_e8;
          local_e8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setName__0269e0c8,DAT_0257be58);
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setFillColor__026ca948,puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,uStack_50,local_48,uStack_40,local_e8,PTR_s_setFrame__026ca960);
        puVar3 = local_a8;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGPath_026ca478);
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setPath__026caa08,puVar3);
        _objc_storeStrong(&local_e8);
        _objc_storeStrong(&local_a8,0);
        local_34 = 0;
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

