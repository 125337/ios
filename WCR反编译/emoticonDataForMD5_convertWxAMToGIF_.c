// emoticonDataForMD5:convertWxAMToGIF: @ 00f32864

/* Function Stack Size: 0x1c bytes */

ID WCRefineEmoticonToolsHelper::emoticonDataForMD5_convertWxAMToGIF_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_98;
  char *local_88;
  char *local_68;
  char *local_60;
  char *local_58;
  undefined *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_38;
  byte local_31;
  long local_30;
  SEL local_28;
  char *local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (char *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_31 = (byte)param_4;
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_38 = 1;
  }
  else {
    local_40 = (char *)0x0;
    pcVar2 = "EmoticonUtil";
    _objc_getClass();
    local_50 = PTR_s_dataOfEmoticonForMd5_needUpdateT_026abff8;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_dataOfEmoticonForMd5_needUpdateT_026abff8);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_30,0,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_emoticonFilePathForMD5__026ac000,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 != (char *)0x0) {
        pcVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_58
                  );
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_40;
        local_40 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_58,0);
    }
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    pcVar2 = local_40;
    if (pcVar3 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_38 = 1;
    }
    else if ((local_31 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_38 = 1;
    }
    else {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_normalizeEmoticonDataForAlbum__026ac008,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_sendableDataFromData__026a3db8,pcVar2
                );
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_88 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_88;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isUsableEmoticonImageData__026ac010,local_68);
      if (((ulong)pcVar2 & 1) == 0) {
        local_98 = (char *)0x0;
      }
      else {
        local_98 = local_68;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_98;
      local_38 = 1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

