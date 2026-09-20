// _WCRSFOpenMiniProgramShortLink @ 01635e5c

byte _WCRSFOpenMiniProgramShortLink(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  local_21 = param_2;
  FUN_016360a8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasPrefix__0269d320,&cf__);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    pcVar2 = "WAAppContactPreLoader";
    _objc_getClass();
    FUN_01636178();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_11 = 0;
    }
    else {
      pcVar3 = &
               cf_openAppWithMPLinkString_forbidAlert_fromScene_sceneNote_preScene_preSceneNote_chatType_onSuccess_onFailed_
      ;
      _NSSelectorFromString();
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar3 = &
                 cf_openAppWithMPLinkString_fromScene_sceneNote_preScene_preSceneNote_onSuccess_onFailed_
        ;
        _NSSelectorFromString();
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar3);
        if (((ulong)pcVar2 & 1) == 0) {
          local_11 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,pcVar3,local_30,0x448,&cf_WCRefine,5,&cf___,0,0);
          local_11 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,pcVar3,local_30,local_21 & 1,0x448,&cf_WCRefine,5,&cf___,0,0,0);
        local_11 = 1;
      }
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

