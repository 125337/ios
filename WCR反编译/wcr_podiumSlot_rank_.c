// wcr_podiumSlot:rank: @ 01da9460

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsBoardView::wcr_podiumSlot_rank_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  unsigned_long_long uVar5;
  ID IVar6;
  undefined *puVar7;
  ID IVar8;
  int iVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  cfstringStruct *local_2d8;
  cfstringStruct *local_248;
  ID local_1d8;
  undefined8 local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  ID local_188;
  bool local_179;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  undefined *local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ID local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined *local_d0;
  double local_c8;
  unsigned_long_long local_c0;
  bool local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined *local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  unsigned_long_long local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 64.0;
  if (param_4 != 0) {
    local_48 = 52.0;
  }
  local_50 = 96.0;
  local_58 = 32.0;
  if (param_4 != 0) {
    local_58 = 26.0;
  }
  local_60 = 28.0;
  if (param_4 != 0) {
    local_60 = 22.0;
  }
  local_68 = 0x4018000000000000;
  local_70 = local_60 + 6.0 + 4.0;
  iVar9 = 0xac;
  if (param_4 != 0) {
    iVar9 = 0x9a;
  }
  local_78 = (double)iVar9;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = param_4;
  _objc_alloc();
  iVar9 = -6;
  if (local_40 != 0) {
    iVar9 = 0x14;
  }
  dVar12 = (double)iVar9;
  uVar10 = 0;
  dVar11 = local_50;
  dVar14 = local_78;
  FUN_01d8ec14();
  local_a0 = uVar10;
  local_98 = dVar12;
  local_90 = dVar11;
  local_88 = dVar14;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar10,dVar12,dVar11,dVar14,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_80 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,local_40 + 1);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_usr);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_b1 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_248 = &::cf___;
  }
  else {
    local_248 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_usr);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_248;
  }
  local_b1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_248;
  if ((local_b1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  uVar5 = local_40;
  FUN_01daa088();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = local_48 + 8.0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_c0 = uVar5;
  _objc_alloc();
  dVar12 = (local_50 - local_c8) / 2.0;
  dVar13 = local_70 - 4.0;
  dVar11 = local_c8;
  dVar14 = local_c8;
  FUN_01d8ec14();
  local_f0 = dVar12;
  local_e8 = dVar13;
  local_e0 = dVar11;
  local_d8 = dVar14;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar12,dVar13,dVar11,dVar14,puVar2,PTR_s_initWithFrame__026ca6e8);
  uVar5 = local_c0;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323d40,local_c0,PTR_s_colorWithAlphaComponent__026ca578);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  dVar11 = local_c8 / 2.0;
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar11);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4004000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar5 = local_c0;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_CGColor_026ca470);
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_d0);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,local_28,PTR_s_wcr_head_size__026c4f68,local_a8);
  _objc_retainAutoreleasedReturnValue();
  dVar13 = (local_50 - local_48) / 2.0;
  dVar11 = local_70;
  dVar14 = local_48;
  dVar12 = local_48;
  local_f8 = IVar6;
  FUN_01d8ec14();
  local_140 = dVar13;
  dStack_138 = dVar11;
  local_130 = dVar14;
  dStack_128 = dVar12;
  local_118 = dVar13;
  dStack_110 = dVar11;
  local_108 = dVar14;
  dStack_100 = dVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar13,dVar11,dVar14,dVar12,local_f8,PTR_s_setFrame__026ca960);
  IVar6 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_f8);
  puVar2 = PTR_WCRSSCrownView_026cf5d0;
  _objc_alloc();
  dVar12 = (local_50 - local_58) / 2.0;
  uVar10 = local_68;
  dVar11 = local_58;
  dVar14 = local_60;
  FUN_01d8ec14();
  local_168 = dVar12;
  local_160 = uVar10;
  local_158 = dVar11;
  local_150 = dVar14;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar12,uVar10,dVar11,dVar14,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_148 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setMedalColor__026c5000,local_c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_148);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_wcr_bindRankItemTap_item__026c5008,local_80,local_38);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_179 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_2d8 = &::cf___;
  }
  else {
    local_2d8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_178 = local_2d8;
  }
  local_179 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = local_2d8;
  if ((local_179 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_178);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_170,&cf__bXT);
  }
  IVar6 = local_28;
  pcVar3 = local_170;
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  FUN_01d8f3a4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_wcr_label_font_color__026c4e70,pcVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_188 = IVar6;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setTextAlignment__026caa90);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setNumberOfLines__026ca9d8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setLineBreakMode__026ca988,4);
  dVar11 = local_70 + local_48 + 8.0;
  dVar14 = local_50 - 4.0;
  uVar10 = 0x4000000000000000;
  uVar15 = 0x4030000000000000;
  FUN_01d8ec14();
  local_1d0 = uVar10;
  dStack_1c8 = dVar11;
  local_1c0 = dVar14;
  uStack_1b8 = uVar15;
  local_1a8 = uVar10;
  dStack_1a0 = dVar11;
  local_198 = dVar14;
  uStack_190 = uVar15;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar10,dVar11,dVar14,uVar15,local_188,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_188);
  IVar6 = local_28;
  IVar8 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_rankCountText__026c5010,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4026000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  FUN_01d8f4e8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_wcr_label_font_color__026c4e70,IVar8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = IVar6;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setNumberOfLines__026ca9d8,2);
  uVar10 = 0x4000000000000000;
  dVar11 = local_70 + local_48 + 24.0;
  dVar14 = local_50 - 4.0;
  uVar15 = 0x403c000000000000;
  FUN_01d8ec14();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar10,dVar11,dVar14,uVar15,local_1d8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_1d8);
  puVar2 = local_80;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1d8);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

