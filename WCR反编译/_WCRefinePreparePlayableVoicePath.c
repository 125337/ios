// _WCRefinePreparePlayableVoicePath @ 008e00f4

byte _WCRefinePreparePlayableVoicePath(undefined8 param_1,long *param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_ec;
  cfstringStruct *local_d0;
  undefined8 local_80;
  long local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  long local_50;
  undefined4 local_48;
  long *local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  pcVar1 = local_30;
  local_38 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    local_50 = 0;
    local_58 = 0;
    local_69 = 0;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_d0 = &cf_preview_wav;
    }
    else {
      local_d0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_d0;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_78 = local_50;
    local_80 = local_58;
    pcVar1 = local_30;
    FUN_008e0574(local_30,local_60,&local_78,&local_80);
    _objc_storeStrong(&local_50,local_78);
    _objc_storeStrong(&local_58,local_80);
    if (((ulong)pcVar1 & 1) == 0) {
      local_21 = 0;
    }
    else {
      lVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_ec = 1;
      if (lVar3 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_ec = (uint)puVar5 ^ 1;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      lVar3 = local_50;
      if ((local_ec & 1) == 0) {
        if (local_38 != (long *)0x0) {
          _objc_retainAutorelease();
          *local_38 = lVar3;
        }
        local_21 = 1;
      }
      else {
        local_21 = 0;
      }
    }
    local_48 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

