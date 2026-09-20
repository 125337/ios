// show @ 01ed39c8

/* Function Stack Size: 0x10 bytes */

void WCRToDoAdjustmentFloatingPanel::show(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 in_d1;
  double in_d2;
  double dVar6;
  double dVar7;
  double local_308;
  double local_2f8;
  double local_2f0;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  undefined *local_260;
  undefined1 auStack_258 [48];
  undefined1 auStack_228 [48];
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined *local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  undefined *local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_100;
  double local_f8;
  double local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [48];
  undefined *local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  dVar5 = DAT_02323ff8;
  uVar1 = DAT_02323e70;
  dVar4 = DAT_02323ff8;
  local_30 = param_2;
  local_28 = param_1;
  FUN_01ed40a8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    local_3c = 1;
  }
  else {
    puVar2 = &DAT_028e4860;
    _objc_loadWeakRetained();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      local_f8 = dVar4;
      _CGRectGetWidth();
      local_d8 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      local_120 = dVar4;
      _CGRectGetHeight(dVar4,in_d1);
      local_130 = 0x4075000000000000;
      local_138 = local_d8 - 24.0;
      local_2f0 = local_138;
      if (336.0 < local_138) {
        local_2f0 = 336.0;
      }
      local_140 = local_2f0;
      local_128 = local_2f0;
      local_150 = 0x407c000000000000;
      dVar5 = dVar4 * DAT_02324050;
      local_2f8 = dVar5;
      if (448.0 < dVar5) {
        local_2f8 = 448.0;
      }
      local_160 = local_2f8;
      local_148 = local_2f8;
      local_158 = dVar5;
      local_100 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_safeAreaInsets_026ca828);
      local_188 = (local_d8 - local_128) * 0.5;
      local_1a0 = 0x4028000000000000;
      local_308 = in_d2;
      if (in_d2 < 12.0) {
        local_308 = 12.0;
      }
      local_1a8 = local_308;
      local_190 = (local_100 - local_148) - local_308;
      puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      local_180 = local_2f8;
      local_178 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      dVar5 = local_188;
      dVar4 = local_190;
      FUN_01ed46b8();
      puVar2 = local_1b0;
      local_1c0 = dVar5;
      dStack_1b8 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0);
      if (puVar2 != (undefined *)0x0) {
        puVar3 = local_1b0;
        _CGPointFromString(puVar2);
        local_1d0 = dVar5;
        dStack_1c8 = dVar4;
        FUN_01ed46e4(dVar5,dVar4,*(undefined8 *)PTR__CGPointZero_025782e0,
                     *(undefined8 *)(PTR__CGPointZero_025782e0 + 8));
        if (((ulong)puVar3 & 1) == 0) {
          dStack_1b8 = dStack_1c8;
          local_1c0 = local_1d0;
        }
      }
      puVar2 = PTR_WCRToDoAdjustmentFloatingPanel_026cf6e8;
      _objc_alloc();
      dVar5 = local_1c0;
      dVar4 = dStack_1b8;
      dVar6 = local_128;
      dVar7 = local_148;
      FUN_01ebb220();
      local_1f8 = dVar5;
      local_1f0 = dVar4;
      local_1e8 = dVar6;
      local_1e0 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,dVar4,dVar6,dVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
      local_1d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_clampToWindow__026b8140,local_38);
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setAlpha__026ca860);
      _CGAffineTransformMakeScale(uVar1);
      puVar2 = local_1d8;
      _memcpy(auStack_258,auStack_228,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTransform__026caad0,auStack_258);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_1d8);
      _objc_storeWeak(&DAT_028e4860,local_1d8);
      puVar3 = local_1d8;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_280 = PTR___NSConcreteStackBlock_02578660;
      local_278 = 0xc2000000;
      local_274 = 0;
      local_270 = FUN_01ed473c;
      local_268 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_260 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323e88,0,DAT_02324258,0x3fe3333333333333,puVar2,
                 PTR_s_animateWithDuration_delay_usingS_026ca4f8,0,&local_280);
      _objc_storeStrong(&local_260,0);
      _objc_storeStrong(&local_1d8,0);
      _objc_storeStrong(&local_1b0,0);
      local_3c = 0;
    }
    else {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _CGAffineTransformMakeScale(dVar5);
      puVar2 = local_48;
      _memcpy(auStack_a8,auStack_78,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTransform__026caad0,auStack_a8);
      puVar3 = local_48;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_d0 = PTR___NSConcreteStackBlock_02578660;
      local_c8 = 0xc2000000;
      local_c4 = 0;
      local_c0 = FUN_01ed4618;
      local_b8 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323ec8,0,DAT_02323f60,DAT_02323d00,puVar2,
                 PTR_s_animateWithDuration_delay_usingS_026ca4f8,0,&local_d0);
      local_3c = 1;
      _objc_storeStrong(&local_b0,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

