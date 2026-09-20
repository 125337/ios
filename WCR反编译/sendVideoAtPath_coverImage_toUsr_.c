// sendVideoAtPath:coverImage:toUsr: @ 010082dc

/* Function Stack Size: 0x28 bytes */

bool WCRefineLinkMediaSender::sendVideoAtPath_coverImage_toUsr_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 in_d1;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  cfstringStruct *local_360;
  undefined *local_258;
  undefined *local_1c8;
  undefined *local_1b0;
  cfstringStruct *local_180;
  bool local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined *local_150;
  undefined *local_148 [2];
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined4 local_10c;
  undefined *local_108;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  byte local_89;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  long local_50;
  undefined *local_48;
  long local_40;
  SEL local_38;
  undefined *local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (undefined *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (undefined *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      local_21 = 0;
      local_54 = 1;
    }
    else {
      local_69 = 0;
      bVar1 = local_48 == (undefined *)0x0;
      if (bVar1) {
        local_1b0 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_thumbnailForVideoAtPath__026ada10,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_1b0;
      }
      else {
        local_1b0 = local_48;
      }
      local_69 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_1b0;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tempPathWithExt__026ad948,&cf_jpg);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 0;
      bVar1 = local_60 == (undefined *)0x0;
      local_78 = puVar3;
      if (bVar1) {
        local_1c8 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_new_0269d288)
        ;
        local_88 = local_1c8;
      }
      else {
        local_1c8 = local_60;
      }
      dVar9 = 0.85;
      local_89 = bVar1;
      _UIImageJPEGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_1c8;
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      puVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      if (puVar3 == (undefined *)0x0) {
        uVar11 = 0x4064000000000000;
        uVar10 = 0x4064000000000000;
        FUN_010038b0();
        local_a0 = uVar10;
        local_98 = uVar11;
        _UIGraphicsBeginImageContext(uVar10,uVar11);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)();
        uVar13 = 0x4064000000000000;
        in_d1 = 0;
        uVar11 = 0;
        uVar10 = uVar13;
        FUN_010056bc();
        local_c0 = uVar11;
        local_b8 = in_d1;
        local_b0 = uVar13;
        local_a8 = uVar10;
        _UIRectFill(uVar11,in_d1,uVar13,uVar10);
        _UIGraphicsGetImageFromCurrentImageContext();
        _objc_retainAutoreleasedReturnValue();
        local_c8 = puVar3;
        _UIGraphicsEndImageContext();
        puVar4 = local_c8;
        dVar9 = DAT_02323d00;
        _UIImageJPEGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_80;
        local_80 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_60,local_c8);
        _objc_storeStrong(&local_c8,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_writeToFile_atomically__0269f928,local_78,1);
      pcVar5 = &cf_CaptureVideoInfo;
      _NSClassFromString();
      local_d0 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_21 = 0;
        local_54 = 1;
      }
      else {
        puVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_videoDurationSecondsAtPath__026ad938,local_40);
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_d8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_e8 = (cfstringStruct *)0x0;
        pcVar5 = &cf_genVideoInfoWithVideoUrl_thumb_;
        local_e0 = puVar6;
        _NSSelectorFromString();
        pcVar7 = local_d0;
        local_f0 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,pcVar5);
        pcVar8 = local_d0;
        pcVar5 = local_f0;
        if (((ulong)pcVar7 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,pcVar5,puVar3,local_60);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_e8;
          local_e8 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        if (local_e8 == (cfstringStruct *)0x0) {
          pcVar8 = local_d0;
          _objc_alloc_init();
          pcVar5 = local_e8;
          local_e8 = pcVar8;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
        pcVar5 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_setVideo_path__026ada18);
        if (((ulong)pcVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_setValue_forKey__0269d300,local_40,&cf_video_path);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setVideo_path__026ada18,local_40);
        }
        pcVar5 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_setThumb_path__026ada20);
        if (((ulong)pcVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_setValue_forKey__0269d300,local_78,&cf_thumb_path);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setThumb_path__026ada20,local_78);
        }
        pcVar8 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_setVideo_time__026ad0e0);
        pcVar5 = local_e8;
        if (((ulong)pcVar8 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                     local_d8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_setValue_forKey__0269d300,puVar3,&cf_video_time);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setVideo_time__026ad0e0,local_d8);
        }
        pcVar8 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_setVideo_size__026ada28);
        pcVar5 = local_e8;
        if (((ulong)pcVar8 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                     local_e0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_setValue_forKey__0269d300,puVar3,&cf_video_size);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          local_108 = local_e0;
          local_10c = 0xffffffff;
          if (local_e0 < (undefined *)0xffffffff) {
            local_258 = local_e0;
          }
          else {
            local_258 = (undefined *)0xffffffff;
          }
          local_118 = local_258;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setVideo_size__026ada28,local_258);
        }
        pcVar8 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_setThumb_size__026ada30);
        pcVar5 = local_e8;
        puVar3 = PTR_s_setThumb_size__026ada30;
        if (((ulong)pcVar8 & 1) != 0) {
          puVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar3,puVar4);
        }
        if ((local_60 != (undefined *)0x0) &&
           (pcVar8 = local_e8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_setThumb_width__026ada38),
           pcVar5 = local_e8, puVar3 = PTR_s_setThumb_width__026ada38, ((ulong)pcVar8 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_size_026cab00);
          dVar12 = dVar9;
          local_128 = dVar9;
          local_120 = in_d1;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar3,(int)dVar9);
          pcVar5 = local_e8;
          puVar3 = PTR_s_setThumb_height__026ada40;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_size_026cab00);
          local_138 = dVar9;
          local_130 = dVar12;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar3,(int)dVar12);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_setValue_forKey__0269d300,local_40,&cf_nsRawVidePath);
        pcVar5 = local_e8;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                   local_e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_setValue_forKey__0269d300,puVar3,&cf_rawFileLength);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar8 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_setBRawVideo__026ad0e8);
        pcVar5 = local_e8;
        if (((ulong)pcVar8 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_setValue_forKey__0269d300,puVar3,&cf_bRawVideo);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setBRawVideo__026ad0e8,1);
        }
        pcVar8 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_setM_uiVideoSource__026ad0f0);
        pcVar5 = local_e8;
        if (((ulong)pcVar8 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_setValue_forKey__0269d300,puVar3,&cf_m_uiVideoSource);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setM_uiVideoSource__026ad0f0,2);
        }
        pcVar8 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_setM_bForward__026a9b00);
        pcVar5 = local_e8;
        if (((ulong)pcVar8 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_setValue_forKey__0269d300,puVar3,&cf_m_bForward);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setM_bForward__026a9b00,1);
        }
        puVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localUsrName_026ad930);
        _objc_retainAutoreleasedReturnValue();
        local_148[0] = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
        if (puVar3 == (undefined *)0x0) {
          _objc_storeStrong(local_148,&::cf___);
        }
        puVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_logicControllerForChat__026ad0a8,local_50);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = &cf_AddVideoMsg_ToUsr_VideoInfo_;
        local_150 = puVar3;
        _NSSelectorFromString();
        local_158 = pcVar5;
        if ((local_150 == (undefined *)0x0) ||
           (puVar3 = local_150,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_150,PTR_s_respondsToSelector__026ca818,pcVar5), ((ulong)puVar3 & 1) == 0
           )) {
          local_360 = &cf_MMServiceCenter;
          _NSClassFromString();
          local_171 = false;
          bVar1 = local_360 == (cfstringStruct *)0x0;
          local_160 = local_360;
          if (bVar1) {
            local_360 = (cfstringStruct *)0x0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_defaultCenter_026ca5e0);
            _objc_retainAutoreleasedReturnValue();
            local_170 = local_360;
          }
          local_171 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_168 = local_360;
          if ((local_171 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_170);
          }
          local_180 = (cfstringStruct *)0x0;
          if ((local_168 != (cfstringStruct *)0x0) &&
             (pcVar8 = local_168,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
             pcVar5 = local_168, puVar3 = PTR_s_getService__0269d170, ((ulong)pcVar8 & 1) != 0)) {
            pcVar8 = &cf_CMessageMgr;
            _NSClassFromString(&cf_CMessageMgr);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar3,pcVar8);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_180;
            local_180 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
          }
          if ((local_180 == (cfstringStruct *)0x0) ||
             (pcVar5 = local_180,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_180,PTR_s_respondsToSelector__026ca818,local_158),
             ((ulong)pcVar5 & 1) == 0)) {
            local_21 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,local_158,local_148[0],local_50,local_e8);
            local_21 = 1;
          }
          local_54 = 1;
          _objc_storeStrong(&local_180);
          _objc_storeStrong(&local_168,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_150,local_158,local_148[0],local_50,local_e8);
          local_21 = 1;
          local_54 = 1;
        }
        _objc_storeStrong(&local_150);
        _objc_storeStrong(local_148,0);
        _objc_storeStrong(&local_e8,0);
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

