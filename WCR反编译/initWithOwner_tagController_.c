// initWithOwner:tagController: @ 01bfd4f4

/* Function Stack Size: 0x20 bytes */

ID WCRefineMomentsForwardOfficialTagSheetDelegate::initWithOwner_tagController_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_40;
  local_38 = PTR_WCRefineMomentsForwardOfficialTagSheetDelegate_026cff60;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    _objc_storeWeak(local_18 + 1,local_28);
    _objc_storeWeak(local_18 + 2,local_30);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

