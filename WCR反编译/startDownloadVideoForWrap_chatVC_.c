// startDownloadVideoForWrap:chatVC: @ 00f427cc

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::startDownloadVideoForWrap_chatVC_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  ID IVar2;
  ID local_50;
  undefined *local_48;
  uint local_3c;
  ID local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar2 = local_18;
  pcVar1 = "CMessageMgr";
  _objc_getClass("CMessageMgr");
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_serviceOfClass__0269f7e0,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  if ((IVar2 == 0) || (local_28 == 0)) {
    local_3c = 1;
  }
  else {
    local_48 = PTR_s_StartDownloadVideo_MsgWrap_Prior_0269da98;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_StartDownloadVideo_MsgWrap_Prior_0269da98);
    if ((IVar2 & 1) == 0) {
      local_3c = 1;
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_sessionUserNameFromChatVC_wrap__026ac240,local_30,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
      if (IVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,local_48,local_50,local_28,0,0);
      }
      local_3c = (uint)(IVar2 == 0);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

