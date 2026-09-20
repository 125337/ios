// URLSession:downloadTask:didFinishDownloadingToURL: @ 010135b0

/* Function Stack Size: 0x28 bytes */

void WCRLinkMediaDownloader::URLSession_downloadTask_didFinishDownloadingToURL_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  segment_command *psVar8;
  undefined8 uVar9;
  segment_command *psVar10;
  segment_command *psVar11;
  cfstringStruct *pcVar12;
  cfstringStruct *pcVar13;
  undefined *puVar14;
  byte local_2b4;
  cfstringStruct *local_2b0;
  cfstringStruct *local_288;
  cfstringStruct *local_270;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  ID local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  ID local_198;
  undefined *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  ID local_148;
  ID local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  ID local_108;
  ID local_100;
  ID local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  segment_command *local_88;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finished_026a15b0);
  if ((IVar4 & 1) == 0) {
    pcVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_response_026a1570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
    pcVar7 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    local_61 = false;
    bVar1 = ((ulong)pcVar7 & 1) == 0;
    if (bVar1) {
      local_200 = (cfstringStruct *)0x0;
    }
    else {
      local_200 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_response_026a1570);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_200;
    }
    local_61 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_200;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    if (local_58 == (cfstringStruct *)0x0) {
      local_210 = (cfstringStruct *)0x0;
    }
    else {
      local_210 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_statusCode_026a1578);
    }
    local_70 = local_210;
    local_71 = local_58 == (cfstringStruct *)0x0 || 199 < (long)local_210 && (long)local_210 < 300;
    pcVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_response_026a1570);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    psVar8 = (segment_command *)PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    psVar10 = psVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (psVar8,PTR_s_attributesOfItemAtPath_error__0269db08,uVar9,0);
    _objc_retainAutoreleasedReturnValue();
    psVar11 = psVar10;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(psVar10);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    (*(code *)PTR__objc_release_02578630)(psVar8);
    pcVar5 = local_40;
    local_88 = psVar11;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_response_026a1570);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar12 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_99 = 0;
    local_a9 = 0;
    local_b9 = 0;
    local_270 = pcVar12;
    if (pcVar12 == (cfstringStruct *)0x0) {
      pcVar13 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_originalRequest_026adb88);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = pcVar13;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = pcVar13;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b9 = 1;
      local_288 = pcVar13;
      if (pcVar13 == (cfstringStruct *)0x0) {
        local_288 = &::cf___;
      }
      local_270 = local_288;
      local_b8 = pcVar13;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_270;
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar12);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_response_026a1570);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar12 = pcVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_2b0 = pcVar12;
    if (pcVar12 == (cfstringStruct *)0x0) {
      local_2b0 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_2b0;
    (*(code *)PTR__objc_release_02578630)(pcVar12);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsString__0269d0b0,&cf_douyinpic);
    local_d9 = 0;
    local_e9 = 0;
    local_2b4 = 1;
    if (((ulong)pcVar5 & 1) == 0) {
      pcVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsString__0269d0b0,&cf_byteimg);
      local_2b4 = 1;
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_d9 = 1;
        local_d8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_2b4 = 1;
        if (((ulong)pcVar5 & 1) == 0) {
          pcVar5 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          local_e9 = 1;
          local_e8 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2b4 = (byte)pcVar5;
        }
      }
    }
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    local_c9 = local_2b4 & 1;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCompletion__0269fdc8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProgress__026ad8f8,0);
    puVar6 = PTR__OBJC_CLASS___NSFileHandle_026cea88;
    if (((local_71 & 1) == 0) || (local_88 < &segment_command_00000020)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFinished__026a15b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_finishTasksAndInvalidate_026a15a8);
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      local_128 = PTR___NSConcreteStackBlock_02578660;
      local_120 = 0xc2000000;
      local_11c = 0;
      local_118 = FUN_01014768;
      local_110 = &DAT_0257ca68;
      (*(code *)PTR__objc_retain_02578638)();
      IVar4 = local_f8;
      local_108 = IVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_100 = IVar4;
      _dispatch_async(puVar6,&local_128);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_4c = 1;
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_108,0);
    }
    else {
      uVar9 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_fileHandleForReadingAtPath__026ad8c8);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar6;
      (*(code *)PTR__objc_release_02578630)(uVar9);
      puVar6 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_readDataOfLength__026ad8d0,0x40);
      _objc_retainAutoreleasedReturnValue();
      local_138 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_closeFile_026aa440);
      puVar6 = PTR_WCRefineLinkMediaSender_026ce170;
      uVar9 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_80;
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expectVideo_026adb90);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_fileLooksLikeMediaAtPath_mime_ex_026adb98,uVar9,pcVar5,IVar4);
      (*(code *)PTR__objc_release_02578630)(uVar9);
      puVar14 = PTR_WCRefineLinkMediaSender_026ce170;
      if (((ulong)puVar6 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFinished__026a15b8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_finishTasksAndInvalidate_026a15a8);
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_28;
        local_168 = PTR___NSConcreteStackBlock_02578660;
        local_160 = 0xc2000000;
        local_15c = 0;
        local_158 = FUN_010148e4;
        local_150 = &DAT_0257ca68;
        (*(code *)PTR__objc_retain_02578638)();
        IVar4 = local_f8;
        local_148 = IVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_140 = IVar4;
        _dispatch_async(puVar6,&local_168);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_4c = 1;
        _objc_storeStrong(&local_140);
        _objc_storeStrong(&local_148,0);
      }
      else {
        pcVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_originalRequest_026adb88);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar12 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_response_026a1570);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_138;
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expectVideo_026adb90);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar14,PTR_s_guessExtForURL_response_head_exp_026adba0,pcVar7,pcVar12,puVar6,
                   IVar4);
        _objc_retainAutoreleasedReturnValue();
        local_170 = puVar14;
        (*(code *)PTR__objc_release_02578630)(pcVar12);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        puVar6 = PTR_WCRefineLinkMediaSender_026ce170;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkMediaSender_026ce170,PTR_s_tempPathWithExt__026ad948,local_170);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_178 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar14);
        local_180 = 0;
        puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = local_48;
        puVar14 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_178);
        _objc_retainAutoreleasedReturnValue();
        local_188 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_moveItemAtURL_toURL_error__026a1590,uVar9,puVar14,&local_188);
        _objc_storeStrong(&local_180,local_188);
        (*(code *)PTR__objc_release_02578630)(puVar14);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFinished__026a15b8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_finishTasksAndInvalidate_026a15a8);
        local_190 = (undefined *)0x0;
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expectVideo_026adb90);
        if ((IVar4 & 1) == 0) {
          puVar14 = PTR__OBJC_CLASS___NSData_026ce1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSData_026ce1d0,
                     PTR_s_dataWithContentsOfFile_options_e_026a09f0,local_178,1,0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_190;
          local_190 = puVar14;
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_28;
        local_1d8 = PTR___NSConcreteStackBlock_02578660;
        local_1d0 = 0xc2000000;
        local_1cc = 0;
        local_1c8 = FUN_01014a60;
        local_1c0 = &DAT_02584500;
        (*(code *)PTR__objc_retain_02578638)();
        uVar9 = local_180;
        local_1b8 = IVar4;
        (*(code *)PTR__objc_retain_02578638)();
        IVar4 = local_f8;
        local_1b0 = uVar9;
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = local_178;
        local_198 = IVar4;
        (*(code *)PTR__objc_retain_02578638)();
        puVar14 = local_190;
        local_1a8 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_1a0 = puVar14;
        _dispatch_async(puVar6,&local_1d8);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(&local_1a0);
        _objc_storeStrong(&local_1a8,0);
        _objc_storeStrong(&local_198,0);
        _objc_storeStrong(&local_1b0,0);
        _objc_storeStrong(&local_1b8,0);
        _objc_storeStrong(&local_190,0);
        _objc_storeStrong(&local_180,0);
        _objc_storeStrong(&local_178,0);
        _objc_storeStrong(&local_170,0);
        local_4c = 0;
      }
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_130,0);
    }
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

