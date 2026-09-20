// showSelectBar @ 019a60b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::showSelectBar(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID IVar12;
  ID IVar13;
  undefined *puVar14;
  undefined *puVar15;
  ID IVar16;
  ID IVar17;
  ID IVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *local_480;
  undefined1 *local_458;
  undefined *local_210;
  undefined *local_208;
  byte local_1fa;
  byte local_1f9;
  undefined1 *local_1f8;
  byte local_1e9;
  undefined1 *local_1e8;
  byte local_1da;
  undefined1 local_1d9;
  undefined *local_1d8;
  undefined1 *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 local_168;
  SEL local_160;
  ID local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = param_2;
  local_158 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    local_168 = 0x404f000000000000;
    local_170 = 0x403a000000000000;
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc_init();
    local_178 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar27 = local_170;
    puVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar27);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    puVar3 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3e3851ec);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar27 = 0;
    uVar28 = 0x4010000000000000;
    FUN_0197b3e0();
    puVar2 = local_178;
    local_188 = uVar27;
    uStack_180 = uVar28;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uStack_198 = uStack_180;
    local_1a0 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,uStack_180);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar4 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setSelectBar__026ba768,local_178);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_170,local_158,PTR_s_addFrostedBackgroundTo_cornerRad_026b9d78,local_178);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar3 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_centerXAnchor_0269ce00);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_178;
    local_50 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,puVar7,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = local_178;
    local_48 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    IVar12 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar13 = IVar12;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc028000000000000,puVar11,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = local_178;
    local_40 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    IVar16 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar17 = IVar16;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar18 = IVar17;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc020000000000000,puVar15,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = local_178;
    local_38 = puVar19;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    (*(code *)PTR__objc_msgSend_02578628)(local_168);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar21;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar22);
    (*(code *)PTR__objc_release_02578630)(puVar21);
    (*(code *)PTR__objc_release_02578630)(puVar20);
    (*(code *)PTR__objc_release_02578630)(puVar19);
    (*(code *)PTR__objc_release_02578630)(IVar18);
    (*(code *)PTR__objc_release_02578630)(IVar17);
    (*(code *)PTR__objc_release_02578630)(IVar16);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
    (*(code *)PTR__objc_release_02578630)(IVar13);
    (*(code *)PTR__objc_release_02578630)(IVar12);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(IVar9);
    (*(code *)PTR__objc_release_02578630)(IVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_88 = &cf_S__;
    local_80 = &cf_Y6R;
    local_78 = &cf_yR;
    local_70 = &cf__4;
    local_68 = &cf_6e;
    local_60 = &cf__Q;
    local_58 = &cf_Rd;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = &cf_fileicon_zip;
    local_b8 = &cf_copy_filled;
    local_b0 = &cf_icons_filled_folder;
    local_a8 = &cf_icons_filled_note;
    local_a0 = &cf_star_regular;
    local_98 = &cf_share_filled;
    local_90 = &cf_trash_on_filled;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_1a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,7
              );
    _objc_retainAutoreleasedReturnValue();
    local_f8 = &cf_archivebox;
    local_f0 = &cf_doc_on_doc;
    local_e8 = &cf_folder;
    local_e0 = &cf_doc_on_clipboard;
    local_d8 = &cf_star;
    local_d0 = &cf_square_and_arrow_up;
    local_c8 = &cf_trash;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_1b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f8,7
              );
    _objc_retainAutoreleasedReturnValue();
    local_130 = &cf_compressSelected;
    local_128 = &cf_copySelectedToClipboard;
    local_120 = &cf_cutSelectedToClipboard;
    local_118 = &cf_pasteClipboardInSelectMode;
    local_110 = &cf_favoriteSelected;
    local_108 = &cf_exportSelected;
    local_100 = &cf_deleteSelected;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_1b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_130,
               7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIStackView_026ce068;
    local_1c0 = puVar3;
    _objc_alloc_init();
    local_1c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setAxis__0269cf78);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setDistribution__026aa640,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setAlignment__026ca858,0);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_1c8,PTR_s_setSpacing__0269cf80);
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_addSubview__026ca4c0,local_1c8);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar3 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4018000000000000,puVar3,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = local_1c8;
    local_150 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc018000000000000,puVar10,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = local_1c8;
    local_148 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)(puVar15,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = local_1c8;
    local_140 = puVar20;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar21;
    (*(code *)PTR__objc_msgSend_02578628)(puVar21,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_138 = puVar23;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_150,
               4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar24);
    (*(code *)PTR__objc_release_02578630)(puVar23);
    (*(code *)PTR__objc_release_02578630)(puVar22);
    (*(code *)PTR__objc_release_02578630)(puVar21);
    (*(code *)PTR__objc_release_02578630)(puVar20);
    (*(code *)PTR__objc_release_02578630)(puVar19);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_1d0 = (undefined1 *)0x0;
    while( true ) {
      puVar26 = local_1d0;
      puVar25 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_count_0269cfe0);
      if (puVar25 <= puVar26) break;
      puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = local_1d0;
      local_458 = local_1a8;
      local_1d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_count_0269cfe0);
      local_1d9 = puVar26 == local_458 + -1;
      local_1da = local_1d0 == (undefined1 *)0x0;
      local_1e9 = 0;
      local_1f9 = 0;
      if ((bool)local_1d9) {
        local_458 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
        _objc_retainAutoreleasedReturnValue();
        local_1e9 = 1;
        local_1e8 = local_458;
      }
      else {
        FUN_0197f418();
        _objc_retainAutoreleasedReturnValue();
        local_1f9 = 1;
        local_1f8 = local_458;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setTintColor__026caab0,local_458);
      if ((local_1f9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1f8);
      }
      if ((local_1e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1e8);
      }
      puVar2 = local_1d8;
      puVar3 = local_1d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_tintColor_026a2e28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,puVar3,0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_1fa = true;
      if (((local_1da & 1) == 0) &&
         (local_1fa = true, local_1d0 != (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
        local_1fa = local_1d0 == (undefined1 *)((long)&MACH_HEADER.magic + 3);
      }
      puVar2 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_objectAtIndexedSubscript__0269cc78,local_1d0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = (local_1fa & 1) == 0;
      if (bVar1) {
        local_480 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_tintColor_026a2e28);
        _objc_retainAutoreleasedReturnValue();
        local_210 = local_480;
      }
      else {
        local_480 = (undefined *)0x0;
      }
      puVar3 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_1d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      FUN_01986b9c(0x4036000000000000,puVar2,local_480);
      _objc_retainAutoreleasedReturnValue();
      local_208 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_210);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setImage_forState__0269cc60,local_208);
      puVar2 = local_1d8;
      puVar26 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_1d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitle_forState__026caab8,puVar26,0);
      (*(code *)PTR__objc_release_02578630)(puVar26);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4022000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_1d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_layoutButtonVerticalImageTop__026ba770,local_1d8);
      IVar4 = local_158;
      puVar2 = local_1d8;
      puVar3 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_1d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_addTarget_action_forControlEvent_026ca4c8,IVar4,puVar6,0x40);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addArrangedSubview__026b9d98,local_1d8);
      _objc_storeStrong(&local_208);
      _objc_storeStrong(&local_1d8,0);
      local_1d0 = local_1d0 + 1;
    }
    _objc_storeStrong((long)puVar26 - (long)puVar25,&local_1c8);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_1b8,0);
    _objc_storeStrong(&local_1b0,0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_178,0);
  }
  IVar4 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_bottomBar_026a0ef8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_searchBottomButton_026ba3f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_selectBar_026ba3f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_bringSubviewToFront__026ca550);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

