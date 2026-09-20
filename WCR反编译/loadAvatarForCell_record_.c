// loadAvatarForCell:record: @ 01b0f26c

/* Function Stack Size: 0x20 bytes */

void WCRefineKeywordAlertHistoryCardViewController::loadAvatarForCell_record_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  cfstringStruct *local_200;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined1 auStack_b0 [8];
  cfstringStruct *local_a8;
  undefined *local_a0 [2];
  cfstringStruct *local_90;
  uint local_84;
  cfstringStruct *local_78 [4];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_01b0f0fc();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAvatarToken__026be7d0,local_48);
  pcVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contactForRecord__026beb18,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_58 = (cfstringStruct *)0x0;
  local_50 = pcVar4;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar5 = &cf_getContactHeadImage;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,pcVar5);
    pcVar5 = local_50;
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar4 = &cf_getContactHeadImage;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_58;
      local_58 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_50;
    if (local_58 == (cfstringStruct *)0x0) {
      pcVar5 = &cf_m_dtUsrImg;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,pcVar5);
      pcVar5 = local_50;
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = &cf_m_dtUsrImg;
        _NSSelectorFromString();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        local_78[0] = pcVar5;
        FUN_01b0fb94();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_58;
        local_58 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        _objc_storeStrong(local_78,0);
      }
    }
  }
  if (local_58 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = &::cf___;
    if (local_50 != (cfstringStruct *)0x0) {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsHeadHDImgUrl_026b0660);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_m_nsHeadHDImgUrl_026b0660);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        FUN_01b0f0fc();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_90;
        local_90 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      pcVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if ((pcVar4 == (cfstringStruct *)0x0) &&
         (pcVar4 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsHeadImgUrl_026a6b60),
         ((ulong)pcVar4 & 1) != 0)) {
        pcVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_m_nsHeadImgUrl_026a6b60);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        FUN_01b0f0fc();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_90;
        local_90 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
    }
    pcVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_84 = 1;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_90);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_90;
      local_a0[0] = puVar7;
      if (puVar7 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_URLQueryAllowedCharacterSet_0269d8f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_stringByAddingPercentEncodingWit_0269d900);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        if (local_a8 == (cfstringStruct *)0x0) {
          local_200 = &::cf___;
        }
        else {
          local_200 = local_a8;
        }
        puVar8 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_200);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_a0[0];
        local_a0[0] = puVar8;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _objc_storeStrong(&local_a8,0);
      }
      bVar1 = local_a0[0] != (undefined *)0x0;
      if (bVar1) {
        _objc_initWeak(auStack_b0,local_38);
        puVar8 = PTR__OBJC_CLASS___NSURLSession_026ce498;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_a0[0];
        local_e8 = PTR___NSConcreteStackBlock_02578660;
        local_e0 = 0xc2000000;
        local_dc = 0;
        local_d8 = FUN_01b0fc7c;
        local_d0 = &DAT_02589878;
        _objc_copyWeak(auStack_c0,auStack_b0);
        uVar2 = local_48;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = uVar2;
        puVar9 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar8,PTR_s_dataTaskWithURL_completionHandle_026aaf48,puVar7,&local_e8);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = puVar9;
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_resume_026a1720);
        _objc_storeStrong(&local_b8);
        _objc_storeStrong(&local_c8,0);
        _objc_destroyWeak(auStack_c0);
        _objc_destroyWeak(auStack_b0);
      }
      local_84 = (uint)!bVar1;
      _objc_storeStrong(local_a0,0);
    }
    _objc_storeStrong(&local_90,0);
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_avatarView_026ad640);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_84 = 1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

