// FUN_004cc6a0 @ 004cc6a0

void FUN_004cc6a0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,
             PTR_s_WCRefine_openPluginSearchSetting_0269e958);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_performSelector__026ca7b8,
               PTR_s_WCRefine_openPluginSearchSetting_0269e958);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

