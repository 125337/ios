// FUN_0058b544 @ 0058b544

/* WARNING: Type propagation algorithm not settling */

byte FUN_0058b544(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  uint local_1ac;
  ulong local_e0;
  char *local_d8;
  undefined *local_d0;
  char *local_c8;
  undefined8 local_c0;
  byte local_b1;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  uint local_5c;
  ulong local_40 [3];
  byte local_21;
  
  local_40[2] = 0;
  _objc_storeStrong(local_40 + 2,param_1);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_2);
  local_40[0] = 0;
  uVar2 = local_40[2];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_sightDraft_026a4d98);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_40[0];
  local_40[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (local_40[0] == 0) {
    local_21 = 1;
    local_5c = 1;
    goto LAB_0058c010;
  }
  uVar3 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40[0],PTR_s_respondsToSelector__026ca818,PTR_s_getItem__026a54b0);
  if ((uVar3 & 1) == 0) {
    local_21 = 0;
    local_5c = 1;
    goto LAB_0058c010;
  }
  uVar3 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_getItem__026a54b0,2);
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar3;
  if (uVar3 == 0) {
    local_21 = 0;
    local_5c = 1;
  }
  else {
    FUN_00589dc8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_78 = 0;
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_78;
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_78,local_80);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (((ulong)puVar5 & 1) == 0) {
      local_21 = 0;
      local_5c = 1;
    }
    else {
      uVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_stringByAppendingPathComponent__026cab30,&cf_video_mp4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_88 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_fileExistsAtPath__026ca630,local_88);
      if (((ulong)puVar4 & 1) == 0) {
        uVar3 = local_68;
        FUN_0058e49c(local_68,&cf_getVideoPath);
        _objc_retainAutoreleasedReturnValue();
        local_98 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          uVar2 = local_40[0];
          FUN_0058e49c(local_40[0],&cf_draftItemVideoPath);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_98;
          local_98 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
LAB_0058ba60:
          local_21 = 0;
          local_5c = 1;
        }
        else {
          local_a0 = local_78;
          puVar4 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_copyItemAtPath_toPath_error__026a1758,local_98,local_88,
                     &local_a0);
          _objc_storeStrong(&local_78,local_a0);
          if (((ulong)puVar4 & 1) == 0) goto LAB_0058ba60;
          local_5c = 0;
        }
        _objc_storeStrong(&local_98,0);
        if (local_5c == 0) goto LAB_0058baa0;
      }
      else {
LAB_0058baa0:
        uVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_stringByAppendingPathComponent__026cab30,&cf_video_thumb_jpg);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_90;
        local_a8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_fileExistsAtPath__026ca630,uVar3);
        if (((ulong)puVar4 & 1) == 0) {
          uVar3 = local_68;
          FUN_0058e49c(local_68,&cf_getThumbPath);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
          local_1ac = 0;
          if (uVar3 != 0) {
            local_c0 = local_78;
            puVar4 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_copyItemAtPath_toPath_error__026a1758,local_b0,local_a8,
                       &local_c0);
            local_1ac = (uint)puVar4;
            _objc_storeStrong(&local_78,local_c0);
          }
          local_b1 = (byte)local_1ac & 1;
          if (((local_1ac & 1) == 0) &&
             (uVar3 = local_b0,
             (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0), uVar3 == 0)) {
            pcVar6 = "SightUtils";
            _objc_getClass();
            local_d0 = PTR_s_newThumbForVideoWithPath__026a54b8;
            local_c8 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_respondsToSelector__026ca818,
                       PTR_s_newThumbForVideoWithPath__026a54b8);
            if (((ulong)pcVar6 & 1) != 0) {
              pcVar6 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_d0,local_88);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              local_d8 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
              if (((ulong)pcVar6 & 1) != 0) {
                pcVar6 = local_d8;
                _UIImageJPEGRepresentation(DAT_02323e70);
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_b1 = (byte)pcVar7;
                (*(code *)PTR__objc_release_02578630)(pcVar6);
              }
              _objc_storeStrong(&local_d8,0);
            }
          }
          bVar1 = (local_b1 & 1) == 0;
          if (bVar1) {
            local_21 = 0;
          }
          local_5c = (uint)bVar1;
          _objc_storeStrong(&local_b0,0);
          if (local_5c == 0) goto LAB_0058be20;
        }
        else {
LAB_0058be20:
          uVar3 = local_88;
          FUN_0058e8a8();
          _objc_retainAutoreleasedReturnValue();
          local_e0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
          if (uVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40[0],PTR_s_setValue_forKey__0269d300,local_e0,&cf_draftItemVideoPath);
          }
          local_5c = 1;
          local_21 = uVar3 != 0;
          _objc_storeStrong(&local_e0,0);
        }
        _objc_storeStrong(&local_a8,0);
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_68,0);
LAB_0058c010:
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return local_21 & 1;
}

