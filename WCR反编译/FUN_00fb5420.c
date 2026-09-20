// FUN_00fb5420 @ 00fb5420

void FUN_00fb5420(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined4 local_cc;
  cfstringStruct *local_b0;
  cfstringStruct *local_70;
  undefined4 local_64;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  local_30 = param_2;
  local_28 = param_2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_2 + 0x28)
            );
  lVar2 = *(long *)(param_2 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardFileAtPath_fromViewCo_026a9b60,
               *(undefined8 *)(param_2 + 0x38),local_38);
    local_3c = 1;
  }
  else {
    pcVar3 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_b0;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = &cf_CMessageWrap;
    _NSClassFromString();
    local_50 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardFileAtPath_fromViewCo_026a9b60,
                 *(undefined8 *)(param_2 + 0x38),local_38);
      local_3c = 1;
    }
    else {
      local_58 = (cfstringStruct *)0x0;
      local_60 = PTR_s_initWithMsgType_nsFromUsr__026a9ae8;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initWithMsgType_nsFromUsr__026a9ae8);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithMsgType__0269d3f8);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar4 = local_50;
          _objc_alloc();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_58;
          local_58 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
      }
      else {
        pcVar4 = local_50;
        _objc_alloc();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_58;
        local_58 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      pcVar3 = local_58;
      if (local_58 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardFileAtPath_fromViewCo_026a9b60,
                   *(undefined8 *)(param_2 + 0x38),local_38);
        local_3c = 1;
      }
      else {
        if (*(int *)(param_2 + 0x40) == 0) {
          local_cc = 1000;
        }
        else {
          local_cc = *(undefined4 *)(param_2 + 0x40);
        }
        local_64 = local_cc;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setM_uiMessageType__026a9af0,0x22);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_nsFromUsr__0269d408,local_48);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_nsToUsr__0269d410,local_48);
        puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setM_uiCreateTime__0269d428,(int)param_1);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiStatus__0269d418,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiDownloadStatus__026a9af8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_bForward__026a9b00,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiVoiceTime__026a3968,local_64);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiVoiceFormat__026a9e58,4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setM_dtVoice__026a9e70,*(undefined8 *)(param_2 + 0x30));
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiVoiceEndFlag__026a9e60,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiVoiceCancelFlag__026acfa0,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_uiVoiceForwardFlag__026a9e68,1);
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_<msg><voicemsgvoicelength___u_voiceformat__4_forwardflag__0__><_msg>);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setM_nsContent__0269ef88);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _WCRefineStageVoiceForwardPayload
                  (*(undefined8 *)(param_2 + 0x30),local_64,*(undefined8 *)(param_2 + 0x38));
        puVar6 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_wcr_startOfficialForwardForMessa_026acf88,
                   local_58,local_38,0xffffffffffffffff);
        if (((ulong)puVar6 & 1) == 0) {
          _WCRefineClearStagedVoiceForwardPayload();
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardFileAtPath_fromViewCo_026a9b60,
                     *(undefined8 *)(param_2 + 0x38),local_38);
        }
        local_3c = 0;
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

