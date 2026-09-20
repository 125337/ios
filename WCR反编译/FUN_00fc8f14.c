// FUN_00fc8f14 @ 00fc8f14

void FUN_00fc8f14(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  uint local_174;
  uint local_14c;
  undefined4 local_11c;
  uint local_dc;
  ulong local_d0;
  byte local_c1;
  undefined *local_c0;
  cfstringStruct *local_b8;
  byte local_a9;
  undefined *local_a8;
  cfstringStruct *local_a0 [2];
  ulong local_90 [3];
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  ulong local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  undefined8 local_38;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_41 = 0;
  local_dc = 1;
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_dc = (uint)puVar2 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_dc & 1) == 0) {
    pcVar3 = &cf_CaptureVideoInfo;
    _NSClassFromString();
    local_50 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_28 = (cfstringStruct *)0x0;
      local_48 = 1;
    }
    else {
      uVar1 = local_30;
      FUN_00fc8a48();
      uVar4 = local_30;
      local_58 = uVar1;
      FUN_00fc8bc4();
      local_5c = (undefined4)uVar4;
      local_68 = (cfstringStruct *)0x0;
      puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_genVideoInfoWithVideoUrl_thumb_;
      local_70 = puVar2;
      _NSSelectorFromString();
      pcVar5 = local_50;
      local_78 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,local_78,local_70,local_38);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_68;
        local_68 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if (local_68 == (cfstringStruct *)0x0) {
        pcVar5 = local_50;
        _objc_alloc_init();
        pcVar3 = local_68;
        local_68 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setValue_forKey__0269d300,local_30,&cf_video_path);
        uVar1 = local_30;
        FUN_00fc98e4(local_30,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_90[0] = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
        if (uVar1 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_setValue_forKey__0269d300,local_90[0],&cf_thumb_path);
        }
        pcVar3 = local_68;
        if (local_58 < 0x100000000) {
          local_11c = (undefined4)local_58;
        }
        else {
          local_11c = 0xffffffff;
        }
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   local_11c);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_video_size);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(local_90,0);
      }
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_valueForKey__0269d128,&cf_video_path);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 0;
      local_a0[0] = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
      local_14c = 1;
      if (pcVar3 != (cfstringStruct *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_14c = (uint)puVar2 ^ 1;
      }
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      if ((local_14c & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setValue_forKey__0269d300,local_30,&cf_video_path);
      }
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_valueForKey__0269d128,&cf_thumb_path);
      _objc_retainAutoreleasedReturnValue();
      local_c1 = 0;
      local_b8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
      local_174 = 1;
      if (pcVar3 != (cfstringStruct *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_c1 = 1;
        local_c0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_174 = (uint)puVar2 ^ 1;
      }
      if ((local_c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      if ((local_174 & 1) != 0) {
        uVar1 = local_30;
        FUN_00fc98e4(local_30,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
        if (uVar1 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_setValue_forKey__0269d300,local_d0,&cf_thumb_path);
        }
        _objc_storeStrong(&local_d0,0);
      }
      pcVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setVideo_time__026ad0e0);
      pcVar3 = local_68;
      if (((ulong)pcVar5 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   local_5c);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_video_time);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setVideo_time__026ad0e0,local_5c);
      }
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setBRawVideo__026ad0e8);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setBRawVideo__026ad0e8,0);
      }
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setM_uiVideoSource__026ad0f0);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setM_uiVideoSource__026ad0f0,1);
      }
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setM_bForward__026a9b00);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setM_bForward__026a9b00,1);
      }
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(local_a0,0);
      pcVar3 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
      local_48 = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
  }
  else {
    local_28 = (cfstringStruct *)0x0;
    local_48 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

