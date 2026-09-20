// initWithChatUsr:isGroup:displayName: @ 01dcb174

/* Function Stack Size: 0x24 bytes */

ID WCRefineSessionStatsViewController::initWithChatUsr_isGroup_displayName_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_48;
  undefined *local_40;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_48 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_48;
  local_40 = PTR_WCRefineSessionStatsViewController_026d00e8;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    uVar3 = local_28;
    FUN_01dc8ed4();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar5 = *(undefined8 *)((long)local_18 + (long)_chatUsr);
    *(undefined8 *)((long)local_18 + (long)_chatUsr) = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    *(byte *)((long)local_18 + (long)_isGroup) = local_29 & 1;
    *(undefined1 *)((long)local_18 + (long)_overviewMode) = 0;
    *(undefined1 *)((long)local_18 + (long)_portraitMode) = 0;
    uVar3 = local_38;
    FUN_01dc8ed4();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar5 = *(undefined8 *)((long)local_18 + (long)_displayName);
    *(undefined8 *)((long)local_18 + (long)_displayName) = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

