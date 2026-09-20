// showSideloadShareFixAppGroupPicker @ 01a4863c

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::showSideloadShareFixAppGroupPicker
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_28,local_18);
  IVar1 = local_18;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01a48724;
  local_38 = &DAT_0257c558;
  _objc_copyWeak(auStack_30,auStack_28);
  _WCRSideloadShareFixPresentGroupPicker(IVar1,&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}

