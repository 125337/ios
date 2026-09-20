// _WCRefineQuickPostChatMessageToMoments @ 0059e4c8

byte _WCRefineQuickPostChatMessageToMoments(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  char *local_150;
  char *local_a0;
  byte local_91;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  long local_38;
  char *local_30;
  byte local_21;
  
  local_30 = (char *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar1 = local_30;
  FUN_0059cce0();
  if (((ulong)pcVar1 & 1) != 0) {
    local_21 = 0;
    local_48 = 1;
    goto LAB_0059ee10;
  }
  pcVar1 = "FavoritesUtil";
  _objc_getClass();
  local_50 = pcVar1;
  if ((((local_30 == (char *)0x0) || (local_38 == 0)) || (pcVar1 == (char *)0x0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_ConvertMsgToFavItem__026a56a0),
     ((ulong)pcVar1 & 1) == 0)) {
    local_21 = 0;
    local_48 = 1;
    goto LAB_0059ee10;
  }
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_ConvertMsgToFavItem__026a56a0,local_30);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_58 = pcVar1;
  FUN_0059d260(local_30,&cf_m_uiMessageType);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_58;
  local_60 = pcVar1;
  FUN_0059d260(local_58,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_68 = pcVar1;
  if (pcVar1 == (char *)0x1) {
    pcVar1 = "WCNewCommitViewController";
    _objc_getClass(0);
    local_70 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithTextType_026a4cf0
                  ), ((ulong)pcVar1 & 1) == 0)) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      pcVar1 = local_70;
      _objc_alloc();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTextType_026a4cf0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_30;
      FUN_0059d260(local_30,&cf_m_nsContent);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 0;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_80 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar5 = (ulong)pcVar1 & 0xffffffff;
      if (((ulong)pcVar1 & 1) == 0) {
LAB_0059e8f0:
        local_150 = local_58;
        FUN_0059d260(uVar5,local_58,&cf_desc);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_150;
      }
      else {
        pcVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
        uVar5 = 0;
        if (pcVar1 == (char *)0x0) goto LAB_0059e8f0;
        local_150 = local_80;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_150;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      FUN_0059ee6c(local_78,local_88);
      lVar4 = local_38;
      FUN_0059f4cc(local_38,local_78);
      local_21 = (byte)lVar4 & 1;
      local_48 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
    }
  }
  else if ((pcVar1 == (char *)0x2) &&
          (pcVar2 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_respondsToSelector__026ca818,
                     PTR_s_ConvertImg2WCUploadTask__026a56a8), pcVar1 = local_30, lVar4 = local_38,
          ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_58;
    FUN_0059d260(local_58,&cf_desc);
    _objc_retainAutoreleasedReturnValue();
    FUN_0059f804(pcVar1,lVar4,pcVar2,1);
    local_21 = (byte)pcVar1 & 1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_48 = 1;
  }
  else {
    pcVar1 = local_58;
    if ((local_68 == "\f") || (local_68 == "E")) {
      FUN_0059fb10(0,local_58,local_38);
      local_21 = (byte)pcVar1 & 1;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = pcVar1;
      if (((local_68 != "") &&
          (pcVar1 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_respondsToSelector__026ca818,
                     PTR_s_canConvertToNoteFavItem__026a56b0), ((ulong)pcVar1 & 1) != 0)) &&
         ((pcVar1 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_canConvertToNoteFavItem__026a56b0,local_58),
          ((ulong)pcVar1 & 1) != 0 &&
          (pcVar1 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_respondsToSelector__026ca818,
                     PTR_s_ConvertFavItemToNoteFavItem__026a56b8), ((ulong)pcVar1 & 1) != 0)))) {
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_ConvertFavItemToNoteFavItem__026a56b8,local_58);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_a0;
        local_a0 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar1 = local_a0;
      FUN_0059d260(local_a0,&cf_type);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar2 == "") {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,
                   PTR_s_ConvertNoteFavItem2WCUploadTask__026a56c0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      local_21 = 0;
      local_48 = 1;
      _objc_storeStrong(&local_a0,0);
    }
  }
  _objc_storeStrong(&local_58,0);
LAB_0059ee10:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

