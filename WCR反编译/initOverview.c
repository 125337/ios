// initOverview @ 01dcb368

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsViewController::initOverview(ID param_1,SEL param_2)

{
  ID *pIVar1;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID *local_18;
  
  local_18 = (ID *)0x0;
  pIVar1 = &local_30;
  local_28 = PTR_WCRefineSessionStatsViewController_026d00e8;
  local_30 = param_1;
  local_20 = param_2;
  _objc_msgSendSuper2(pIVar1,PTR_s_init_026ca6a8);
  local_18 = pIVar1;
  _objc_storeStrong(&local_18);
  if (pIVar1 != (ID *)0x0) {
    *(undefined1 *)((long)local_18 + (long)_overviewMode) = 1;
    *(undefined1 *)((long)local_18 + (long)_portraitMode) = 0;
    *(undefined1 *)((long)local_18 + (long)_isGroup) = 0;
    _objc_storeStrong((long)local_18 + (long)_chatUsr,&::cf___);
    _objc_storeStrong((long)local_18 + (long)_displayName,&cf_hQO);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  return (ID)pIVar1;
}

