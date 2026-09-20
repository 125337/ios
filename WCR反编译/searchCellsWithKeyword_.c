// searchCellsWithKeyword: @ 014d6d6c

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchManager::searchCellsWithKeyword_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  ulong local_c0;
  undefined *local_b8;
  undefined *local_b0;
  ID local_a8;
  undefined *local_a0;
  ID local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined *local_68 [3];
  ulong local_50;
  int local_44;
  ulong local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  FUN_014bdccc();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = local_38;
  local_38 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar7);
  local_40 = 0;
  uVar2 = local_28 + 0x48;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar3 & 1) != 0) {
    uVar2 = local_28 + 0x48;
    _objc_loadWeakRetained();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_40 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (((local_40 == 0) || (local_38 == 0)) ||
     (lVar7 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar7 == 0)) {
    local_44 = 1;
  }
  else {
    local_50 = 0;
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_getAllSections_026af618);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_performSelector__026ca7b8,PTR_s_getAllSections_026af618);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if ((local_50 == 0) ||
       (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
       uVar2 == 0)) {
      local_44 = 1;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_68[0] = puVar5;
      for (local_70 = 0; uVar2 = local_70, uVar3 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0), uVar2 < uVar3;
          local_70 = local_70 + 1) {
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
        _objc_retainAutoreleasedReturnValue();
        local_80 = 0;
        local_78 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
        if ((uVar2 & 1) != 0) {
          uVar3 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_80;
          local_80 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        if (local_80 == 0) {
          lVar7 = 5;
          local_44 = 5;
        }
        else {
          local_88 = 0;
          while( true ) {
            uVar2 = local_88;
            uVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
            lVar7 = uVar2 - uVar3;
            if (uVar3 <= uVar2) break;
            uVar2 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_objectAtIndexedSubscript__0269cc78,local_88);
            _objc_retainAutoreleasedReturnValue();
            IVar6 = local_28;
            local_90 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_getTitleFromCellManager__026af650,uVar2);
            _objc_retainAutoreleasedReturnValue();
            local_98 = IVar6;
            if ((IVar6 != 0) &&
               (puVar5 = PTR_s_rangeOfString_options__0269d118,
               (*(code *)PTR__objc_msgSend_02578628)
                         (IVar6,PTR_s_rangeOfString_options__0269d118,local_38,1), local_a8 = IVar6,
               local_a0 = puVar5, IVar6 != 0x7fffffffffffffff)) {
              puVar5 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSIndexPath_026ce288,
                         PTR_s_indexPathForRow_inSection__0269e9a0,local_88,local_70);
              _objc_retainAutoreleasedReturnValue();
              local_b0 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_addObject__0269d180,puVar5);
              _objc_storeStrong(&local_b0,0);
            }
            _objc_storeStrong(&local_98);
            _objc_storeStrong(&local_90,0);
            local_88 = local_88 + 1;
          }
          local_44 = 0;
        }
        _objc_storeStrong(lVar7,&local_80);
        _objc_storeStrong(&local_78,0);
      }
      puVar5 = local_68[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_count_0269cfe0);
      if (puVar5 != (undefined *)0x0) {
        puVar5 = local_68[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_40;
        local_b8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getTableView_026a09c8);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = uVar2;
        if (uVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_scrollToRowAtIndexPath_atScrollP_0269e788,local_b8,2,1);
        }
        _objc_storeStrong(&local_c0);
        _objc_storeStrong(&local_b8,0);
      }
      _objc_storeStrong(local_68,0);
      local_44 = 0;
    }
    _objc_storeStrong(&local_50,0);
    if (local_44 == 0) {
      local_44 = 0;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

