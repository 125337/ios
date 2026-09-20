// addRawImageDataViaWeChatTweakLogic:fromViewController: @ 00f5008c

/* Function Stack Size: 0x20 bytes */

bool WCRefineEmoticonToolsHelper::addRawImageDataViaWeChatTweakLogic_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  SEL local_28;
  undefined *local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    pcVar2 = "CBaseFile";
    _objc_getClass();
    local_50 = (char *)0x0;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GetDataMD5__026ac140);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_GetDataMD5__026ac140,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_50;
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    puVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isGIFImageData__026ac528,local_30);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_20;
      local_58 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_resizedImageForEmoticonPick__026ac538,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_58;
      local_58 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_presentOfficialStaticEmoticonPic_026ac540,local_58,local_38);
      local_11 = (byte)puVar4 & 1;
      local_3c = 1;
      _objc_storeStrong(&local_58,0);
    }
    else {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar2 == (char *)0x0) {
        local_11 = 0;
        local_3c = 1;
      }
      else {
        puVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_startOfficialGIFAddWithData_md5__026ac530,local_30,local_50,
                   local_38);
        local_11 = (byte)puVar4 & 1;
        local_3c = 1;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

