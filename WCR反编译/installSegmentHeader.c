// installSegmentHeader @ 01f56790

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneListViewController::installSegmentHeader(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double in_d0;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 uVar6;
  undefined8 in_d2;
  double dVar7;
  undefined8 in_d3;
  ID local_1f0;
  ID local_1e8;
  double local_1b8;
  undefined *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  undefined8 uStack_148;
  ID local_140;
  undefined4 local_134;
  ID local_130;
  undefined4 local_124;
  ID local_120;
  ID local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  byte local_d9;
  ID local_d8;
  double local_70;
  undefined4 local_64;
  ID local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_60 == 0) {
    local_64 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bounds_026ca548);
    _CGRectGetWidth();
    local_d9 = 0;
    if (in_d0 <= 0.0) {
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_d9 = 1;
      local_d8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
      local_1b8 = in_d0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bounds_026ca548);
      _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
      local_1b8 = in_d0;
    }
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    local_70 = local_1b8;
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x4058800000000000;
    dVar7 = local_70;
    FUN_01f56e6c();
    local_108 = uVar5;
    local_100 = uVar6;
    local_f8 = dVar7;
    local_f0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar6,dVar7,uVar4,puVar2,PTR_s_initWithFrame__026ca6e8);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_48 = &cf_6e;
    local_40 = &cf_KQ;
    local_38 = &cf_Nz;
    local_30 = &cf__IN;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
    local_110 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_filterIndex_026c9470);
    local_124 = 0;
    local_1e8 = IVar1;
    if ((long)IVar1 < 0) {
      local_1e8 = 0;
    }
    local_130 = local_1e8;
    local_118 = local_1e8;
    local_134 = 3;
    if ((long)local_1e8 < 3) {
      local_1f0 = local_1e8;
    }
    else {
      local_1f0 = 3;
    }
    local_140 = local_1f0;
    local_120 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_110,PTR_s_setSelectedSegmentIndex__0269e9e0,local_1f0);
    dVar7 = local_70 - 16.0;
    uVar4 = 0x4020000000000000;
    uVar5 = 0x4022000000000000;
    uVar6 = 0x4041000000000000;
    FUN_01f56e6c();
    local_180 = uVar4;
    uStack_178 = uVar5;
    local_170 = dVar7;
    uStack_168 = uVar6;
    local_160 = uVar4;
    uStack_158 = uVar5;
    local_150 = dVar7;
    uStack_148 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,uVar5,dVar7,uVar6,local_110,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setAutoresizingMask__026ca878);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_110,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_50,
               PTR_s_filterChanged__026aa150,0x1000);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addSubview__026ca4c0,local_110);
    puVar2 = PTR__OBJC_CLASS___UISearchBar_026ce298;
    _objc_alloc();
    uVar5 = 0x4020000000000000;
    dVar7 = local_70 - 16.0;
    uVar4 = 0x4048800000000000;
    uVar6 = 0x4046000000000000;
    FUN_01f56e6c();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar4,dVar7,uVar6,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_188 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAutoresizingMask__026ca878,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setSearchBarStyle__0269e9c0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setPlaceholder__0269e9c8,&cf_d__rTyb);
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_searchText_026ba710);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setText__026caa88);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setDelegate__026ca910,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSearchBar__026a2710,local_188);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addSubview__026ca4c0,local_188);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTableHeaderView__0269ea10,local_e8);
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_e8,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

