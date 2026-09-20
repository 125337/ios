// tableView:moveRowAtIndexPath:toIndexPath: @ 01e406c8

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

void WCRTGTabReorderViewController::tableView_moveRowAtIndexPath_toIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ID local_40;
  long local_38;
  long local_30 [3];
  ID local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  IVar2 = local_18;
  lVar1 = local_30[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_section_0269e988);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_tabsInSection__026c6488,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_30[0];
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_row_0269e210);
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  if (lVar1 < (long)IVar2) {
    puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    lVar1 = local_30[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_row_0269e210);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectAtIndexedSubscript__0269cc78,lVar1);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
    lVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_moveTabId_disabled_toIndex__026c6498,IVar4,lVar1 == 1,lVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

