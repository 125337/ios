// FUN_0023f834 @ 0023f834

undefined8 FUN_0023f834(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  pcVar1 = DAT_028c9340;
  local_29 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(uVar2,local_20,local_28,local_29 & 1);
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,
             PTR_s_applyPlusMenuCustomIconToButton__026a0d28,uVar2,local_28);
  uVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return uVar2;
}

