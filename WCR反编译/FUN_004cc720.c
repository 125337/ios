// FUN_004cc720 @ 004cc720

void FUN_004cc720(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onSearch_026a4100);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_WCRefine_openPluginSearchSetting_0269e958);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_performSelector__026ca7b8,
                 PTR_s_WCRefine_openPluginSearchSetting_0269e958);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_performSelector__026ca7b8,PTR_s_onSearch_026a4100);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

