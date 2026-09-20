// sendVoiceAtPath:toUsr: @ 010099cc

/* Function Stack Size: 0x20 bytes */

bool WCRefineLinkMediaSender::sendVoiceAtPath_toUsr_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_80;
  cfstringStruct *local_50;
  long local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      local_40 = 0;
      lVar1 = local_30;
      _WCRefineVoiceDataFromMediaPath(local_30,&local_40);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
      if (lVar1 == 0) {
        local_11 = 0;
        local_3c = 1;
      }
      else {
        pcVar4 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_80 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_50 = local_80;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        lVar1 = local_48;
        _WCRefineSendVoiceDataToChat(local_48,local_40,local_38,local_30,local_50);
        local_11 = (byte)lVar1 & 1;
        local_3c = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

