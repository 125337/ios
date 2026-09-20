// FUN_008bbee0 @ 008bbee0

void FUN_008bbee0(double param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  ulong uVar8;
  cfstringStruct *local_180;
  cfstringStruct *local_170;
  cfstringStruct *local_128;
  ulong local_b8;
  int local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  undefined4 local_64;
  ulong local_60;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar1 = local_30;
  FUN_008b8ec8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  FUN_008b9014();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = uVar1;
  if (uVar1 == 0) {
    local_b8 = local_38;
  }
  local_50[0] = uVar1;
  FUN_008b9320();
  _objc_retainAutoreleasedReturnValue();
  local_58 = local_b8;
  FUN_008b9684();
  _objc_retainAutoreleasedReturnValue();
  local_60 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (local_b8 == 0) {
    local_28 = (cfstringStruct *)0x0;
    local_64 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0,
               local_60,1,0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_60);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_70;
      local_70 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_28 = (cfstringStruct *)0x0;
      local_64 = 1;
    }
    else {
      pcVar4 = "CMessageWrap";
      _objc_getClass();
      local_78 = (cfstringStruct *)pcVar4;
      if ((cfstringStruct *)pcVar4 == (cfstringStruct *)0x0) {
        local_28 = (cfstringStruct *)0x0;
        local_64 = 1;
      }
      else {
        FUN_008bd834();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_s_initWithMsgType_nsFromUsr__026a9ae8;
        local_88 = (cfstringStruct *)0x0;
        pcVar5 = local_78;
        local_80 = (cfstringStruct *)pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithMsgType_nsFromUsr__026a9ae8);
        if (((ulong)pcVar5 & 1) != 0) {
          pcVar5 = local_78;
          _objc_alloc();
          if (local_80 == (cfstringStruct *)0x0) {
            local_128 = &cf___;
          }
          else {
            local_128 = local_80;
          }
          pcVar6 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar2,0x22,local_128);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_88;
          local_88 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
        if ((local_88 == (cfstringStruct *)0x0) &&
           (pcVar5 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_78,PTR_s_instancesRespondToSelector__0269da90,
                      PTR_s_initWithMsgType__0269d3f8), ((ulong)pcVar5 & 1) != 0)) {
          pcVar7 = local_78;
          _objc_alloc();
          pcVar6 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_initWithMsgType__0269d3f8,0x22);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_88;
          local_88 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar7);
        }
        if (local_88 == (cfstringStruct *)0x0) {
          local_28 = (cfstringStruct *)0x0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_uiMessageType__026a9af0,0x22);
          if (local_80 == (cfstringStruct *)0x0) {
            local_170 = &cf___;
          }
          else {
            local_170 = local_80;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_nsFromUsr__0269d408,local_170);
          if (local_80 == (cfstringStruct *)0x0) {
            local_180 = &cf___;
          }
          else {
            local_180 = local_80;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_nsToUsr__0269d410,local_180);
          puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_setM_uiCreateTime__0269d428,(int)param_1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_uiStatus__0269d418,4);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_uiDownloadStatus__026a9af8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_bForward__026a9b00,1);
          uVar1 = local_58;
          FUN_008bdb58();
          uVar8 = local_58;
          FUN_008bdd8c();
          pcVar5 = local_88;
          local_a0 = (int)uVar8;
          if (local_a0 == 0) {
            local_a0 = 4;
          }
          pcVar7 = &cf_setM_bForward_;
          _NSSelectorFromString();
          FUN_008bdfc8(pcVar5,pcVar7,1);
          pcVar7 = local_88;
          pcVar5 = &cf_setM_nsContent_;
          _NSSelectorFromString();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_<msg><voicemsgvoicelength___u_voiceformat___u_forwardflag__0__><_msg>);
          _objc_retainAutoreleasedReturnValue();
          FUN_008be118(pcVar7,pcVar5);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          pcVar7 = local_88;
          pcVar5 = &cf_setM_uiVoiceTime_;
          _NSSelectorFromString();
          FUN_008be28c(pcVar7,pcVar5,uVar1 & 0xffffffff);
          pcVar7 = local_88;
          pcVar5 = &cf_setM_uiVoiceFormat_;
          _NSSelectorFromString();
          FUN_008be28c(pcVar7,pcVar5,local_a0);
          pcVar7 = local_88;
          pcVar5 = &cf_setM_dtVoice_;
          _NSSelectorFromString();
          FUN_008be118(pcVar7,pcVar5,local_70);
          pcVar7 = local_88;
          pcVar5 = &cf_setM_uiVoiceEndFlag_;
          _NSSelectorFromString();
          FUN_008be28c(pcVar7,pcVar5,1);
          pcVar7 = local_88;
          pcVar5 = &cf_setM_uiVoiceCancelFlag_;
          _NSSelectorFromString();
          FUN_008be28c(pcVar7,pcVar5,0);
          pcVar7 = local_88;
          pcVar5 = &cf_setM_uiVoiceForwardFlag_;
          _NSSelectorFromString();
          FUN_008be28c(pcVar7,pcVar5,1);
          _objc_setAssociatedObject(local_88,&DAT_028ce010,local_70,1);
          _objc_setAssociatedObject(local_88,&DAT_028ce011,local_60,3);
          pcVar5 = local_88;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     uVar1 & 0xffffffff);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(pcVar5,&DAT_028ce016,puVar2,1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          pcVar5 = local_88;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_a0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(pcVar5,&DAT_028ce017,puVar2,1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          pcVar5 = local_88;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar5;
        }
        local_64 = 1;
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
      }
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

