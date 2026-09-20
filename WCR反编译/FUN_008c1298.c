// FUN_008c1298 @ 008c1298

/* WARNING: Type propagation algorithm not settling */

byte FUN_008c1298(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *puVar9;
  uint local_390;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  char *local_a0;
  int local_98;
  undefined4 local_94;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  ulong local_70 [2];
  undefined4 local_5c;
  ulong local_58 [3];
  ulong local_40;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_38;
  FUN_008bbaac();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  FUN_008bd834();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  local_58[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((uVar2 == 0) ||
     (uVar1 = local_58[0], (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_21 = 0;
    local_5c = 1;
  }
  else {
    local_70[1] = 0;
    local_78 = 0;
    uVar1 = local_30;
    FUN_008b6dec(local_30,&local_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(local_70 + 1,local_78);
    local_70[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_21 = 0;
      local_5c = 1;
    }
    else {
      pcVar3 = "CMessageWrap";
      _objc_getClass();
      local_80 = (cfstringStruct *)pcVar3;
      if ((cfstringStruct *)pcVar3 == (cfstringStruct *)0x0) {
        local_21 = 0;
        local_5c = 1;
      }
      else {
        local_88 = (cfstringStruct *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithMsgType_nsFromUsr__026a9ae8);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar4 = local_80;
          _objc_alloc();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_initWithMsgType_nsFromUsr__026a9ae8,0x22,local_58[0]);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_88;
          local_88 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        if ((local_88 == (cfstringStruct *)0x0) &&
           (pcVar6 = local_80,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_80,PTR_s_instancesRespondToSelector__0269da90,
                      PTR_s_initWithMsgType__0269d3f8), ((ulong)pcVar6 & 1) != 0)) {
          pcVar4 = local_80;
          _objc_alloc();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithMsgType__0269d3f8,0x22);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_88;
          local_88 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        if (local_88 == (cfstringStruct *)0x0) {
          local_21 = 0;
          local_5c = 1;
        }
        else {
          uVar2 = local_30;
          FUN_008c2694();
          uVar1 = local_30;
          local_94 = (undefined4)uVar2;
          pcVar6 = &cf_m_uiVoiceFormat;
          _NSSelectorFromString();
          FUN_008b7f4c(uVar1,pcVar6);
          local_98 = (int)uVar1;
          if (local_98 == 0) {
            uVar1 = local_30;
            _objc_getAssociatedObject(local_30,&DAT_028ce017);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            FUN_008be984();
            local_98 = (int)uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          if ((local_98 == 0) &&
             (uVar1 = local_30,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getVoiceFormat_026a9b28),
             (uVar1 & 1) != 0)) {
            uVar1 = local_30;
            FUN_008b7f4c(local_30,PTR_s_getVoiceFormat_026a9b28);
            local_98 = (int)uVar1;
          }
          if (local_98 == 0) {
            local_98 = 4;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_uiMessageType__026a9af0,0x22);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_nsFromUsr__0269d408,local_58[0])
          ;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_nsToUsr__0269d410,local_40);
          uVar1 = local_40;
          FUN_008c291c();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_setM_uiCreateTime__0269d428,uVar1 & 0xffffffff);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_uiStatus__0269d418,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_uiDownloadStatus__026a9af8,9);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_bForward__026a9b00,1);
          pcVar4 = local_88;
          pcVar6 = &cf_setM_bForward_;
          _NSSelectorFromString();
          FUN_008bdfc8(pcVar4,pcVar6,1);
          pcVar4 = local_88;
          pcVar6 = &cf_setM_nsContent_;
          _NSSelectorFromString();
          puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_<msg><voicemsgvoicelength___u_voiceformat___u_forwardflag__0__><_msg>);
          _objc_retainAutoreleasedReturnValue();
          FUN_008be118(pcVar4,pcVar6);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          pcVar4 = local_88;
          pcVar6 = &cf_setM_uiVoiceTime_;
          _NSSelectorFromString();
          FUN_008be28c(pcVar4,pcVar6,local_94);
          pcVar4 = local_88;
          pcVar6 = &cf_setM_uiVoiceFormat_;
          _NSSelectorFromString();
          FUN_008be28c(pcVar4,pcVar6,local_98);
          pcVar4 = local_88;
          pcVar6 = &cf_setM_uiVoiceEndFlag_;
          _NSSelectorFromString();
          FUN_008be28c(pcVar4,pcVar6,1);
          pcVar4 = local_88;
          pcVar6 = &cf_setM_uiVoiceCancelFlag_;
          _NSSelectorFromString();
          FUN_008be28c(pcVar4,pcVar6,0);
          pcVar4 = local_88;
          pcVar6 = &cf_setM_uiVoiceForwardFlag_;
          _NSSelectorFromString();
          FUN_008be28c(pcVar4,pcVar6,1);
          pcVar4 = local_88;
          pcVar6 = &cf_setM_dtVoice_;
          _NSSelectorFromString();
          FUN_008be118(pcVar4,pcVar6,local_70[0]);
          pcVar3 = "CMessageMgr";
          _objc_getClass();
          FUN_008be3d8();
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = "AudioSender";
          local_a0 = pcVar3;
          _objc_getClass();
          FUN_008be3d8();
          _objc_retainAutoreleasedReturnValue();
          local_b0 = PTR_s_AddLocalMsg_MsgWrap__0269ef90;
          local_b8 = PTR_s_ResendVoiceMsg_MsgWrap__026a9b30;
          local_a8 = (cfstringStruct *)pcVar8;
          if ((((local_a0 == (char *)0x0) ||
               (pcVar3 = local_a0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_a0,PTR_s_respondsToSelector__026ca818,
                          PTR_s_AddLocalMsg_MsgWrap__0269ef90), ((ulong)pcVar3 & 1) == 0)) ||
              (local_a8 == (cfstringStruct *)0x0)) ||
             (pcVar6 = local_a8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_a8,PTR_s_respondsToSelector__026ca818,local_b8),
             ((ulong)pcVar6 & 1) == 0)) {
            local_21 = 0;
            local_5c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,local_b0,local_40,local_88);
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = &cf___;
            pcVar3 = "CUtility";
            _objc_getClass();
            local_d0 = PTR_s_GetPathOfMesAudio_LocalID_DocPat_026a9ad0;
            local_d8 = PTR_s_GetDocPath_026a9ad8;
            local_c8 = (cfstringStruct *)pcVar3;
            if ((((cfstringStruct *)pcVar3 != (cfstringStruct *)0x0) &&
                ((*(code *)PTR__objc_msgSend_02578628)
                           (pcVar3,PTR_s_respondsToSelector__026ca818,
                            PTR_s_GetPathOfMesAudio_LocalID_DocPat_026a9ad0),
                ((ulong)pcVar3 & 1) != 0)) &&
               (pcVar6 = local_c8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_c8,PTR_s_respondsToSelector__026ca818,local_d8),
               ((ulong)pcVar6 & 1) != 0)) {
              pcVar4 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_d8);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = local_40;
              pcVar6 = local_c8;
              puVar7 = local_d0;
              pcVar5 = local_88;
              local_e0 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_m_uiMesLocalID_0269d238);
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar6,puVar7,uVar1,(ulong)pcVar5 & 0xffffffff,local_e0);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar6;
              FUN_008b7d64();
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = local_c0;
              local_c0 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(pcVar4);
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              _objc_storeStrong(&local_e0,0);
            }
            pcVar6 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
            if ((pcVar6 == (cfstringStruct *)0x0) &&
               (pcVar4 = local_a8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_a8,PTR_s_respondsToSelector__026ca818,
                          PTR_s_getAudioFileName_LocalID__026a9b38), uVar1 = local_40,
               pcVar6 = local_a8, puVar7 = PTR_s_getAudioFileName_LocalID__026a9b38,
               ((ulong)pcVar4 & 1) != 0)) {
              pcVar4 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_m_uiMesLocalID_0269d238);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar7,uVar1,(ulong)pcVar4 & 0xffffffff);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar6;
              FUN_008b7d64();
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = local_c0;
              local_c0 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(pcVar4);
              (*(code *)PTR__objc_release_02578630)(pcVar6);
            }
            pcVar6 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
            if ((pcVar6 == (cfstringStruct *)0x0) &&
               (pcVar6 = local_88,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_getVoicePath_026a4578),
               ((ulong)pcVar6 & 1) != 0)) {
              pcVar4 = local_88;
              FUN_008b5ddc(local_88,PTR_s_getVoicePath_026a4578);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar4;
              FUN_008b7d64();
              _objc_retainAutoreleasedReturnValue();
              pcVar6 = local_c0;
              local_c0 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              (*(code *)PTR__objc_release_02578630)(pcVar4);
            }
            pcVar6 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_21 = 0;
            }
            else {
              puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              pcVar6 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_stringByDeletingLastPathComponen_0269fb90);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar7,PTR_s_createDirectoryAtPath_withInterm_0269e230,pcVar6,1,0);
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              uVar1 = local_70[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70[0],PTR_s_writeToFile_atomically__0269f928,local_c0,1);
              local_390 = 0;
              if ((uVar1 & 1) != 0) {
                puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_390 = (uint)puVar9;
                (*(code *)PTR__objc_release_02578630)(puVar7);
              }
              pcVar6 = local_88;
              if ((local_390 & 1) == 0) {
                local_21 = 0;
              }
              else {
                pcVar4 = &cf_setM_nsVoicePath_;
                _NSSelectorFromString();
                FUN_008be118(pcVar6,pcVar4,local_c0);
                puVar7 = PTR_s_SaveMesVoice_MsgWrap__026a9b40;
                pcVar3 = local_a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_a0,PTR_s_respondsToSelector__026ca818,
                           PTR_s_SaveMesVoice_MsgWrap__026a9b40);
                if (((ulong)pcVar3 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_a0,puVar7,local_40,local_88);
                }
                (*(code *)PTR__objc_msgSend_02578628)(local_a8,local_b8,local_40,local_88);
                (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_m_uiMesLocalID_0269d238);
                local_21 = 1;
              }
            }
            local_5c = 1;
            _objc_storeStrong(&local_c0,0);
          }
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_a0,0);
        }
        _objc_storeStrong(&local_88,0);
      }
    }
    _objc_storeStrong(local_70);
    _objc_storeStrong(local_70 + 1,0);
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

