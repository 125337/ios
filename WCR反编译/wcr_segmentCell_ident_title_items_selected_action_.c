// wcr_segmentCell:ident:title:items:selected:action: @ 01dbf498

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x40 bytes */

ID WCRefineSessionStatsLayoutViewController::wcr_segmentCell_ident_title_items_selected_action_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7,
             SEL param_8)

{
  bool bVar1;
  long_long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double local_258;
  undefined *local_248;
  undefined *local_110;
  undefined *local_100;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  SEL local_60;
  long_long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  puVar3 = local_38;
  local_60 = param_8;
  local_58 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_dequeueReusableCellWithIdentifie_026a2808,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar3 = local_68;
    local_68 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar7 = 0x4030000000000000;
    uVar8 = 0x402c000000000000;
    uVar9 = 0x4052000000000000;
    uVar11 = 0x4034000000000000;
    FUN_01dbfc68();
    local_90 = uVar7;
    local_88 = uVar8;
    local_80 = uVar9;
    local_78 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,uVar8,uVar9,uVar11,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,0x1f);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_60,0x1000);
    puVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_70,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_styleCell__026c5248,local_68);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSelectionStyle__0269e5f8,0);
  uVar9 = 0;
  uVar7 = 0;
  uVar8 = 0x4030000000000000;
  dVar10 = 0.0;
  FUN_01dbd84c();
  local_e0 = uVar7;
  uStack_d8 = uVar8;
  local_d0 = dVar10;
  uStack_c8 = uVar9;
  local_b8 = uVar7;
  uStack_b0 = uVar8;
  local_a8 = dVar10;
  uStack_a0 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar8,local_68,PTR_s_setSeparatorInset__026a2628);
  puVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_dark_026c4ca0);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setText__026caa88,local_48);
  bVar1 = (IVar5 & 1) == 0;
  local_248 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_110 = local_248;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_100 = local_248;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setTextColor__026caa98,local_248);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  lVar2 = local_58;
  if (((long)local_58 < 0) ||
     (lVar6 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
     lVar6 <= (long)lVar2)) {
    local_58 = 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setSelectedSegmentIndex__0269e9e0,local_58);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  local_258 = ((dVar10 - 72.0) - 16.0) - 56.0;
  if (local_258 <= 168.0) {
    local_258 = 168.0;
  }
  uVar7 = 0x4056000000000000;
  uVar8 = 0x4024000000000000;
  uVar9 = 0x403c000000000000;
  FUN_01dbfc68();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar8,local_258,uVar9,local_f0,PTR_s_setFrame__026ca960);
  puVar3 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

