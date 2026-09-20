// FUN_00175d84 @ 00175d84

void FUN_00175d84(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  uint local_45c;
  cfstringStruct *local_448;
  cfstringStruct *local_428;
  undefined *local_250;
  undefined4 local_248;
  undefined4 local_244;
  code *local_240;
  undefined *local_238;
  long local_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  code *local_208;
  undefined *local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  byte local_1d9;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  undefined *local_198;
  undefined *local_190;
  byte local_181;
  cfstringStruct *local_180 [2];
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  long local_128;
  cfstringStruct *local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined1 local_b9;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  char *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60 [3];
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  lVar3 = param_1 + 0x28;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar3;
  if (lVar3 == 0) {
    local_3c = 1;
    goto LAB_00176fc8;
  }
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if ((lVar3 == 0) ||
     (puVar2 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_fileExistsAtPath__026ca630,*(undefined8 *)(param_1 + 0x20)),
     ((ulong)puVar2 & 1) == 0)) {
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_38;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_00177104;
    local_68 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_60[0] = lVar3;
    _dispatch_async(puVar2,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_3c = 1;
    _objc_storeStrong(local_60,0);
  }
  else {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_removeItemAtPath_error__0269f910,local_88,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_88,1,0);
    pcVar5 = "MZipUtil";
    _objc_getClass();
    puVar2 = PTR___dispatch_main_q_02578680;
    local_90 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_38;
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_00177140;
      local_a0 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = lVar3;
      _dispatch_async(puVar2,&local_b8);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_3c = 1;
      _objc_storeStrong(&local_98,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_UnZipFile_toPath__0269f918,*(undefined8 *)(param_1 + 0x20),local_88);
      puVar2 = PTR___dispatch_main_q_02578680;
      local_b9 = SUB81(pcVar5,0);
      if (((ulong)pcVar5 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_38;
        local_e8 = PTR___NSConcreteStackBlock_02578660;
        local_e0 = 0xc2000000;
        local_dc = 0;
        local_d8 = FUN_0017717c;
        local_d0 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = lVar3;
        _dispatch_async(puVar2,&local_e8);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_removeItemAtPath_error__0269f910,local_88,0);
        local_3c = 1;
        _objc_storeStrong(&local_c8,0);
      }
      else {
        puVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_stringByAppendingPathComponent__026cab30,
                   &cf_com_qimiao_WCRefine_plist);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_48;
        local_f0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_fileExistsAtPath__026ca630,puVar2);
        puVar2 = PTR___dispatch_main_q_02578680;
        if (((ulong)puVar4 & 1) == 0) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = local_38;
          local_118 = PTR___NSConcreteStackBlock_02578660;
          local_110 = 0xc2000000;
          local_10c = 0;
          local_108 = FUN_001771b8;
          local_100 = &DAT_0257a800;
          (*(code *)PTR__objc_retain_02578638)();
          local_f8 = lVar3;
          _dispatch_async(puVar2,&local_118);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_removeItemAtPath_error__0269f910,local_88,0);
          local_3c = 1;
          _objc_storeStrong(&local_f8,0);
        }
        else {
          pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_initWithContentsOfFile__026ca6c8,local_f0);
          puVar2 = PTR___dispatch_main_q_02578680;
          local_120 = pcVar6;
          if (pcVar6 == (cfstringStruct *)0x0) {
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = local_38;
            local_148 = PTR___NSConcreteStackBlock_02578660;
            local_140 = 0xc2000000;
            local_13c = 0;
            local_138 = FUN_001771f4;
            local_130 = &DAT_0257a800;
            (*(code *)PTR__objc_retain_02578638)();
            local_128 = lVar3;
            _dispatch_async(puVar2,&local_148);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_removeItemAtPath_error__0269f910,local_88,0);
            local_3c = 1;
            _objc_storeStrong(&local_128,0);
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_150 = &cf___;
            pcVar5 = "MMServiceCenter";
            _objc_getClass();
            local_158 = (cfstringStruct *)pcVar5;
            if ((cfstringStruct *)pcVar5 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_defaultCenter_026ca5e0);
              _objc_retainAutoreleasedReturnValue();
              local_160 = (cfstringStruct *)pcVar5;
              if (((cfstringStruct *)pcVar5 != (cfstringStruct *)0x0) &&
                 ((*(code *)PTR__objc_msgSend_02578628)
                            (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
                 pcVar6 = local_160, puVar2 = PTR_s_getService__0269d170, ((ulong)pcVar5 & 1) != 0))
              {
                pcVar5 = "CContactMgr";
                _objc_getClass();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar2,pcVar5);
                _objc_retainAutoreleasedReturnValue();
                local_168 = pcVar6;
                if ((pcVar6 != (cfstringStruct *)0x0) &&
                   ((*(code *)PTR__objc_msgSend_02578628)
                              (pcVar6,PTR_s_respondsToSelector__026ca818,
                               PTR_s_getSelfContact_0269da60), ((ulong)pcVar6 & 1) != 0)) {
                  pcVar6 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_getSelfContact_0269da60);
                  _objc_retainAutoreleasedReturnValue();
                  local_170 = pcVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar6,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
                  _objc_retainAutoreleasedReturnValue();
                  local_428 = pcVar6;
                  if (pcVar6 == (cfstringStruct *)0x0) {
                    local_428 = &cf___;
                  }
                  _objc_storeStrong(&local_150,local_428);
                  (*(code *)PTR__objc_release_02578630)(pcVar6);
                  _objc_storeStrong(&local_170,0);
                }
                _objc_storeStrong(&local_168,0);
              }
              _objc_storeStrong(&local_160,0);
            }
            pcVar6 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_sponsorRecordsOwnerWxid
                      );
            _objc_retainAutoreleasedReturnValue();
            local_448 = pcVar6;
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_448 = &cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_180[0] = local_448;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            pcVar6 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
            local_45c = 0;
            if (pcVar6 != (cfstringStruct *)0x0) {
              pcVar6 = local_180[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_180[0],PTR_s_length_0269cca0);
              local_45c = 0;
              if (pcVar6 != (cfstringStruct *)0x0) {
                pcVar6 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_isEqualToString__0269ccc8,local_180[0]);
                local_45c = (uint)pcVar6;
              }
            }
            local_181 = (byte)local_45c & 1;
            if ((local_45c & 1) == 0) {
              puVar2 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_190 = puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = local_190;
              (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
              if (puVar2 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_120,PTR_s_removeObjectForKey__0269d700,local_190);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_120,PTR_s_removeObjectForKey__0269d700,&cf_sponsorRecordsOwnerWxid)
                ;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_120,PTR_s_writeToFile_atomically__0269f928,local_f0,1);
              _objc_storeStrong(&local_190,0);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineConfig_026cdf58,PTR_s_cancelPendingConfigWrite_0269f930);
            puVar2 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineConfig_026cdf58,PTR_s_configFilePath_0269f938);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = 0;
            puVar4 = local_48;
            local_198 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_fileExistsAtPath__026ca630,puVar2);
            if (((ulong)puVar4 & 1) == 0) {
LAB_00176b00:
              local_1e8 = local_1a0;
              puVar2 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_moveItemAtPath_toPath_error__0269f940,local_f0,local_198,
                         &local_1e8);
              _objc_storeStrong(&local_1a0,local_1e8);
              local_1d9 = (byte)puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_removeItemAtPath_error__0269f910,local_88,0);
              puVar2 = PTR___dispatch_main_q_02578680;
              if ((local_1d9 & 1) == 0) {
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                lVar1 = local_38;
                local_218 = PTR___NSConcreteStackBlock_02578660;
                local_210 = 0xc2000000;
                local_20c = 0;
                local_208 = FUN_001772f8;
                local_200 = &DAT_0257a7a0;
                (*(code *)PTR__objc_retain_02578638)();
                lVar3 = local_1a0;
                local_1f8 = lVar1;
                (*(code *)PTR__objc_retain_02578638)();
                local_1f0 = lVar3;
                _dispatch_async(puVar2,&local_218);
                (*(code *)PTR__objc_release_02578630)(puVar2);
                local_3c = 1;
                _objc_storeStrong(&local_1f0);
                _objc_storeStrong(&local_1f8,0);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_clearConfigCache_0269f948);
                puVar2 = PTR_WCRefineGroupManager_026ce2b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar2);
                if ((local_181 & 1) == 0) {
                  puVar2 = PTR_WCRefineConfig_026cdf58;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
                  _objc_retainAutoreleasedReturnValue();
                  local_220 = puVar2;
                  if (puVar2 != (undefined *)0x0) {
                    puVar2 = PTR_WCRefineConfig_026cdf58;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = puVar2;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_228 = puVar4;
                    (*(code *)PTR__objc_release_02578630)(puVar2);
                    puVar2 = local_228;
                    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_length_0269cca0);
                    if (puVar2 != (undefined *)0x0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_220,PTR_s_removeObjectForKey__0269d700,local_228);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_220,PTR_s_removeObjectForKey__0269d700,
                                 &cf_sponsorRecordsOwnerWxid);
                    }
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,
                               local_220);
                    _objc_storeStrong(&local_228,0);
                  }
                  _objc_storeStrong(&local_220,0);
                }
                puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefinePrivateFriendManager_026ce160,
                           PTR_s_reloadFromConfigAndPublish_0269f968);
                _CFNotificationCenterGetDarwinNotifyCenter();
                _CFNotificationCenterPostNotification
                          (puVar2,&cf_com_qimiao_wcrefine_settings_changed,0,0,1);
                puVar2 = PTR___dispatch_main_q_02578680;
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                lVar3 = local_38;
                local_250 = PTR___NSConcreteStackBlock_02578660;
                local_248 = 0xc2000000;
                local_244 = 0;
                local_240 = FUN_001773e4;
                local_238 = &DAT_0257a800;
                (*(code *)PTR__objc_retain_02578638)();
                local_230 = lVar3;
                _dispatch_async(puVar2,&local_250);
                (*(code *)PTR__objc_release_02578630)(puVar2);
                _objc_storeStrong(&local_230,0);
                local_3c = 0;
              }
            }
            else {
              local_1a8 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_removeItemAtPath_error__0269f910,local_198,&local_1a8);
              _objc_storeStrong(&local_1a0,local_1a8);
              puVar2 = PTR___dispatch_main_q_02578680;
              if (local_1a0 == 0) goto LAB_00176b00;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              lVar1 = local_38;
              local_1d8 = PTR___NSConcreteStackBlock_02578660;
              local_1d0 = 0xc2000000;
              local_1cc = 0;
              local_1c8 = FUN_00177230;
              local_1c0 = &DAT_0257a7a0;
              (*(code *)PTR__objc_retain_02578638)();
              lVar3 = local_1a0;
              local_1b8 = lVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = lVar3;
              _dispatch_async(puVar2,&local_1d8);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_removeItemAtPath_error__0269f910,local_88,0);
              local_3c = 1;
              _objc_storeStrong(&local_1b0);
              _objc_storeStrong(&local_1b8,0);
            }
            _objc_storeStrong(&local_1a0);
            _objc_storeStrong(&local_198,0);
            _objc_storeStrong(local_180,0);
            _objc_storeStrong(&local_150,0);
          }
          _objc_storeStrong(&local_120,0);
        }
        _objc_storeStrong(&local_f0,0);
      }
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_48,0);
LAB_00176fc8:
  _objc_storeStrong(&local_38,0);
  return;
}

