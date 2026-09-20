// tableView:willBeginEditingRowAtIndexPath: @ 01dc5714

/* Function Stack Size: 0x20 bytes */

void WCRefineSessionStatsLayoutViewController::tableView_willBeginEditingRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  ID local_50;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_section_0269e988);
  if (lVar2 == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_catalog_026c5210);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_row_0269e210);
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectAtIndexedSubscript__0269cc78,lVar2);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pages_026c52a0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_50;
    puVar6 = PTR_WCRefineConfig_026cdf58;
    if ((IVar4 & 1) == 0) {
      local_44 = 1;
    }
    else {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mode_026ab488);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_sessionStatsPageIDAllowsRename_m_026c52d0,IVar3,IVar4);
      if (((ulong)puVar6 & 1) == 0) {
        local_44 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setPendingMinusPageID__026c5318,local_50);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
        uVar1 = local_38;
        local_20 = local_40;
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_20,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_reloadRowsAtIndexPaths_withRowAn_026ac990,puVar6,5);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_presentMinusActionsForPageID_026c52e0,local_50);
        local_44 = 0;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_44 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

