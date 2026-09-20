// shiftVisibleTabId:by: @ 0151e094

/* Function Stack Size: 0x20 bytes */

bool WCRefineTelegramGroupingStore::shiftVisibleTabId_by_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_108;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  long local_58;
  undefined4 local_4c;
  long_long local_48;
  long local_40;
  SEL local_38;
  undefined *local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (undefined *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = param_4;
  if (param_4 == 0) {
    local_21 = 0;
    local_4c = 1;
  }
  else {
    lVar1 = local_40;
    FUN_01516994();
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_21 = 0;
      local_4c = 1;
    }
    else {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_visibleTabs_026a8350);
      _objc_retainAutoreleasedReturnValue();
      local_68 = (undefined *)0x7fffffffffffffff;
      local_60 = puVar2;
      for (local_70 = (undefined *)0x0; puVar2 = local_70, puVar3 = local_60,
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0), puVar2 < puVar3;
          local_70 = local_70 + 1) {
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar4 & 1) != 0) {
          local_68 = local_70;
          break;
        }
      }
      if (local_68 == (undefined *)0x7fffffffffffffff) {
        local_21 = 0;
        local_4c = 1;
      }
      else {
        puVar2 = local_68 + local_48;
        local_78 = puVar2;
        if (((long)puVar2 < 0) ||
           (puVar3 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0),
           (long)puVar3 <= (long)puVar2)) {
          local_21 = 0;
          local_4c = 1;
        }
        else {
          puVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_80 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cachedTabs_026b0180);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_91 = 0;
          local_108 = puVar3;
          if (puVar3 == (undefined *)0x0) {
            local_108 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_90 = local_108;
          }
          local_91 = puVar3 == (undefined *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = local_108;
          if ((local_91 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_90);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_a0 = (undefined *)0x7fffffffffffffff;
          local_a8 = (undefined *)0x7fffffffffffffff;
          for (local_b0 = (undefined *)0x0; puVar2 = local_b0, puVar3 = local_88,
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0), puVar2 < puVar3;
              local_b0 = local_b0 + 1) {
            puVar2 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_b0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_b8 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isEqualToString__0269ccc8,local_58)
            ;
            if (((ulong)puVar2 & 1) != 0) {
              local_a0 = local_b0;
            }
            puVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isEqualToString__0269ccc8,local_80)
            ;
            if (((ulong)puVar2 & 1) != 0) {
              local_a8 = local_b0;
            }
            _objc_storeStrong(&local_b8,0);
          }
          if (((local_a0 == (undefined *)0x7fffffffffffffff) ||
              (local_a8 == (undefined *)0x7fffffffffffffff)) || (local_a0 == local_a8)) {
            local_21 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_exchangeObjectAtIndex_withObject_026a84f8,local_a0,local_a8);
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCachedTabs__026b0198,local_88);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,0);
            local_21 = 1;
          }
          local_4c = 1;
          _objc_storeStrong(&local_88);
          _objc_storeStrong(&local_80,0);
        }
      }
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

