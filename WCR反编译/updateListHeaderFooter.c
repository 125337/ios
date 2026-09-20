// updateListHeaderFooter @ 01989918

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::updateListHeaderFooter(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double in_d2;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined *local_1c0;
  ID local_190;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  double dStack_108;
  double local_f8;
  double local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_protectionMode_026ba310);
  if ((param_1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar9 = 0;
    uVar5 = 0;
    uVar7 = 0;
    uVar11 = 0x10000000000000;
    FUN_0198a0ec();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar7,uVar9,uVar11,puVar1,PTR_s_initWithFrame__026ca6e8);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar9 = 0;
    uVar5 = 0;
    uVar7 = 0;
    FUN_0198a0ec();
    local_58 = uVar5;
    local_50 = uVar7;
    local_40 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_38 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNumberOfLines__026ca9d8,0);
    uVar5 = 0x402a000000000000;
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setText__026caa88,
               &cf_pcNeeN9YRbcObr_SOSbRsS_N_Ob_TP_eN9Y0N2bk_O_entRdeN_tQNSKbRRd_);
    puVar1 = local_38;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar6 = in_d2 - 40.0;
    dVar8 = 1.7976931348623157e+308;
    local_b8 = uVar5;
    local_b0 = uVar7;
    local_a0 = uVar9;
    FUN_0197b3e0();
    local_98 = dVar6;
    local_90 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_sizeThatFits__0269ec10);
    local_88 = dVar6;
    local_80 = dVar8;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    in_d2 = in_d2 - 40.0;
    uVar5 = 0x4034000000000000;
    uVar7 = 0x4020000000000000;
    dVar10 = local_80;
    local_f8 = dVar6;
    local_f0 = dVar8;
    local_e0 = uVar9;
    FUN_0198a0ec();
    local_120 = uVar5;
    uStack_118 = uVar7;
    local_110 = in_d2;
    dStack_108 = dVar10;
    local_d8 = uVar5;
    uStack_d0 = uVar7;
    local_c8 = in_d2;
    dStack_c0 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar7 = 0;
    dVar10 = local_80 + 16.0;
    uVar5 = uVar7;
    FUN_0198a0ec();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,uVar5,in_d2,dVar10,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_128 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_38);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_38,0);
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayEntries_026ba498);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (IVar3 == 0) {
    local_1c0 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar9 = 0;
    uVar5 = 0;
    uVar7 = 0;
    uVar11 = 0x10000000000000;
    FUN_0198a0ec();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar7,uVar9,uVar11,local_1c0,PTR_s_initWithFrame__026ca6e8);
  }
  else {
    local_190 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_makeFooterStatsView_026ba4a0);
    _objc_retainAutoreleasedReturnValue();
  }
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (IVar3 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_1c0);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_190);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  return;
}

