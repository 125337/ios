// searchInViewController:keyword: @ 014d649c

/* Function Stack Size: 0x20 bytes */

ID WCRefineSearchManager::searchInViewController_keyword_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_230;
  undefined *local_148;
  cfstringStruct *local_140;
  undefined *local_138;
  char local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8 [3];
  cfstringStruct *local_d0;
  byte local_c5;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  SEL local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  long local_60;
  long local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_2;
  local_a8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_b8,param_3);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_4);
  if (local_b8 == 0) {
    local_a0 = (undefined *)0x0;
    local_c4 = 1;
  }
  else {
    lVar2 = local_c0;
    FUN_014bdccc();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_c0;
    local_c0 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_c5 = true;
    if (local_c0 != 0) {
      lVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
      local_c5 = lVar3 == 0;
    }
    pcVar4 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_findTableViewManagerInViewContro_026af698,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_a0 = (undefined *)0x0;
      local_c4 = 1;
    }
    else {
      local_e8[0] = (cfstringStruct *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getAllSections_026af618);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar5 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_performSelector__026ca7b8,PTR_s_getAllSections_026af618);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_e8[0];
        local_e8[0] = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      if ((local_e8[0] == (cfstringStruct *)0x0) ||
         (pcVar4 = local_e8[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_count_0269cfe0),
         pcVar4 == (cfstringStruct *)0x0)) {
        local_a0 = (undefined *)0x0;
        local_c4 = 1;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = puVar6;
        for (local_f8 = (cfstringStruct *)0x0; pcVar4 = local_f8, pcVar5 = local_e8[0],
            (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_count_0269cfe0), pcVar4 < pcVar5
            ; local_f8 = (cfstringStruct *)((long)&local_f8->field0_0x0 + 1)) {
          pcVar4 = local_e8[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_108 = (cfstringStruct *)0x0;
          local_100 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
          if (((ulong)pcVar4 & 1) != 0) {
            pcVar5 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_108;
            local_108 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          if (local_108 == (cfstringStruct *)0x0) {
            local_c4 = 5;
          }
          else {
            local_110 = (cfstringStruct *)0x0;
            pcVar4 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_headerTitle_026af648);
            if (((ulong)pcVar4 & 1) != 0) {
              pcVar5 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_performSelector__026ca7b8,PTR_s_headerTitle_026af648);
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = local_110;
              local_110 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(pcVar4);
            }
            local_118 = (cfstringStruct *)0x0;
            while( true ) {
              pcVar4 = local_118;
              pcVar5 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0);
              if (pcVar5 <= pcVar4) break;
              pcVar4 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_objectAtIndexedSubscript__0269cc78,local_118);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = local_a8;
              local_120 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a8,PTR_s_getTitleFromCellManager__026af650,pcVar4);
              _objc_retainAutoreleasedReturnValue();
              local_128 = pcVar5;
              bVar1 = true;
              if (((local_c5 & 1) == 0) && (bVar1 = false, pcVar5 != (cfstringStruct *)0x0)) {
                puVar6 = PTR_s_rangeOfString_options__0269d118;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar5,PTR_s_rangeOfString_options__0269d118,local_c0,1);
                local_140 = pcVar5;
                local_138 = puVar6;
                bVar1 = pcVar5 != (cfstringStruct *)0x7fffffffffffffff;
              }
              local_129 = bVar1;
              if (((bool)local_129 != false) && (local_128 != (cfstringStruct *)0x0)) {
                local_98 = &cf_viewController;
                local_60 = local_b8;
                local_90 = &cf_viewControllerClass;
                lVar3 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_class_0269cd60);
                _NSStringFromClass();
                _objc_retainAutoreleasedReturnValue();
                local_88 = &cf_sectionIndex;
                puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_58 = lVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                           local_f8);
                _objc_retainAutoreleasedReturnValue();
                local_80 = &cf_sectionHeader;
                if (local_110 == (cfstringStruct *)0x0) {
                  local_230 = &::cf___;
                }
                else {
                  local_230 = local_110;
                }
                local_48 = local_230;
                local_78 = &cf_cellIndex;
                puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_50 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                           local_118);
                _objc_retainAutoreleasedReturnValue();
                local_70 = &cf_cellTitle;
                local_38 = local_128;
                local_68 = &cf_cellManager;
                local_30 = local_120;
                puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_40 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
                _objc_retainAutoreleasedReturnValue();
                local_148 = puVar8;
                (*(code *)PTR__objc_release_02578630)(puVar7);
                (*(code *)PTR__objc_release_02578630)(puVar6);
                (*(code *)PTR__objc_release_02578630)(lVar3);
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_148);
                _objc_storeStrong(&local_148,0);
              }
              _objc_storeStrong(&local_128);
              _objc_storeStrong(&local_120,0);
              local_118 = (cfstringStruct *)((long)&local_118->field0_0x0 + 1);
            }
            _objc_storeStrong((long)pcVar4 - (long)pcVar5,&local_110,0);
            local_c4 = 0;
          }
          _objc_storeStrong(&local_108);
          _objc_storeStrong(&local_100,0);
        }
        puVar6 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
        local_c4 = 1;
        local_a0 = puVar6;
        _objc_storeStrong(&local_f0,0);
      }
      _objc_storeStrong(local_e8,0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_a0;
}

