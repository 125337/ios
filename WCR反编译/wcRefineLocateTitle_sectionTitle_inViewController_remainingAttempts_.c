// wcRefineLocateTitle:sectionTitle:inViewController:remainingAttempts: @ 014cadd0

/* Function Stack Size: 0x30 bytes */

void WCRefineSearchManager::wcRefineLocateTitle_sectionTitle_inViewController_remainingAttempts_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  ID IVar7;
  undefined *puVar8;
  ID IVar9;
  ID IVar10;
  dispatch_time_t dVar11;
  ulong uVar12;
  ID local_230;
  ID local_1f8;
  ID local_198;
  ID local_178;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  ID local_120;
  long local_118;
  long local_110;
  long local_108;
  long_long local_100;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ID local_d0;
  undefined *local_c8;
  undefined *local_c0;
  ID local_b8;
  ulong local_b0;
  ID local_a8;
  ID local_a0;
  ID local_98;
  ulong local_90;
  long local_88;
  ID local_80;
  ID local_78 [3];
  ID local_60;
  int local_54;
  long_long local_50;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  lVar6 = local_38;
  local_50 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (((lVar6 == 0) || (local_48 == 0)) || ((long)local_50 < 1)) {
    local_54 = 1;
  }
  else {
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_findTableViewManagerInViewContro_026af698,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar7,PTR_s_respondsToSelector__026ca818,PTR_s_getAllSections_026af618);
    if ((IVar7 & 1) == 0) {
      local_178 = 0;
    }
    else {
      local_178 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_performSelector__026ca7b8,PTR_s_getAllSections_026af618);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78[0] = local_178;
    IVar7 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
    if ((IVar7 & 1) == 0) {
      local_198 = 0;
    }
    else {
      local_198 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_performSelector__026ca7b8,PTR_s_getTableView_026a09c8);
    }
    (*(code *)PTR__objc_retain_02578638)();
    lVar6 = local_38;
    local_80 = local_198;
    puVar8 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_88 = lVar6;
    (*(code *)PTR__objc_release_02578630)(puVar8);
    local_90 = 0;
    while( true ) {
      uVar12 = local_90;
      bVar5 = false;
      if (local_80 != 0) {
        IVar7 = local_78[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_count_0269cfe0);
        bVar5 = uVar12 < IVar7;
      }
      if (!bVar5) break;
      IVar7 = local_78[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_90);
      _objc_retainAutoreleasedReturnValue();
      local_98 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar7,PTR_s_respondsToSelector__026ca818,PTR_s_headerTitle_026af648);
      if ((IVar7 & 1) == 0) {
        local_1f8 = 0;
      }
      else {
        local_1f8 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_performSelector__026ca7b8,PTR_s_headerTitle_026af648);
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_1f8;
      lVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if ((lVar6 == 0) ||
         ((IVar7 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
          IVar7 != 0 &&
          (IVar7 = local_a0,
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_compare_options__026a2e98,local_40,1)
          , IVar7 == 0)))) {
        IVar7 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
        if ((IVar7 & 1) == 0) {
          local_230 = 0;
        }
        else {
          local_230 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = local_230;
        local_b0 = 0;
        while( true ) {
          uVar3 = local_b0;
          IVar9 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
          IVar7 = local_28;
          uVar12 = uVar3 - IVar9;
          if (IVar9 <= uVar3) break;
          IVar9 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_getTitleFromCellManager__026af650);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          IVar10 = IVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = IVar10;
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(IVar7);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          IVar7 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
          if ((IVar7 == 0) ||
             (IVar7 = local_b8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b8,PTR_s_compare_options__026a2e98,local_88,1), IVar7 != 0)) {
            local_54 = 8;
          }
          else {
            puVar8 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSIndexPath_026ce288,
                       PTR_s_indexPathForRow_inSection__0269e9a0,local_b0,local_90);
            _objc_retainAutoreleasedReturnValue();
            local_c0 = puVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_scrollToRowAtIndexPath_atScrollP_0269e788,puVar8,1,1);
            dVar11 = _dispatch_time(0,300000000);
            puVar8 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            IVar7 = local_80;
            local_f0 = PTR___NSConcreteStackBlock_02578660;
            local_e8 = 0xc2000000;
            local_e4 = 0;
            local_e0 = FUN_014cb8c0;
            local_d8 = &DAT_0257a7a0;
            (*(code *)PTR__objc_retain_02578638)();
            puVar2 = local_c0;
            local_d0 = IVar7;
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = puVar2;
            _dispatch_after(dVar11,puVar8,&local_f0);
            (*(code *)PTR__objc_release_02578630)(puVar8);
            local_54 = 1;
            _objc_storeStrong(&local_c8);
            _objc_storeStrong(&local_d0,0);
            _objc_storeStrong(&local_c0,0);
          }
          _objc_storeStrong(&local_b8,0);
          uVar12 = (ulong)(local_54 - 8U);
          if (local_54 - 8U != 0) goto LAB_014cb634;
          local_b0 = local_b0 + 1;
        }
        local_54 = 0;
LAB_014cb634:
        _objc_storeStrong(uVar12,&local_a8,0);
      }
      else {
        local_54 = 5;
      }
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
      if ((local_54 != 0) && (iVar1 = local_54 + -5, iVar1 != 0)) goto LAB_014cb69c;
      local_90 = local_90 + 1;
    }
    local_54 = 0;
    iVar1 = 0;
LAB_014cb69c:
    _objc_storeStrong(iVar1,&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(local_78,0);
    _objc_storeStrong(&local_60,0);
    if (local_54 == 0) {
      dVar11 = _dispatch_time(0,150000000);
      puVar8 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar7 = local_28;
      local_140 = PTR___NSConcreteStackBlock_02578660;
      local_138 = 0xc2000000;
      local_134 = 0;
      local_130 = FUN_014cba6c;
      local_128 = &DAT_0257d7c8;
      (*(code *)PTR__objc_retain_02578638)();
      lVar6 = local_38;
      local_120 = IVar7;
      (*(code *)PTR__objc_retain_02578638)();
      lVar4 = local_40;
      local_118 = lVar6;
      (*(code *)PTR__objc_retain_02578638)();
      lVar6 = local_48;
      local_110 = lVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_108 = lVar6;
      local_100 = local_50;
      _dispatch_after(dVar11,puVar8,&local_140);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_120,0);
      local_54 = 0;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

