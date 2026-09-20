// persistAddedCustomPageActionWithName:controller: @ 01cce520

/* Function Stack Size: 0x20 bytes */

void WCRefineProfileCardActionConfigViewController::persistAddedCustomPageActionWithName_controller_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong local_188;
  ulong local_180;
  ID local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  int local_dc;
  ID local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  lVar9 = local_c0;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar9;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_resolvedControllerNameForInput__026c3668,local_c8);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = local_d0;
  local_d8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if ((lVar9 == 0) ||
     (IVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
     IVar2 == 0)) {
    FUN_01ccedf8(&cf_mR1Y_,&cf_ubTbc6RhVN_Nzz);
    local_dc = 1;
  }
  else {
    FUN_01ccf01c();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar3 & 1) == 0) {
      local_e8 = (undefined *)0x0;
      IVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_isEqualToString__0269ccc8,&cf_WCPluginsViewController);
      if ((IVar2 & 1) == 0) {
        IVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineRootViewController);
        if ((IVar2 & 1) != 0) {
          _objc_storeStrong(&local_e8,&cf_custom_page_wcrefine_hub);
        }
      }
      else {
        _objc_storeStrong(&local_e8,&cf_custom_page_plugins_hub);
      }
      _memset(auStack_130,0,0x40);
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_orderedActionIDs_026c35a0);
      _objc_retainAutoreleasedReturnValue();
      local_180 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_180 != 0) {
        lVar9 = *local_120;
        local_188 = 0;
        do {
          do {
            if (*local_120 - lVar9 != 0) {
              _objc_enumerationMutation(*local_120 - lVar9,IVar2);
            }
            local_f0 = *(undefined8 *)(local_128 + local_188 * 8);
            puVar1 = PTR_WCRefineProfileCardActionCatalog_026ced78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineProfileCardActionCatalog_026ced78,
                       PTR_s_isCustomPageActionID__026b0670,local_f0);
            if (((ulong)puVar1 & 1) != 0) {
              IVar3 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_customPageControllerMap_026c35e8)
              ;
              _objc_retainAutoreleasedReturnValue();
              IVar4 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_138 = IVar4;
              (*(code *)PTR__objc_release_02578630)(IVar3);
              IVar3 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_isEqualToString__0269ccc8,local_d8);
              if ((IVar3 & 1) == 0) {
                local_dc = 0;
              }
              else {
                _objc_storeStrong(&local_e8,local_f0);
                local_dc = 2;
              }
              _objc_storeStrong(&local_138,0);
              if (local_dc != 0) goto LAB_01cce964;
            }
            local_188 = local_188 + 1;
          } while (local_188 < local_180);
          local_180 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_188 = 0;
        } while (local_180 != 0);
      }
      local_dc = 0;
LAB_01cce964:
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar5 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (puVar5 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_stringWithFormat__0269cca8,&cf_custom_page___);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_e8;
        local_e8 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_customTitleMap_026c35b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_customPageControllerMap_026c35e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hiddenActionIDs_026c35a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar1 = PTR_WCRefineProfileCardActionCatalog_026ced78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineProfileCardActionCatalog_026ced78,
                 PTR_s_isSeededCustomPageActionID__026c3670,local_e8);
      if (((ulong)puVar1 & 1) != 0) {
        IVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_deletedSeededActionIDs_026c35b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_orderedActionIDs_026c35a0);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar3 & 1) == 0) {
        IVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_orderedActionIDs_026c35a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_persistActionConfig_026c35f8);
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__mR_);
      _objc_retainAutoreleasedReturnValue();
      FUN_01ccedf8(&cf_mRbR);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_e8,0);
      local_dc = 0;
    }
    else {
      FUN_01ccedf8(&cf_mR1Y_,&cf___WN_ecReQDeaS);
      local_dc = 1;
    }
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

