// sendImageData:image:livePhotoVideoPath:toUsr:groupInfo: @ 0100216c

/* Function Stack Size: 0x38 bytes */

bool __thiscall
WCRefineLinkMediaSender::sendImageData_image_livePhotoVideoPath_toUsr_groupInfo_
          (WCRefineLinkMediaSender *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,
          ID param_6,ID param_7)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  undefined *puVar10;
  double in_d0;
  cfstringStruct *local_1c8;
  byte local_1a0;
  ulong local_158;
  ulong local_150 [5];
  byte local_121;
  cfstringStruct *local_110;
  undefined *local_108;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_d0;
  byte local_c1;
  undefined *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined4 local_8c;
  cfstringStruct *local_88;
  undefined *local_80;
  char local_72;
  byte local_71;
  char *local_70;
  int local_64;
  ulong local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  char *local_40;
  SEL local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_40 = (char *)0x0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (undefined *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_7);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((pcVar1 == (char *)0x0) && (local_48 == (undefined *)0x0)) {
    local_21 = 0;
    local_64 = 1;
    goto LAB_010035a4;
  }
  if ((local_48 == (undefined *)0x0) &&
     (pcVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     pcVar1 != (char *)0x0)) {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_48;
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  pcVar1 = local_40;
  if (local_48 == (undefined *)0x0) {
    local_21 = 0;
    local_64 = 1;
    goto LAB_010035a4;
  }
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_bytes_026a9630);
  pcVar3 = local_40;
  local_70 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_71 = false;
  if (((((char *)((long)&MACH_HEADER.cpusubtype + 3) < pcVar3) &&
       (local_71 = false, local_70[4] == 'f')) && (local_71 = false, local_70[5] == 't')) &&
     (local_71 = false, local_70[6] == 'y')) {
    local_71 = local_70[7] == 'p';
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_72 = false;
  if ((((char *)((long)&MACH_HEADER.cpusubtype + 3) < pcVar1) &&
      (local_72 = false, *local_70 == 'R')) &&
     ((local_72 = false, local_70[1] == 'I' && (local_72 = false, local_70[2] == 'F')))) {
    local_72 = local_70[3] == 'F';
  }
  if ((((local_71 & 1) != 0) || ((bool)local_72 != false)) ||
     (pcVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     pcVar1 == (char *)0x0)) {
    in_d0 = 0.95;
    puVar4 = local_48;
    _UIImageJPEGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
    if (puVar4 != (undefined *)0x0) {
      _objc_storeStrong(puVar4,&local_40,local_80);
    }
    _objc_storeStrong(&local_80,0);
  }
  pcVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_logicControllerForChat__026ad0a8,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_8c = 0;
  local_88 = pcVar5;
  if ((local_60 != 0) &&
     (uVar6 = local_60,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_sequence_026ad928),
     (uVar6 & 1) != 0)) {
    uVar6 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_sequence_026ad928);
    local_8c = (undefined4)uVar6;
  }
  pcVar5 = &cf_CMessageWrap;
  _NSClassFromString();
  pcVar7 = &cf_setImage_withData_isOriginImage_;
  local_98 = pcVar5;
  _NSSelectorFromString();
  pcVar5 = &cf_AddMsg_MsgWrap_;
  local_a0 = pcVar7;
  _NSSelectorFromString();
  pcVar7 = local_30;
  local_a8 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localUsrName_026ad930);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = local_50;
  local_b0 = pcVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_c1 = 0;
  local_1a0 = 0;
  if (lVar8 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    local_c0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1a0 = (byte)puVar4;
  }
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  local_b1 = local_1a0 & 1;
  if ((local_98 == (cfstringStruct *)0x0) ||
     (lVar8 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     lVar8 == 0)) {
LAB_0100355c:
    local_21 = 0;
    local_64 = 1;
  }
  else {
    local_d0 = (cfstringStruct *)0x0;
    pcVar5 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithMsgType__0269d3f8);
    if (((ulong)pcVar5 & 1) != 0) {
      pcVar7 = local_98;
      _objc_alloc();
      pcVar9 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_d0;
      local_d0 = pcVar9;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
    }
    if (local_d0 == (cfstringStruct *)0x0) {
LAB_01003538:
      local_64 = 0;
    }
    else {
      if (local_b0 == (cfstringStruct *)0x0) {
        local_1c8 = &::cf___;
      }
      else {
        local_1c8 = local_b0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_setValue_forKey__0269d300,local_1c8,&cf_m_nsFromUsr);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_setValue_forKey__0269d300,local_58,&cf_m_nsToUsr);
      pcVar5 = local_d0;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithUnsignedInt__0269d800,(int)in_d0)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_setValue_forKey__0269d300,puVar4,&cf_m_uiCreateTime);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar5 = local_d0;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_setValue_forKey__0269d300,puVar4,&cf_m_uiStatus);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_e9 = 0;
      pcVar5 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,local_a0);
      if (((ulong)pcVar5 & 1) == 0) {
        local_f8 = (cfstringStruct *)0x0;
        pcVar7 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_valueForKey__0269d128,&cf_m_extendInfoWithMsgType);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_f8;
        local_f8 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_respondsToSelector__026ca818,local_a0);
        if (((ulong)pcVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_a0,local_48,local_40,1);
          local_e9 = 1;
        }
        _objc_storeStrong(&local_f8,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_a0,local_48,local_40,1);
        local_e9 = 1;
      }
      if ((local_b1 & 1) != 0) {
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_110 = (cfstringStruct *)0x0;
        pcVar7 = local_d0;
        local_108 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_valueForKey__0269d128,&cf_m_oImageInfo)
        ;
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_110;
        local_110 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        if (local_110 == (cfstringStruct *)0x0) {
          pcVar7 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_valueForKey__0269d128,&cf_m_extendInfoWithMsgType);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_110;
          local_110 = pcVar7;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
        local_121 = 0;
        pcVar5 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setLivePhotoVideoPath__026a5b98);
        if (((ulong)pcVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_110,PTR_s_setValue_forKey__0269d300,local_50,&cf_livePhotoVideoPath);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_110,PTR_s_setLivePhotoVideoPath__026a5b98,local_50);
        }
        pcVar7 = local_110;
        local_121 = 1;
        pcVar5 = &cf_setLivePhotoHDVideoPath_;
        _NSSelectorFromString(&cf_setLivePhotoHDVideoPath_);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_respondsToSelector__026ca818,pcVar5);
        pcVar5 = local_110;
        if (((ulong)pcVar7 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_110,PTR_s_setValue_forKey__0269d300,local_50,&cf_livePhotoHDVideoPath);
        }
        else {
          pcVar7 = &cf_setLivePhotoHDVideoPath_;
          _NSSelectorFromString(&cf_setLivePhotoHDVideoPath_);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,pcVar7,local_50);
        }
        pcVar5 = local_d0;
        if ((local_121 & 1) != 0) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                     local_108);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_setValue_forKey__0269d300,puVar4,&cf_m_LivePhotoSize);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          pcVar5 = local_d0;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                     local_108);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_setValue_forKey__0269d300,puVar4,&cf_m_LivePhotoHDSize);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          pcVar5 = local_d0;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          pcVar7 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_videoDurationSecondsAtPath__026ad938,local_50);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_numberWithUnsignedInteger__0269e4d0,(long)pcVar7 * 1000);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_setValue_forKey__0269d300,puVar4,&cf_m_LivePhotoDuration);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          pcVar5 = local_d0;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_setValue_forKey__0269d300,puVar4,&cf_m_LivePhotoStillImageTimeMs);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        _objc_storeStrong(&local_110,0);
      }
      if (local_60 != 0) {
        pcVar5 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_setGroupInfo__026a4178);
        if (((ulong)pcVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_setValue_forKey__0269d300,local_60,&cf_groupInfo);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setGroupInfo__026a4178,local_60);
        }
        uVar6 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,&cf_createTime);
        _objc_retainAutoreleasedReturnValue();
        local_150[0] = uVar6;
        if (uVar6 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_setValue_forKey__0269d300,uVar6,&cf_m_uiCreateTime);
        }
        uVar6 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,&cf_sequence);
        _objc_retainAutoreleasedReturnValue();
        local_158 = uVar6;
        if (uVar6 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_setValue_forKey__0269d300,uVar6,&cf_m_sequenceId);
        }
        _objc_storeStrong(&local_158);
        _objc_storeStrong(local_150,0);
        pcVar5 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_UpdateContent__026a59b8);
        if (((ulong)pcVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_UpdateContent__026a59b8,0);
        }
      }
      pcVar5 = local_d0;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_setValue_forKey__0269d300,puVar4,&cf_m_forwardType);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if ((((local_e9 & 1) == 0) || (local_88 == (cfstringStruct *)0x0)) ||
         (pcVar5 = local_88,
         (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_respondsToSelector__026ca818,local_a8)
         , ((ulong)pcVar5 & 1) == 0)) goto LAB_01003538;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,local_a8,local_58,local_d0);
      local_21 = 1;
      local_64 = 1;
    }
    _objc_storeStrong(&local_d0,0);
    if (local_64 == 0) goto LAB_0100355c;
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_88,0);
LAB_010035a4:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

