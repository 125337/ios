// colorPreviewForStyle:stopIndex: @ 01de7c28

/* Function Stack Size: 0x20 bytes */

ID WCRefineSpecialTextListViewController::colorPreviewForStyle_stopIndex_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long_long lVar1;
  long_long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  long_long local_140;
  long_long local_138;
  undefined *local_100;
  long local_f8;
  bool local_e9;
  cfstringStruct *local_e8;
  bool local_d9;
  cfstringStruct *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  long_long local_b8;
  long_long local_b0;
  long_long local_a8;
  undefined4 local_9c;
  long_long local_98;
  undefined4 local_8c;
  long_long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  long_long local_58;
  undefined8 local_50;
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
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_58 = param_4;
  _objc_alloc();
  uVar9 = 0;
  uVar7 = 0;
  uVar10 = 0x4048000000000000;
  uVar11 = 0x4036000000000000;
  FUN_01de8294();
  local_80 = uVar7;
  local_78 = uVar9;
  local_70 = uVar10;
  local_68 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar9,uVar10,uVar11,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_8c = 0;
  local_9c = 2;
  local_a8 = local_58;
  if ((long)local_58 < 3) {
    local_138 = local_58;
  }
  else {
    local_138 = 2;
  }
  local_b0 = local_138;
  local_98 = local_138;
  if ((long)local_138 < 1) {
    local_140 = 0;
  }
  else {
    local_140 = local_138;
  }
  local_b8 = local_140;
  local_88 = local_140;
  pcVar4 = (cfstringStruct *)PTR_WCRefineGradientPalette_026ce910;
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_hexStopsFromStyle_dark__026acc98,local_50,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = (cfstringStruct *)PTR_WCRefineGradientPalette_026ce910;
  local_c0 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGradientPalette_026ce910,PTR_s_hexStopsFromStyle_dark__026acc98,local_50,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_88;
  pcVar4 = local_c0;
  local_c8 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  local_d9 = false;
  if ((long)pcVar4 <= (long)lVar1) {
    local_168 = &cf__C45C6A;
  }
  else {
    local_168 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_88);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_168;
  }
  lVar2 = local_88;
  local_d9 = (long)pcVar4 > (long)lVar1;
  local_38 = local_168;
  pcVar4 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  local_e9 = false;
  if ((long)pcVar4 <= (long)lVar2) {
    local_178 = &cf__E87888;
  }
  else {
    local_178 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_88);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_178;
  }
  local_e9 = (long)pcVar4 > (long)lVar2;
  local_30 = local_178;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  if ((local_e9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  for (local_f8 = 0; puVar3 = local_60, local_f8 < 2; local_f8 = local_f8 + 1) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    dVar8 = (double)(local_f8 * 0x1a);
    uVar7 = 0x3ff0000000000000;
    uVar10 = 0x4034000000000000;
    uVar9 = 0x4034000000000000;
    FUN_01de8294();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar8,uVar7,uVar9,uVar10,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_100 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGray3Color_026cab68);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
    puVar6 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_f8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    _WCRefineSpecialTextColor();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addSubview__026ca4c0,local_100);
    _objc_storeStrong(&local_100,0);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar3;
}

