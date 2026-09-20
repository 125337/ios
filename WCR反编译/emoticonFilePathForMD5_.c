// emoticonFilePathForMD5: @ 00f32654

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::emoticonFilePathForMD5_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_60;
  char *local_50;
  undefined *local_48;
  char *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar2 = "EmoticonUtil";
    _objc_getClass();
    local_48 = PTR_s_pathOfEmoticonForMd5_needUpdateT_026abff0;
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_pathOfEmoticonForMd5_needUpdateT_026abff0);
    if (((ulong)pcVar2 & 1) == 0) {
      local_18 = (char *)0x0;
      local_34 = 1;
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48,local_30,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      local_60 = 0;
      if (pcVar2 != (char *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_60 = (uint)puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      pcVar2 = local_50;
      if ((local_60 & 1) == 0) {
        local_18 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      local_34 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

