// privacyHeadForUsr:size: @ 01d9c824

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsBoardView::privacyHeadForUsr_size_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_110;
  bool local_101;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  double dStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  undefined *local_a8;
  ulong local_a0;
  char *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  undefined *local_60;
  double local_58;
  ulong local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_58 = param_4;
  _objc_alloc();
  uVar11 = 0;
  uVar9 = 0;
  dVar12 = local_58;
  dVar13 = local_58;
  FUN_01d8ec14();
  local_80 = uVar9;
  local_78 = uVar11;
  local_70 = dVar12;
  local_68 = dVar13;
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,uVar11,puVar5,PTR_s_initWithFrame__026ca6e8);
  uVar11 = 0x4000000000000000;
  dVar10 = local_58 / 2.0;
  local_60 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar10);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x4000000000000000;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
  puVar6 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR_WCRefineGradientPalette_026ce910;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  local_90 = (undefined *)0x0;
  local_88 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_count_0269cfe0);
  if (puVar5 != (undefined *)0x0) {
    local_98 = "works/QuartzCore.framework/QuartzCore";
    local_a0 = 0;
    while( true ) {
      uVar8 = local_a0;
      uVar7 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      puVar5 = local_88;
      pcVar4 = local_98;
      if (uVar7 <= uVar8) break;
      lVar2 = (long)local_98 * 0x21;
      uVar8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_characterAtIndex__0269fa18,local_a0);
      local_98 = (char *)(lVar2 + (uVar8 & 0xffff));
      local_a0 = local_a0 + 1;
    }
    puVar6 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
    uVar8 = 0;
    if (puVar6 != (undefined *)0x0) {
      uVar8 = (ulong)pcVar4 / (ulong)puVar6;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_objectAtIndexedSubscript__0269cc78,(long)pcVar4 - uVar8 * (long)puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_90;
    local_90 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  puVar5 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bounds_026ca548);
  puVar5 = local_a8;
  local_f0 = uVar9;
  uStack_e8 = uVar11;
  local_e0 = dVar12;
  dStack_d8 = dVar13;
  local_c8 = uVar9;
  uStack_c0 = uVar11;
  local_b8 = dVar12;
  dStack_b0 = dVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,uVar11,dVar12,dVar13,local_a8,PTR_s_setFrame__026ca960);
  local_101 = false;
  bVar1 = false;
  if (local_90 == (undefined *)0x0) {
    local_1a8 = (undefined *)0x0;
  }
  else {
    FUN_01d9cfc4();
    bVar1 = ((ulong)puVar5 & 1) == 0;
    local_1a0 = local_90;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_lightStops_026acc90);
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_1a0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_darkStops_026acc88);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_1a0;
    }
    local_101 = !bVar1;
    local_1a8 = local_1a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_1a8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  if (local_101) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  puVar5 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
  if (puVar5 == (undefined *)0x0) {
    local_38 = &cf__7AA2F7;
    local_30 = &cf__F7A1C4;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_f8;
    local_f8 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  puVar3 = local_a8;
  puVar6 = local_f8;
  puVar5 = PTR_WCRefineGradientPalette_026ce910;
  uVar8 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hash_0269ec90);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_configureLayer_hexStops_directio_026bd830,puVar3,puVar6,uVar8 % 6);
  puVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_60;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

