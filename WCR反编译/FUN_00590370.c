// FUN_00590370 @ 00590370

void FUN_00590370(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  uint local_3e8;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_278;
  undefined8 local_200;
  byte local_1f1;
  ulong local_1f0;
  undefined8 local_1e8;
  byte local_1d9;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  ulong local_190;
  ulong local_188 [2];
  ulong local_178;
  ulong local_170;
  long local_168;
  long local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  undefined *local_110;
  undefined4 local_104;
  char *local_100;
  byte local_f1;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  uint local_d8;
  char *local_c8;
  long local_c0;
  ulong local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  pcVar1 = "WCUploadTask";
  _objc_getClass();
  local_c8 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_b0 = (char *)0x0;
    local_d8 = 1;
    goto LAB_00591c68;
  }
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_content_026a4a90);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_f1 = 0;
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_imageArray_026a54a8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar3 & 1) == 0) {
    local_278 = 0;
  }
  else {
    local_278 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_imageArray_026a54a8);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 1;
    local_f0 = local_278;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_278;
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_100 = (char *)0x0;
  local_104 = 2;
  uVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_sightDraft_026a4d98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == 0) {
      uVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        pcVar9 = local_c8;
        _objc_alloc_init(uVar2);
        pcVar1 = local_100;
        local_100 = pcVar9;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        local_104 = 2;
        FUN_00592248(local_100,&cf_mediaList,0);
      }
    }
    else {
      lVar10 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      FUN_0057a910();
      _objc_retainAutoreleasedReturnValue();
      local_168 = lVar11;
      (*(code *)PTR__objc_release_02578630)(lVar10);
      lVar10 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
      if ((lVar10 == 0) || (uVar2 = local_b8, FUN_0058b544(local_b8,local_168), (uVar2 & 1) == 0)) {
        local_b0 = (char *)0x0;
        local_d8 = 1;
      }
      else {
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_sightDraft_026a4d98);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_170 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_respondsToSelector__026ca818,PTR_s_setVideoPath__026a54d8);
        if (((uVar2 & 1) == 0) ||
           (uVar2 = local_170,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_170,PTR_s_respondsToSelector__026ca818,PTR_s_setThumbPath__026a54e0),
           (uVar2 & 1) == 0)) {
          local_b0 = (char *)0x0;
          local_d8 = 1;
        }
        else {
          local_178 = 0;
          uVar3 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_valueForKey__0269d128,&cf_getVideoPath);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          FUN_0057a910();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_178;
          local_178 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar2 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
          if (uVar2 == 0) {
            local_b0 = (char *)0x0;
            local_d8 = 1;
          }
          else {
            uVar2 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_stringByDeletingLastPathComponen_0269fb90);
            _objc_retainAutoreleasedReturnValue();
            local_188[0] = uVar2;
            FUN_00589dc8();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_190 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
            puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = &cf_wcr_scheduled_;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&cf_wcr_scheduled_,PTR_s_stringByAppendingString__0269d398);
            _objc_retainAutoreleasedReturnValue();
            local_198 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            pcVar7 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198,PTR_s_stringByAppendingPathExtension__026a4580,&cf_mp4);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_198;
            local_1a0 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_198,PTR_s_stringByAppendingPathExtension__026a4580,&cf_jpg);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_188[0];
            local_1a8 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_188[0],PTR_s_stringByAppendingPathComponent__026cab30,local_1a0);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_188[0];
            local_1b0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_188[0],PTR_s_stringByAppendingPathComponent__026cab30,local_1a8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            local_1b8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            local_1c8 = 0;
            local_1d0 = 0;
            local_1d9 = 0;
            local_1f1 = 0;
            local_1c0 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_188[0],1,0,
                       &local_1d0);
            _objc_storeStrong(&local_1c8,local_1d0);
            puVar4 = local_1c0;
            local_3e8 = 1;
            if (((ulong)puVar6 & 1) != 0) {
              uVar2 = local_190;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_stringByAppendingPathComponent__026cab30,&cf_video_mp4);
              _objc_retainAutoreleasedReturnValue();
              local_1d9 = 1;
              local_1e8 = local_1c8;
              local_1d8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_copyItemAtPath_toPath_error__026a1758,uVar2,local_1b0,
                         &local_1e8);
              _objc_storeStrong(&local_1c8,local_1e8);
              puVar6 = local_1c0;
              local_3e8 = 1;
              if (((ulong)puVar4 & 1) != 0) {
                uVar2 = local_190;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_190,PTR_s_stringByAppendingPathComponent__026cab30,
                           &cf_video_thumb_jpg);
                _objc_retainAutoreleasedReturnValue();
                local_1f1 = 1;
                local_200 = local_1c8;
                local_1f0 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_copyItemAtPath_toPath_error__026a1758,uVar2,local_1b8,
                           &local_200);
                _objc_storeStrong(&local_1c8,local_200);
                local_3e8 = (uint)puVar6 ^ 1;
              }
            }
            if ((local_1f1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1f0);
            }
            if ((local_1d9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1d8);
            }
            if ((local_3e8 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_setVideoPath__026a54d8,local_1a0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_setThumbPath__026a54e0,local_1a8);
              pcVar1 = "WCUtil";
              _objc_getClass();
              pcVar9 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar1,PTR_s_respondsToSelector__026ca818,
                         PTR_s_uploadTaskFromSightDraft__026a54e8);
              puVar4 = PTR_s_uploadTaskFromSightDraft__026a54e8;
              if (((ulong)pcVar9 & 1) != 0) {
                uVar2 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_sightDraft_026a4d98);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar4);
                _objc_retainAutoreleasedReturnValue();
                pcVar9 = local_100;
                local_100 = pcVar1;
                (*(code *)PTR__objc_release_02578630)(pcVar9);
                (*(code *)PTR__objc_release_02578630)(uVar2);
              }
              if (local_100 == (char *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c0,PTR_s_removeItemAtPath_error__0269f910,local_1b0,0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c0,PTR_s_removeItemAtPath_error__0269f910,local_1b8,0);
              }
              local_104 = 0xf;
              local_d8 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_removeItemAtPath_error__0269f910,local_1b0,0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_removeItemAtPath_error__0269f910,local_1b8,0);
              local_b0 = (char *)0x0;
              local_d8 = 1;
            }
            _objc_storeStrong(&local_1c8);
            _objc_storeStrong(&local_1c0,0);
            _objc_storeStrong(&local_1b8,0);
            _objc_storeStrong(&local_1b0,0);
            _objc_storeStrong(&local_1a8,0);
            _objc_storeStrong(&local_1a0,0);
            _objc_storeStrong(&local_198,0);
            _objc_storeStrong(&local_190,0);
            _objc_storeStrong(local_188,0);
          }
          _objc_storeStrong(&local_178,0);
        }
        _objc_storeStrong(&local_170,0);
      }
      _objc_storeStrong(&local_168,0);
      if (local_d8 != 0) goto LAB_00591c0c;
    }
