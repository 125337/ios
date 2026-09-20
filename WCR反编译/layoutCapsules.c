// layoutCapsules @ 01e55d88

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramTabStripView::layoutCapsules(ID param_1,SEL param_2)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  double in_d0;
  double dVar5;
  double dVar6;
  undefined8 in_d1;
  double dVar7;
  double in_d2;
  undefined8 in_d3;
  double local_3b0;
  double local_350;
  double local_318;
  ulong local_308;
  double local_2c0;
  ID local_1d8;
  ulong local_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined8 uStack_148;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ID local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b1;
  ulong local_b0;
  byte local_a1;
  ID local_a0;
  double local_98;
  double local_70;
  int local_64;
  double local_60;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_64 = 0;
  IVar2 = local_28;
  local_38 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetHeight(in_d0,in_d1);
  dVar5 = (in_d0 - 32.0) / 2.0;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_2c0 = dVar5;
  if (dVar5 <= (double)(long)local_64) {
    local_2c0 = (double)(long)local_64;
  }
  local_98 = local_2c0;
  local_60 = local_2c0;
  IVar2 = local_28;
  local_70 = dVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabButtons_026c6940);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  local_a0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_usesEqualSplitLayout_026c6948);
  local_a1 = (byte)IVar2;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_centerSlotCount_026c6950);
  local_b1 = (local_a1 & 1) == 0 || IVar2 < local_a0;
  IVar3 = local_28;
  local_b0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((((local_a1 & 1) == 0) || (local_a0 == 0)) || (local_38 <= 1.0)) {
    dVar5 = 12.0;
    local_1c8 = 12.0;
    for (local_1d0 = 0; local_1d0 < local_a0; local_1d0 = local_1d0 + 1) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabButtons_026c6940);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_widthForButton__026c6958,local_1d8);
      in_d3 = 0x4040000000000000;
      dVar7 = local_1c8;
      dVar6 = local_60;
      in_d2 = dVar5;
      FUN_01e55a50();
      (*(code *)PTR__objc_msgSend_02578628)(dVar7,dVar6,local_1d8,PTR_s_setFrame__026ca960);
      uVar1 = local_1d0;
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_badgeViews_026c6960);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      if (uVar1 < IVar3) {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_badgeViews_026c6960);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_layoutBadge_onButton__026c6968,IVar4,local_1d8);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      dVar5 = local_1c8 + dVar5 + 8.0;
      local_1c8 = dVar5;
      _objc_storeStrong(&local_1d8,0);
    }
    local_3b0 = local_1c8 + 4.0;
    if (local_3b0 < local_38) {
      local_3b0 = local_38;
    }
    IVar2 = local_28;
    dVar5 = local_3b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetHeight(dVar5,local_38,in_d2,in_d3);
    FUN_01e56878();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_3b0,dVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    local_c0 = 8.0;
    local_d0 = local_a0;
    local_d8 = local_b0;
    if (local_a0 < local_b0) {
      local_308 = local_a0;
    }
    else {
      local_308 = local_b0;
    }
    local_e0 = local_308;
    local_c8 = (double)NEON_ucvtf(local_308);
    local_c8 = (local_38 - 16.0) / local_c8;
    for (local_e8 = 0; local_e8 < local_a0; local_e8 = local_e8 + 1) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabButtons_026c6940);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_100 = local_c8;
      dVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_widthForButton__026c6958,local_f0);
      local_318 = dVar5;
      if (local_100 < dVar5) {
        local_318 = local_100;
      }
      local_110 = local_318;
      local_f8 = local_318;
      dVar7 = (double)NEON_ucvtf(local_e8);
      dVar6 = local_c0 + dVar7 * local_c8 + (local_c8 - local_318) / 2.0;
      in_d3 = 0x4040000000000000;
      dVar7 = local_60;
      local_118 = dVar6;
      local_108 = dVar5;
      FUN_01e55a50();
      local_160 = dVar6;
      dStack_158 = dVar7;
      local_150 = local_318;
      uStack_148 = in_d3;
      local_138 = dVar6;
      dStack_130 = dVar7;
      local_128 = local_318;
      uStack_120 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(dVar6,dVar7,local_318,local_f0,PTR_s_setFrame__026ca960)
      ;
      uVar1 = local_e8;
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_badgeViews_026c6960);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      if (uVar1 < IVar3) {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_badgeViews_026c6960);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_layoutBadge_onButton__026c6968,IVar4,local_f0);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      _objc_storeStrong(&local_f0,0);
    }
    local_178 = local_38;
    dVar7 = (double)NEON_ucvtf(local_a0);
    dVar7 = local_c8 * dVar7;
    dVar5 = dVar7 + local_c0 * 2.0;
    local_350 = dVar5;
    if (dVar5 <= local_38) {
      local_350 = local_38;
    }
    local_188 = local_350;
    IVar2 = local_28;
    dVar6 = local_350;
    local_180 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1a8 = dVar6;
    local_1a0 = dVar5;
    local_198 = dVar7;
    local_190 = in_d3;
    _CGRectGetHeight(dVar6,dVar5,dVar7,in_d3);
    FUN_01e56878();
    IVar3 = local_28;
    local_170 = local_350;
    dStack_168 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
    _objc_retainAutoreleasedReturnValue();
    dStack_1b8 = dStack_168;
    local_1c0 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,dStack_168);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  return;
}

