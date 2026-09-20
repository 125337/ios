// FUN_001e4914 @ 001e4914

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001e4914(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double local_238;
  undefined *local_118;
  undefined *local_108;
  undefined *local_f8;
  undefined *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  undefined4 local_60;
  long local_50;
  double local_48;
  undefined8 local_40;
  undefined *local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_6;
  uStack_28 = param_7;
  _objc_storeStrong(&local_38,param_5);
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_8);
  if (((local_38 == (undefined *)0x0) || (local_48 <= 0.0)) || (local_50 == 0)) {
    FUN_001da018(local_38);
    local_60 = 1;
  }
  else if ((((local_30 & 1) == 0) && ((local_30 & 0x100) == 0)) &&
          (((local_30 & 0x10000) == 0 && ((local_30 & 0x1000000) == 0)))) {
    FUN_001da018(local_38);
    local_60 = 1;
  }
  else {
    dVar6 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    uStack_98 = uStack_28;
    local_a0 = local_30;
    uVar2 = local_30;
    local_88 = dVar6;
    local_80 = param_2;
    local_78 = param_3;
    local_70 = param_4;
    FUN_001e5800(local_30,uStack_28);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEmpty_026a0198);
    if ((uVar2 & 1) == 0) {
      puVar3 = local_38;
      _objc_getAssociatedObject(local_38,DAT_026dfa98);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_a8;
        local_a8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setFillColor__026ca948,puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_setLineJoin__026ca9a8,
                   *(undefined8 *)PTR__kCALineJoinRound_02578418);
        dVar6 = 1000.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setZPosition__026a01a0);
        puVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_setAssociatedObject(local_38,DAT_026dfa98,local_a8,1);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar6,param_2,param_3,param_4,local_a8,PTR_s_setFrame__026ca960);
      uVar2 = local_68;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_CGPath_026ca478);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setPath__026caa08,uVar2);
      lVar5 = local_50;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setStrokeColor__026caa78,lVar5);
      local_238 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setLineWidth__026ca9b0);
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = local_238 <= 0.0;
      if (bVar1) {
        local_118 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      else {
        local_f8 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        local_108 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_238,local_a8,PTR_s_setContentsScale__026ca8f0);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_118);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_108);
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
      _objc_storeStrong(&local_a8,0);
      local_60 = 0;
    }
    else {
      FUN_001da018(local_38);
      local_60 = 1;
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

