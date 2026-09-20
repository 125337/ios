// setupFooterView @ 01d2fe90

/* Function Stack Size: 0x10 bytes */

void WCRefineRootViewController::setupFooterView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *local_308;
  undefined *local_300;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  double local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined *local_e8;
  undefined *local_e0;
  SEL local_d8;
  ID local_d0;
  undefined1 auStack_c8 [128];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_components_fromDate__026a44c0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_year_0269fa28);
  local_f0 = 0.0;
  local_f8 = 2.0;
  local_100 = 0.0;
  local_108 = 0x4034000000000000;
  uVar12 = 0x4050000000000000;
  local_110 = 0x4051800000000000;
  uVar9 = 0x4034000000000000;
  uVar7 = 0x4056800000000000;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_118 = uVar7;
  local_e8 = puVar1;
  _objc_alloc();
  IVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar10 = 0;
  uVar14 = uVar10;
  uVar15 = local_118;
  local_160 = uVar7;
  local_158 = uVar9;
  local_150 = uVar12;
  FUN_01d2f764();
  local_140 = uVar10;
  local_138 = uVar14;
  local_130 = uVar12;
  local_128 = uVar15;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar10,uVar14,uVar12,uVar15,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_120 = puVar2;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGray2Color_026c4488);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_168 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_170 = puVar2;
  _objc_alloc();
  puVar1 = PTR__CGRectZero_025782f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  local_178 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTextAlignment__026caa90);
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setTextColor__026caa98,local_168);
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setFont__026ca958,local_170);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setText__026caa88);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),*(undefined8 *)(puVar1 + 0x10),
             *(undefined8 *)(puVar1 + 0x18));
  local_180 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setTextColor__026caa98,local_168);
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setFont__026ca958,local_170);
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setText__026caa88,&cf_D);
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),*(undefined8 *)(puVar1 + 0x10),
             *(undefined8 *)(puVar1 + 0x18));
  local_188 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setTextColor__026caa98,local_168);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setFont__026ca958,local_170);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setText__026caa88,&cf_a_);
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  dVar13 = *(double *)(puVar1 + 0x10);
  uVar14 = *(undefined8 *)(puVar1 + 0x18);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8));
  local_190 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setTextColor__026caa98,local_168);
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setFont__026ca958,local_170);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_190,PTR_s_setText__026caa88,&cf_AllRightsReservedByReXinWangYou);
  dVar8 = local_f0 + local_100;
  dVar11 = local_100;
  local_198 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_bounds_026ca548);
  local_1a0 = dVar13 - 32.0;
  local_48 = local_178;
  local_40 = local_180;
  local_38 = local_188;
  local_30 = local_190;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_1c0 = dVar8;
  local_1b8 = dVar11;
  local_1b0 = dVar13;
  local_1a8 = uVar14;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = puVar1;
  _memset(auStack_210,0,0x40);
  puVar1 = local_1c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_300 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_c8,0x10);
  if (local_300 != (undefined *)0x0) {
    lVar6 = *local_200;
    local_308 = (undefined *)0x0;
    do {
      do {
        if (*local_200 - lVar6 != 0) {
          _objc_enumerationMutation(*local_200 - lVar6,puVar1);
        }
        local_1d0 = *(undefined8 *)(local_208 + (long)local_308 * 8);
        uVar15 = 0x4030000000000000;
        uVar14 = 0x4030000000000000;
        dVar11 = local_198;
        dVar8 = local_1a0;
        FUN_01d2f764();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar14,dVar11,dVar8,uVar15,local_1d0,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_addSubview__026ca4c0,local_1d0);
        local_198 = local_198 + local_f8 + 16.0;
        local_308 = local_308 + 1;
      } while (local_308 < local_300);
      local_300 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_c8,0x10)
      ;
      local_308 = (undefined *)0x0;
    } while (local_300 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_tableViewMgr_026af5e8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

