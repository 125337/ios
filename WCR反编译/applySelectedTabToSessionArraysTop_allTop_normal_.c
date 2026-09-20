// applySelectedTabToSessionArraysTop:allTop:normal: @ 01523bfc

/* Function Stack Size: 0x28 bytes */

bool WCRefineTelegramGroupingStore::applySelectedTabToSessionArraysTop_allTop_normal_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ID local_108;
  ID local_b0;
  ID local_a0;
  ID local_98;
  undefined *local_90;
  byte local_81;
  ID local_80;
  undefined4 local_74;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  SEL local_58;
  ID local_50;
  byte local_41;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLastFilterCacheHit__026b02f0,0);
  IVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasUnfilteredSnapshot_026a8210);
  if ((IVar3 & 1) == 0) {
    local_41 = 0;
    local_74 = 1;
  }
  else {
    IVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_selectedTab_026a2a78);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_50;
    local_80 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isFilteringActive_026a30c8);
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_81 = (byte)IVar4;
    IVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_tabId_026a8270);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_shouldFilterPinnedSessions_026b02e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hidePinned_026a30d0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_____d__d);
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    bVar2 = false;
    bVar1 = false;
    if (((local_81 & 1) == 0) ||
       (IVar3 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_kind_026a27e8),
       IVar3 == 3)) {
      local_108 = 0;
    }
    else {
      local_a0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_filteredArraysByTab_026b02f8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_108 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_b0 = local_108;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_108;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    IVar4 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
    IVar3 = local_50;
    uVar6 = local_60;
    if (IVar4 == 3) {
      IVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_replaceMutableArray_withArray__026b02d8,uVar6);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar3 = local_50;
      uVar6 = local_68;
      IVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_replaceMutableArray_withArray__026b02d8,uVar6);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar3 = local_50;
      uVar6 = local_70;
      IVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectAtIndexedSubscript__0269cc78,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_replaceMutableArray_withArray__026b02d8,uVar6);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLastFilterCacheHit__026b02f0,1);
    }
    else {
      IVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastUnfilteredTop_026b0208);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_replaceMutableArray_withArray__026b02d8,uVar6);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar3 = local_50;
      uVar6 = local_68;
      IVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastUnfilteredAllTop_026a8220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_replaceMutableArray_withArray__026b02d8,uVar6);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar3 = local_50;
      uVar6 = local_70;
      IVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastUnfilteredNormal_026a8230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_replaceMutableArray_withArray__026b02d8,uVar6);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isFilteringActive_026a30c8);
      if ((IVar3 & 1) == 0) {
        IVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hidePinned_026a30d0);
        puVar5 = PTR____NSArray0___02578280;
        if ((IVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_replaceMutableArray_withArray__026b02d8,local_60,
                     *(undefined8 *)PTR____NSArray0___02578280);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_replaceMutableArray_withArray__026b02d8,local_68,
                     *(undefined8 *)puVar5);
        }
      }
      else {
        IVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_shouldFilterPinnedSessions_026b02e0);
        if ((((IVar3 & 1) != 0) ||
            (IVar3 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_kind_026a27e8),
            IVar3 == 5)) ||
           (IVar3 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_kind_026a27e8),
           IVar3 == 2)) {
          uVar6 = local_60;
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
          if ((uVar6 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_filterMutableArray_tab__026b02e8,local_60,local_80);
          }
          uVar6 = local_68;
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
          if ((uVar6 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_filterMutableArray_tab__026b02e8,local_68,local_80);
          }
        }
        uVar6 = local_70;
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_filterMutableArray_tab__026b02e8,local_70,local_80);
        }
        IVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hidePinned_026a30d0);
        puVar5 = PTR____NSArray0___02578280;
        if ((IVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_replaceMutableArray_withArray__026b02d8,local_60,
                     *(undefined8 *)PTR____NSArray0___02578280);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_replaceMutableArray_withArray__026b02d8,local_68,
                     *(undefined8 *)puVar5);
        }
        IVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_kind_026a27e8);
        uVar6 = local_60;
        if (IVar3 != 3) {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
          uVar7 = local_68;
          if ((uVar6 & 1) != 0) {
            puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
            uVar6 = local_70;
            if ((uVar7 & 1) != 0) {
              puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
              if ((uVar6 & 1) != 0) {
                IVar3 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_filteredArraysByTab_026b02f8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_release_02578630)();
                if (IVar3 == 0) {
                  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,
                             PTR_s_dictionary_0269d240);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_50,PTR_s_setFilteredArraysByTab__026b0300);
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                }
                IVar3 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_filteredArraysByTab_026b02f8);
                _objc_retainAutoreleasedReturnValue();
                IVar4 = IVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar3);
                if (7 < IVar4) {
                  IVar3 = local_50;
                  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_filteredArraysByTab_026b02f8)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(IVar3);
                }
                uVar6 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
                uVar7 = local_68;
                local_40 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_copy_0269d150);
                uVar8 = local_70;
                local_38 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
                puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_30 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_40,3);
                _objc_retainAutoreleasedReturnValue();
                IVar3 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_filteredArraysByTab_026b02f8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar3);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                (*(code *)PTR__objc_release_02578630)(uVar8);
                (*(code *)PTR__objc_release_02578630)(uVar7);
                (*(code *)PTR__objc_release_02578630)(uVar6);
              }
            }
          }
        }
      }
    }
    local_41 = 1;
    local_74 = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_41 & 1;
}

