// startDownloadAppFileForWrap:chatVC: @ 00f42bf0

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::startDownloadAppFileForWrap_chatVC_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  ID local_60;
  char *local_58;
  undefined *local_50;
  char *local_48;
  ID local_40;
  undefined4 local_34;
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
  if (local_28 == 0) {
    local_34 = 1;
    goto LAB_00f4303c;
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_sessionUserNameFromChatVC_wrap__026ac240,local_30,local_28);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "MsgFileDetailLogicController";
  local_40 = IVar2;
  _objc_getClass();
  local_50 = PTR_s_initWithMsgWrap_userName__026ac258;
  local_58 = (char *)0x0;
  local_48 = pcVar3;
  if (((pcVar3 != (char *)0x0) &&
      ((*(code *)PTR__objc_msgSend_02578628)
                 (pcVar3,PTR_s_instancesRespondToSelector__0269da90,
                  PTR_s_initWithMsgWrap_userName__026ac258), ((ulong)pcVar3 & 1) != 0)) &&
     (IVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     IVar2 != 0)) {
    pcVar4 = local_48;
    _objc_alloc(IVar2);
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_58;
    local_58 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  if ((local_58 == (char *)0x0) && (local_48 != (char *)0x0)) {
    pcVar4 = local_48;
    _objc_alloc_init();
    pcVar3 = local_58;
    local_58 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsUsrName__026a7f80);
    if ((((ulong)pcVar3 & 1) != 0) &&
       (IVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       IVar2 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_nsUsrName__026a7f80,local_40);
    }
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setM_msgWrap__026a7f88);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setM_msgWrap__026a7f88,local_28);
    }
  }
  if (local_58 == (char *)0x0) {
LAB_00f42f4c:
    IVar2 = local_18;
    pcVar3 = "CMessageMgr";
    _objc_getClass("CMessageMgr");
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_serviceOfClass__0269f7e0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_StartDownloadAppAttach_MsgWrap__0269dac8;
    local_60 = IVar2;
    if (((IVar2 != 0) &&
        ((*(code *)PTR__objc_msgSend_02578628)
                   (IVar2,PTR_s_respondsToSelector__026ca818,
                    PTR_s_StartDownloadAppAttach_MsgWrap__0269dac8), (IVar2 & 1) != 0)) &&
       (IVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       IVar2 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,puVar1,local_40,local_28);
    }
    _objc_storeStrong(&local_60,0);
    local_34 = 0;
  }
  else {
    _objc_storeStrong(&DAT_028e2d60,local_58);
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,
               PTR_s_startDownloadAppMsgUploading_0269dab8);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_startDownloadAppMsgUploading_0269dab8);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_startDownload_0269dac0);
    pcVar3 = local_58;
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar6 = &cf_StartDownload;
      _NSSelectorFromString(&cf_StartDownload);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar6);
      pcVar4 = local_58;
      if (((ulong)pcVar3 & 1) == 0) goto LAB_00f42f4c;
      pcVar6 = &cf_StartDownload;
      _NSSelectorFromString(&cf_StartDownload);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar6);
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_startDownload_0269dac0);
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
LAB_00f4303c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

