// FUN_01637f78 @ 01637f78

void FUN_01637f78(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_78;
  undefined *local_38;
  cfstringStruct *local_30;
  char *local_28;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  pcVar1 = "FavoritesCommonUtil";
  _objc_getClass();
  pcVar2 = &cf_OpenWeApp_pagePath_debugMode_originalMsgSender_messageExtraData_fromViewController_;
  local_28 = pcVar1;
  _NSSelectorFromString();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  if ((local_28 == (char *)0x0) ||
     (pcVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,local_30),
     ((ulong)pcVar1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MR_OHr_gN_ec_z_eQS)
    ;
  }
  else {
    if (local_20 == (cfstringStruct *)0x0) {
      local_78 = &cf___;
    }
    else {
      local_78 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,local_30,local_18,local_78,0,&cf___,&cf___,local_38);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

