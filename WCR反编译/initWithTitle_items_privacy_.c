// initWithTitle:items:privacy: @ 01dc7004

/* Function Stack Size: 0x24 bytes */

ID WCRSSOverviewRankListController::initWithTitle_items_privacy_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_98;
  cfstringStruct *local_88;
  bool local_51;
  ulong local_50;
  undefined8 *local_48;
  undefined *local_40;
  byte local_31;
  ulong local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_48 = local_18;
  local_31 = (byte)param_5;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_48;
  local_40 = PTR_WCRSSOverviewRankListController_026d00e0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_88 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_88 = &cf__tecL;
    }
    _objc_storeStrong((long)local_18 + (long)_rankTitle,local_88);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar5 = local_30;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_51 = (uVar5 & 1) == 0;
    if (local_51) {
      local_98 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_98 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      local_50 = local_98;
    }
    local_51 = !local_51;
    _objc_storeStrong((long)local_18 + (long)_items,local_98);
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    *(byte *)((long)local_18 + (long)_privacyOn) = local_31 & 1;
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

