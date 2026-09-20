// presentManageSheet @ 01b676bc

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::presentManageSheet(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  undefined *local_1c8;
  undefined *local_1c0;
  cfstringStruct *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  undefined8 local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  SEL local_108;
  ID local_100;
  undefined1 auStack_f8 [128];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = &cf_WCActionSheet;
  local_108 = param_2;
  local_100 = param_1;
  _NSClassFromString();
  pcVar2 = &cf_WCActionSheetItem;
  local_110 = pcVar1;
  _NSClassFromString();
  local_118 = pcVar2;
  if ((local_110 != (cfstringStruct *)0x0) && (pcVar2 != (cfstringStruct *)0x0)) {
    local_50 = &cf_>f_y;
    local_48 = &::cf_b;
    local_40 = &cf__eQ;
    local_38 = &cf__Q;
    local_30 = &cf_c_;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_display;
    local_70 = &cf_select;
    local_68 = &cf_import;
    local_60 = &cf_export;
    local_58 = &cf_sort;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_120 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,5
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    puVar5 = local_120;
    local_128 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar3;
    _memset(auStack_178,0,0x40);
    puVar3 = local_120;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_f8,0x10);
    if (local_1c0 != (undefined *)0x0) {
      lVar7 = *local_168;
      local_1c8 = (undefined *)0x0;
      do {
        do {
          if (*local_168 - lVar7 != 0) {
            _objc_enumerationMutation(*local_168 - lVar7,puVar3);
          }
          puVar4 = local_130;
          local_138 = *(undefined8 *)(local_170 + (long)local_1c8 * 8);
          pcVar1 = local_118;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          local_1c8 = local_1c8 + 1;
        } while (local_1c8 < local_1c0);
        local_1c0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_f8,
                   0x10);
        local_1c8 = (undefined *)0x0;
      } while (local_1c0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = local_110;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_180 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_setValue_forKey__0269d300,local_130,&cf_buttonTitleList);
    pcVar1 = local_180;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0x24f769);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_tag);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_setAssociatedObject(local_180,"wcr_le_manage_actions",local_128,1);
    pcVar1 = local_180;
    IVar6 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_120,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

