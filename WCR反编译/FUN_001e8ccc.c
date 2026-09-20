// FUN_001e8ccc @ 001e8ccc

void FUN_001e8ccc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  uint local_180;
  undefined8 local_88;
  ulong local_80;
  ulong local_78;
  byte local_69;
  undefined *local_68;
  undefined4 local_5c;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (((local_28 != 0) &&
      (uVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isHidden_026ca768),
      (uVar2 & 1) == 0)) &&
     ((*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8), DAT_02323cd0 < param_1))
  {
    uVar2 = local_28;
    dVar6 = DAT_02323cd0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    uVar1 = (uint)uVar2;
    local_58 = param_1;
    local_50 = dVar6;
    local_48 = param_3;
    local_40 = param_4;
    _CGRectIsEmpty(param_1,dVar6,param_3,param_4);
    if ((uVar1 & 1) == 0) {
      uVar2 = local_28;
      FUN_001e99ac();
      uVar1 = (uint)uVar2;
      if ((uVar2 & 1) == 0) {
        local_5c = 1;
        goto LAB_001e9958;
      }
      local_69 = 0;
      FUN_001e9b14();
      local_180 = 1;
      if ((uVar1 & 1) != 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_180 = (uint)puVar3;
      }
      uVar1 = local_180;
      if ((local_69 & 1) != 0) {
        puVar3 = local_68;
        (*(code *)PTR__objc_release_02578630)();
        uVar1 = (uint)puVar3;
      }
      if ((local_180 & 1) != 0) {
        FUN_001e9bb0(local_28);
        local_5c = 1;
        goto LAB_001e9958;
      }
      FUN_001e9fdc();
      if ((uVar1 & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_78 = 0;
      local_88 = 0;
      uVar2 = local_28;
      FUN_001ea078(local_28,&local_88);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_78,local_88);
      local_80 = uVar2;
      if (uVar2 == 0) {
        local_5c = 1;
      }
      else {
        dVar6 = param_1;
        if (local_78 != 0) {
          FUN_001ea5bc();
          uVar9 = 0;
          dVar5 = 0.0;
          dVar10 = param_1;
          FUN_001ea6b4();
          uVar2 = local_78;
          dVar6 = dVar10;
          uVar8 = uVar9;
          dVar7 = param_1;
          dVar11 = dVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_isLayoutMarginsRelativeArrangeme_026a0238);
          if ((uVar2 & 1) != 0) {
            uVar2 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_layoutMargins_026a0240);
            FUN_001ea700(dVar6,uVar8,dVar7,dVar11,dVar5,param_1,uVar9,dVar10);
            if ((uVar2 & 1) != 0) goto LAB_001e9318;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_setLayoutMarginsRelativeArrangem_026a0248,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar5,param_1,uVar9,dVar10,local_78,PTR_s_setLayoutMargins__026a0250);
          uVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setNeedsLayout_0269deb8);
          dVar6 = dVar5;
        }
LAB_001e9318:
        uVar1 = (uint)uVar2;
        FUN_001e9fdc();
        if ((uVar1 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
          uVar2 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        FUN_001ea7a0();
        FUN_001d5a74(local_80);
        dVar7 = dVar6;
        FUN_001ea898();
        uVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar6);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (dVar7 <= 0.0) {
          uVar2 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
          uVar2 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          uVar2 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(dVar7);
          (*(code *)PTR__objc_release_02578630)();
          FUN_001ea978();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_CGColor_026ca470);
          uVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        local_5c = 0;
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      goto LAB_001e9958;
    }
  }
  local_5c = 1;
LAB_001e9958:
  _objc_storeStrong(&local_28,0);
  return;
}

