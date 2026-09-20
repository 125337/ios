// wcr_applySwipeActionsToCell:indexPath: @ 01bf2af4

/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsDraftListViewController::wcr_applySwipeActionsToCell_indexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  ID local_40;
  uint local_34;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_rowActionsForIndexPath__026c0b48,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setCustomRowAction__026a53c0);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setValue_forKey__0269d300,local_40,&cf_customRowAction);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCustomRowAction__026a53c0,local_40);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

