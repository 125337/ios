// wcr_installGenderHeader @ 0152a0ec

/* Function Stack Size: 0x10 bytes */

void WCRCommonFriendListViewController::wcr_installGenderHeader(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double in_d2;
  undefined8 uVar9;
  double local_298;
  ulong local_220;
  ulong local_218;
  undefined *local_1a0 [5];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined *local_158 [4];
  undefined1 local_131;
  undefined *local_130;
  int local_124;
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _memset(auStack_118,0,0x40);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_entries_026a25d0);
  _objc_retainAutoreleasedReturnValue();
  local_218 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_218 != 0) {
    lVar5 = *local_108;
    local_220 = 0;
    do {
      do {
        if (*local_108 - lVar5 != 0) {
          _objc_enumerationMutation(*local_108 - lVar5,IVar3);
        }
        puVar6 = *(undefined **)(local_110 + local_220 * 8);
        local_d8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_friendContact);
        _objc_retainAutoreleasedReturnValue();
        local_124 = 0;
        local_131 = 0;
        bVar2 = false;
        uVar1 = puVar6 != (undefined *)0x0;
        local_120 = puVar6;
        if ((bool)uVar1) {
          puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = puVar6 != puVar4;
          local_131 = uVar1;
          local_130 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          uVar1 = local_131;
        }
        local_131 = uVar1;
        if (bVar2) {
          puVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_valueForKey__0269d128,&cf_m_uiSex);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_124 = (int)puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        if (local_124 == 1) {
          local_c0 = local_c0 + 1;
        }
        else if (local_124 == 2) {
          local_c8 = local_c8 + 1;
        }
        else {
          local_d0 = local_d0 + 1;
        }
        _objc_storeStrong(&local_120,0);
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_220 = 0;
    } while (local_218 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar8 = 0;
  uVar7 = 0;
  uVar9 = 0x4046000000000000;
  FUN_0152a0a0();
  local_178 = uVar7;
  local_170 = uVar8;
  local_160 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_initWithFrame__026ca6e8);
  local_158[0] = puVar6;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_bounds_026ca548);
  local_298 = in_d2 - 32.0;
  if (local_298 <= 40.0) {
    local_298 = 40.0;
  }
  uVar7 = 0x4030000000000000;
  uVar8 = 0x4024000000000000;
  uVar9 = 0x4038000000000000;
  FUN_0152a0a0();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar8,local_298,uVar9,puVar6,PTR_s_initWithFrame__026ca6e8);
  local_1a0[0] = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setTextAlignment__026caa90,1);
  puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0[0],PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02324020,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0[0],PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_7u);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0[0],PTR_s_setText__026caa88);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0[0],PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323d00,local_1a0[0],PTR_s_setMinimumScaleFactor__026ca9d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_addSubview__026ca4c0,local_1a0[0]);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(local_1a0);
  _objc_storeStrong(local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

