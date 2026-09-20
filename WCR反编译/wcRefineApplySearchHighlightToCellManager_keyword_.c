// wcRefineApplySearchHighlightToCellManager:keyword: @ 014cbf64

/* Function Stack Size: 0x20 bytes */

void WCRefineSearchManager::wcRefineApplySearchHighlightToCellManager_keyword_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  long local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (char *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_28 != (char *)0x0) &&
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    pcVar2 = "WCTableViewCellManager";
    _objc_getClass();
    pcVar3 = pcVar2;
    FUN_014cbe50(pcVar2,"WCRSearchSwitchCellManager");
    if ((pcVar3 != (char *)0x0) && (pcVar4 = local_28, _object_getClass(), pcVar4 == pcVar2)) {
      _object_setClass(0,local_28,pcVar3);
    }
    _objc_setAssociatedObject(local_28,&DAT_028e3690,local_30,3);
    uVar5 = *(ulong *)(local_18 + 0x68);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8,local_28);
    if ((uVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + 0x68),PTR_s_addObject__0269d180,local_28);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

