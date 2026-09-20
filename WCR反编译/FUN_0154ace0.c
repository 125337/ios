// FUN_0154ace0 @ 0154ace0

void FUN_0154ace0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  cfstringStruct *local_1d8;
  cfstringStruct *local_138;
  cfstringStruct *local_128;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  long local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  long local_70;
  long local_68;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  uint local_3c;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if ((local_28 == 0) || (local_30 == (cfstringStruct *)0x0)) {
    local_3c = 1;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contact_026a0d10);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    FUN_01582414();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    lVar6 = local_28;
    uVar2 = DAT_028c5fd8;
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    local_51 = 0;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_138 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_138 = &cf___;
      }
      local_128 = local_138;
      local_50 = pcVar3;
    }
    else {
      local_128 = local_48;
    }
    _objc_setAssociatedObject(lVar6,uVar2,local_128,3);
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_60 = (cfstringStruct *)0x0;
    local_68 = 0;
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_68;
    pcVar5 = pcVar4;
    FUN_0155f39c();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_68,local_70);
    pcVar3 = local_60;
    local_60 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (local_60 == (cfstringStruct *)0x0) {
      pcVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contact_026a0d10);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_getContactHeadImage;
      _NSSelectorFromString(&cf_getContactHeadImage);
      pcVar5 = pcVar4;
      FUN_01533df4(pcVar4,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_60;
      local_60 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (local_60 == (cfstringStruct *)0x0) {
      pcVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contact_026a0d10);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_m_dtUsrImg;
      _NSSelectorFromString(&cf_m_dtUsrImg);
      pcVar5 = pcVar4;
      FUN_01533df4(pcVar4,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_78;
      FUN_0155f6d8();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_60;
      local_60 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_storeStrong(&local_78,0);
    }
    local_81 = 0;
    bVar1 = false;
    if (local_60 == (cfstringStruct *)0x0) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = pcVar3 != (cfstringStruct *)0x0;
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if (bVar1) {
      pcVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wxid_026b04e8);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      FUN_0155f7e4();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_60;
      local_60 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (local_60 == (cfstringStruct *)0x0) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contact_026a0d10);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_01533df4();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      FUN_01528c84();
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contact_026a0d10);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        FUN_01533df4();
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = pcVar5;
        FUN_01528c84();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_90;
        local_90 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      pcVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_3c = 1;
      }
      else {
        puVar8 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_90);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_90;
        local_98 = puVar8;
        if (puVar8 == (undefined *)0x0) {
          puVar8 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_URLQueryAllowedCharacterSet_0269d8f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_stringByAddingPercentEncodingWit_0269d900);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(puVar8);
          if (local_a0 == (cfstringStruct *)0x0) {
            local_1d8 = &cf___;
          }
          else {
            local_1d8 = local_a0;
          }
          puVar9 = PTR__OBJC_CLASS___NSURL_026ce328;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_1d8);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = local_98;
          local_98 = puVar9;
          (*(code *)PTR__objc_release_02578630)(puVar8);
          _objc_storeStrong(&local_a0,0);
        }
        bVar1 = local_98 != (undefined *)0x0;
        if (bVar1) {
          puVar9 = PTR__OBJC_CLASS___NSURLSession_026ce498;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = local_28;
          puVar8 = local_98;
          local_e8 = PTR___NSConcreteStackBlock_02578660;
          local_e0 = 0xc2000000;
          local_dc = 0;
          local_d8 = FUN_015827fc;
          local_d0 = &DAT_02586a10;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar3 = local_48;
          local_c8 = lVar6;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar4 = local_30;
          local_c0 = pcVar3;
          (*(code *)PTR__objc_retain_02578638)();
          lVar6 = local_38;
          local_b8 = pcVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = lVar6;
          puVar10 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar9,PTR_s_dataTaskWithURL_completionHandle_026aaf48,puVar8,&local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = puVar10;
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_resume_026a1720);
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_c8,0);
        }
        local_3c = (uint)!bVar1;
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setImage__026ca978,local_60);
      lVar6 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if (lVar6 != 0) {
        FUN_01560164(lVar6);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar6);
      }
      lVar6 = local_38;
      if (local_38 != 0) {
        pcVar3 = local_60;
        FUN_01582608();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar6 + 0x10))();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      local_3c = 1;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