LAB_005916fc:
    if (local_100 == (char *)0x0) {
      local_b0 = (char *)0x0;
      local_d8 = 1;
    }
    else {
      pcVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_setType__026a3cb8);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setType__026a3cb8,local_104);
      }
      pcVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_setContentDesc__026a4a08);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setContentDesc__026a4a08,local_e0);
      }
      pcVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_setPostSource__026a54f0);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setPostSource__026a54f0,1);
      }
      pcVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_setIsSyncToWeibo__026a54f8);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setIsSyncToWeibo__026a54f8,0);
      }
      pcVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_setIsSyncToFacebook__026a5500);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setIsSyncToFacebook__026a5500,0);
      }
      lVar10 = local_c0;
      FUN_005820e8(local_c0,&cf_privacy,0);
      pcVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_setVisibilityType__026a5508);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setVisibilityType__026a5508,lVar10);
      }
      pcVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_setIsPrivate__026a5510);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setIsPrivate__026a5510,lVar10 == 2);
      }
      pcVar1 = local_100;
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_poiInfo_026a4da0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_005923e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_00592248(pcVar1,&cf_locationInfo);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      pcVar1 = local_100;
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_tempSelectContacts_026a4e10);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00592b34();
      _objc_retainAutoreleasedReturnValue();
      FUN_00592248(pcVar1,&cf_withUserList);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      pcVar1 = local_100;
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_extBean_026a4e20);
      _objc_retainAutoreleasedReturnValue();
      FUN_00592248(pcVar1,&cf_extBean);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      pcVar1 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar1;
      local_d8 = 1;
    }
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar4;
    _memset(auStack_158,0,0x40);
    uVar2 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_2b0 != 0) {
      lVar10 = *local_148;
      local_2b8 = 0;
      do {
        do {
          if (*local_148 - lVar10 != 0) {
            _objc_enumerationMutation(*local_148 - lVar10,uVar2);
          }
          lVar11 = *(long *)(local_150 + local_2b8 * 8);
          local_118 = lVar11;
          FUN_00591ce8();
          _objc_retainAutoreleasedReturnValue();
          local_160 = lVar11;
          if (lVar11 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addObject__0269d180,lVar11);
          }
          _objc_storeStrong(&local_160,0);
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_2b8 = 0;
      } while (local_2b0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar4 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0);
    if (puVar4 != (undefined *)0x0) {
      pcVar9 = local_c8;
      _objc_alloc_init();
      pcVar1 = local_100;
      local_100 = pcVar9;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      local_104 = 1;
      FUN_00592248(local_100,&cf_mediaList,local_110);
    }
    else {
      local_b0 = (char *)0x0;
    }
    local_d8 = (uint)(puVar4 == (undefined *)0x0);
    _objc_storeStrong(&local_110,0);
    if (local_d8 == 0) goto LAB_005916fc;
  }
LAB_00591c0c:
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
LAB_00591c68:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

