// FUN_008dee38 @ 008dee38

byte FUN_008dee38(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined *puVar11;
  uint local_310;
  cfstringStruct *local_1c8;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  char *local_88;
  uint local_80;
  uint local_7c;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_60;
  long local_50;
  cfstringStruct *local_48;
  ulong local_40;
  uint local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_34 = param_2;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar3 == 0) ||
     (uVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_21 = 0;
    local_60 = 1;
  }
  else {
    lVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      FUN_008f2d30();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_50;
      local_50 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      local_21 = 0;
      local_60 = 1;
    }
    else {
      pcVar5 = "CMessageWrap";
      _objc_getClass();
      local_70 = (cfstringStruct *)0x0;
      local_68 = (cfstringStruct *)pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initWithMsgType_nsFromUsr__026a9ae8);
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar6 = local_68;
        _objc_alloc();
        pcVar7 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_initWithMsgType_nsFromUsr__026a9ae8,0x22,local_50);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = local_70;
        local_70 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      if ((local_70 == (cfstringStruct *)0x0) &&
         (pcVar8 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_68,PTR_s_instancesRespondToSelector__0269da90,
                    PTR_s_initWithMsgType__0269d3f8), ((ulong)pcVar8 & 1) != 0)) {
        pcVar6 = local_68;
        _objc_alloc();
        pcVar7 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithMsgType__0269d3f8,0x22);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = local_70;
        local_70 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      if (local_70 == (cfstringStruct *)0x0) {
        local_21 = 0;
        local_60 = 1;
      }
      else {
        uVar2 = local_34;
        FUN_008f2e74();
        local_80 = 0;
        local_7c = uVar2;
        if ((uVar2 == 0) && (FUN_008f2ed8(), (uVar2 & 1) == 0)) {
          uVar3 = local_30;
          FUN_008f15f4();
          local_80 = (uint)uVar3;
          uVar2 = local_80;
          FUN_008f2e74();
          local_7c = uVar2;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiMessageType__026a9af0,0x22);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_nsFromUsr__0269d408,local_50);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_nsToUsr__0269d410,local_40);
        uVar3 = local_40;
        FUN_008f2f84();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setM_uiCreateTime__0269d428,uVar3 & 0xffffffff);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiStatus__0269d418,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiDownloadStatus__026a9af8,9);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_bForward__026a9b00,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiVoiceTime__026a3968,local_7c);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiVoiceFormat__026a9e58,4);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiVoiceEndFlag__026a9e60,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiVoiceForwardFlag__026a9e68,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_dtVoice__026a9e70,local_30);
        puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_<msg><voicemsgvoicelength___u_voiceformat__4_forwardflag__0__><_msg>);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_nsContent__0269ef88);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        pcVar6 = local_70;
        pcVar8 = &cf_setM_uiVoiceCancelFlag_;
        _NSSelectorFromString();
        FUN_008f31fc(pcVar6,pcVar8,0);
        _objc_setAssociatedObject(local_70,&DAT_028ce330,local_30,1);
        if (local_48 == (cfstringStruct *)0x0) {
          local_1c8 = &cf___;
        }
        else {
          local_1c8 = local_48;
        }
        _objc_setAssociatedObject(local_70,&DAT_028ce331,local_1c8,3);
        pcVar8 = local_70;
        puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   local_7c);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(pcVar8,&DAT_028ce332,puVar9,1);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        pcVar8 = local_70;
        puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,4);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(pcVar8,&DAT_028ce333,puVar9,1);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        pcVar5 = "CMessageMgr";
        _objc_getClass();
        FUN_008f3348();
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = "AudioSender";
        local_88 = pcVar5;
        _objc_getClass();
        FUN_008f3348();
        _objc_retainAutoreleasedReturnValue();
        local_90 = (cfstringStruct *)pcVar10;
        if ((((local_88 == (char *)0x0) || ((cfstringStruct *)pcVar10 == (cfstringStruct *)0x0)) ||
            (pcVar5 = local_88,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_respondsToSelector__026ca818,
                       PTR_s_AddLocalMsg_MsgWrap__0269ef90), ((ulong)pcVar5 & 1) == 0)) ||
           (pcVar8 = local_90,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_90,PTR_s_respondsToSelector__026ca818,
                      PTR_s_ResendVoiceMsg_MsgWrap__026a9b30), ((ulong)pcVar8 & 1) == 0)) {
          local_21 = 0;
          local_60 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_AddLocalMsg_MsgWrap__0269ef90,local_40,local_70);
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = &cf___;
          pcVar5 = "CUtility";
          _objc_getClass();
          local_a8 = PTR_s_GetPathOfMesAudio_LocalID_DocPat_026a9ad0;
          local_b0 = PTR_s_GetDocPath_026a9ad8;
          local_a0 = (cfstringStruct *)pcVar5;
          if ((((cfstringStruct *)pcVar5 != (cfstringStruct *)0x0) &&
              ((*(code *)PTR__objc_msgSend_02578628)
                         (pcVar5,PTR_s_respondsToSelector__026ca818,
                          PTR_s_GetPathOfMesAudio_LocalID_DocPat_026a9ad0), ((ulong)pcVar5 & 1) != 0
              )) && (pcVar8 = local_a0,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_a0,PTR_s_respondsToSelector__026ca818,local_b0),
                    ((ulong)pcVar8 & 1) != 0)) {
            pcVar6 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,local_b0);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_40;
            pcVar8 = local_a0;
            puVar9 = local_a8;
            pcVar7 = local_70;
            local_b8 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_m_uiMesLocalID_0269d238);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar8,puVar9,uVar3,(ulong)pcVar7 & 0xffffffff,local_b8);
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = pcVar8;
            FUN_008e5574();
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = local_98;
            local_98 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            _objc_storeStrong(&local_b8,0);
          }
          pcVar8 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
          if ((pcVar8 == (cfstringStruct *)0x0) &&
             (pcVar6 = local_90,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_90,PTR_s_respondsToSelector__026ca818,
                        PTR_s_getAudioFileName_LocalID__026a9b38), uVar3 = local_40,
             pcVar8 = local_90, puVar9 = PTR_s_getAudioFileName_LocalID__026a9b38,
             ((ulong)pcVar6 & 1) != 0)) {
            pcVar6 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_m_uiMesLocalID_0269d238);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar8,puVar9,uVar3,(ulong)pcVar6 & 0xffffffff);
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = pcVar8;
            FUN_008e5574();
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = local_98;
            local_98 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            (*(code *)PTR__objc_release_02578630)(pcVar8);
          }
          pcVar8 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
          if ((pcVar8 == (cfstringStruct *)0x0) &&
             (pcVar8 = local_70,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_getVoicePath_026a4578),
             ((ulong)pcVar8 & 1) != 0)) {
            pcVar6 = local_70;
            FUN_008e6088(local_70,PTR_s_getVoicePath_026a4578);
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = pcVar6;
            FUN_008e5574();
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_98;
            local_98 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
          }
          pcVar8 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
          if (pcVar8 == (cfstringStruct *)0x0) {
            local_21 = 0;
          }
          else {
            puVar9 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            pcVar8 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_stringByDeletingLastPathComponen_0269fb90);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar9,PTR_s_createDirectoryAtPath_withInterm_0269e230,pcVar8,1,0);
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            uVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_writeToFile_atomically__0269f928,local_98,1);
            local_310 = 0;
            if ((uVar3 & 1) != 0) {
              puVar9 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar9;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_310 = (uint)puVar11;
              (*(code *)PTR__objc_release_02578630)(puVar9);
            }
            pcVar8 = local_70;
            if ((local_310 & 1) == 0) {
              local_21 = 0;
            }
            else {
              pcVar6 = &cf_setM_nsVoicePath_;
              _NSSelectorFromString();
              FUN_008f38f4(pcVar8,pcVar6,local_98);
              pcVar5 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_respondsToSelector__026ca818,
                         PTR_s_SaveMesVoice_MsgWrap__026a9b40);
              if (((ulong)pcVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_88,PTR_s_SaveMesVoice_MsgWrap__026a9b40,local_40,local_70);
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_90,PTR_s_ResendVoiceMsg_MsgWrap__026a9b30,local_40,local_70);
              local_21 = 1;
            }
          }
          local_60 = 1;
          _objc_storeStrong(&local_98,0);
        }
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
      }
      _objc_storeStrong(&local_70,0);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

