// FUN_002af980 @ 002af980

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002af980(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_328;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  byte local_51;
  ulong local_50;
  byte local_31;
  undefined *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_6);
  local_51 = 0;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = false;
  if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    uVar4 = local_28;
    FUN_002b0af0();
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar4 != 0;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_31 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
  local_80 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  _CGRectGetHeight(param_1,param_2);
  puVar2 = local_30;
  local_60 = param_1 / 2.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1 / 2.0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_28;
  FUN_002b13fc();
  dVar7 = DAT_02323d58;
  if ((uVar4 & 1) == 0) {
    dVar7 = DAT_02323f10;
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((float)dVar7);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x402a000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar8 = 0;
  uVar9 = 0x4010000000000000;
  FUN_002b1540();
  puVar2 = local_30;
  local_90 = uVar8;
  uStack_88 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_88;
  local_a0 = local_90;
  uVar8 = local_90;
  uVar9 = uStack_88;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  FUN_002b0928();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_30;
  FUN_002acd8c(local_30,0x24f74e);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)puVar2 & 1) != 0) goto LAB_002b0198;
  }
  puVar5 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_initWithEffect__026ca6e0);
  puVar2 = local_a8;
  local_a8 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setTag__026caa80,DAT_02323fa0);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setClipsToBounds__026ca8c8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_insertSubview_atIndex__026ca748,local_a8,0);
LAB_002b0198:
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
  local_f0 = uVar8;
  uStack_e8 = uVar9;
  local_e0 = param_3;
  uStack_d8 = param_4;
  local_c8 = uVar8;
  uStack_c0 = uVar9;
  local_b8 = param_3;
  uStack_b0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar9,local_a8,PTR_s_setFrame__026ca960);
  dVar7 = local_60;
  puVar2 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar7);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  FUN_002b0928();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setHidden__026ca970,local_31 & 1);
  uVar9 = 0x3ff0000000000000;
  uVar8 = 0;
  if ((local_31 & 1) == 0) {
    uVar8 = 0x3ff0000000000000;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setAlpha__026ca860);
  local_f9 = 0;
  bVar1 = (local_31 & 1) == 0;
  if (bVar1) {
    local_328 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,7);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = local_328;
  }
  else {
    local_328 = (undefined *)0x0;
  }
  local_f9 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setEffect__026ca930,local_328);
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  puVar2 = local_30;
  FUN_002acd8c(local_30,0x24f74f);
  _objc_retainAutoreleasedReturnValue();
  local_108 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar9 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    uVar8 = *(undefined8 *)PTR__CGRectZero_025782f0;
    param_4 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    param_3 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_initWithFrame__026ca6e8);
    puVar2 = local_108;
    local_108 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setTag__026caa80,DAT_02323fa8);
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setUserInteractionEnabled__026caad8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addSubview__026ca4c0,local_108);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,uVar9,param_3,param_4,local_108,PTR_s_setFrame__026ca960);
  dVar7 = local_60;
  puVar2 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar7);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  FUN_002b0928();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_28;
  FUN_002b156c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

