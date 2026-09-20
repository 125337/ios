// FUN_0103ba40 @ 0103ba40

void FUN_0103ba40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long local_148;
  long local_120;
  cfstringStruct *local_110;
  undefined *local_d8;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined1 local_71;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  int local_4c;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = param_1;
  if (((local_40 == 0) &&
      (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
      lVar1 != 0)) &&
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578),
     lVar1 < 400)) {
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_length_0269cca0);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar6 = local_58;
      local_58 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    local_60 = (undefined *)0x0;
    uVar3 = *(ulong *)(param_1 + 0x58);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_JSONObjectFromString__026adcc0,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar3;
    if (uVar3 == 0) {
      puVar6 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stringByRemovingPercentEncoding_0269d840)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        local_d8 = local_58;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_d8;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      uVar5 = *(ulong *)(param_1 + 0x58);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_unescapeJSONString__026adcb8,local_70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_JSONObjectFromString__026adcc0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_68;
      local_68 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _objc_storeStrong(&local_70,0);
    }
    uVar3 = local_68;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x58);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_JSONObjectFromString__026adcc0,local_68);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_68;
      local_68 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (local_68 != 0) {
      puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288)
      ;
      puVar6 = local_60;
      local_60 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setPlatform__026adde8,1);
      local_110 = *(cfstringStruct **)(param_1 + 0x38);
      if (local_110 == (cfstringStruct *)0x0) {
        local_110 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setSourceURL__026addf0,local_110);
      local_120 = *(long *)(param_1 + 0x30);
      if (local_120 == 0) {
        local_120 = *(long *)(param_1 + 0x28);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setResolvedURL__026addf8,local_120);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x58),PTR_s_fillDouyinResult_fromJSON__026adfb8,local_60,
                 local_68);
    }
    uVar3 = *(ulong *)(param_1 + 0x58);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_douyinParseSucceeded_cardPlaybac_026adf80,local_60,
               *(byte *)(param_1 + 0x68) & 1);
    if ((uVar3 & 1) == 0) {
      puVar6 = *(undefined **)(param_1 + 0x58);
      local_148 = *(long *)(param_1 + 0x30);
      if (local_148 == 0) {
        local_148 = *(long *)(param_1 + 0x28);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_extractDouyinFromHTML_sourceURL__026adf98,local_58,
                 *(undefined8 *)(param_1 + 0x38),local_148);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_60;
      local_60 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar3 = *(ulong *)(param_1 + 0x58);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_douyinParseSucceeded_cardPlaybac_026adf80,local_60,
               *(byte *)(param_1 + 0x68) & 1);
    puVar6 = PTR___dispatch_main_q_02578680;
    local_71 = (undefined1)uVar3;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x58),PTR_s_tryDouyinCandidates_index_resolv_026adfb0,
                 *(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x60) + 1,
                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(byte *)(param_1 + 0x68) & 1,*(undefined8 *)(param_1 + 0x40));
      local_4c = 0;
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_0103c17c;
      local_90 = &DAT_0257ca68;
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_60;
      local_80 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = puVar2;
      _dispatch_async(puVar6,&local_a8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_4c = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    if (local_4c == 0) {
      local_4c = 0;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x58),PTR_s_tryDouyinCandidates_index_resolv_026adfb0,
               *(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x60) + 1,
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
               *(byte *)(param_1 + 0x68) & 1,*(undefined8 *)(param_1 + 0x40));
    local_4c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

