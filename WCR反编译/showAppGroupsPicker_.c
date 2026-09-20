// showAppGroupsPicker: @ 0168fc90

/* Function Stack Size: 0x18 bytes */

void AccountDetailViewController::showAppGroupsPicker_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_30,local_18);
  IVar1 = local_18;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_0168fd98;
  local_40 = &DAT_0257c558;
  _objc_copyWeak(auStack_38,auStack_30);
  _WCRSideloadShareFixPresentGroupPicker(IVar1,&local_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

