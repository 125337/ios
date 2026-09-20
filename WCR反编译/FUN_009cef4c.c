// FUN_009cef4c @ 009cef4c

void FUN_009cef4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  cfstringStruct *local_310;
  cfstringStruct *local_2a0;
  cfstringStruct *local_288;
  cfstringStruct *local_270;
  cfstringStruct *local_260;
  cfstringStruct *local_1f0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined8 local_178;
  bool local_169;
  cfstringStruct *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined *local_128;
  bool local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  bool local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  cfstringStruct *local_90;
  undefined8 local_88;
  long local_80;
  cfstringStruct *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  long local_58;
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
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_finished_026a15b0);
  if ((uVar2 & 1) == 0) {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
    lVar4 = local_30;
    local_58 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_69 = false;
    if (lVar4 == 0) {
      local_1f0 = (cfstringStruct *)0x0;
    }
    else {
      local_1f0 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_1f0;
    }
    local_69 = lVar4 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_1f0;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    pcVar5 = local_60;
    FUN_009c6c6c();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar5;
    if ((((local_40 == 0) && (199 < local_58)) && (local_58 < 300)) &&
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0),
       pcVar5 == (cfstringStruct *)0x0)) {
      pcVar5 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      pcVar8 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
      local_c9 = 0;
      local_d9 = 0;
      local_e9 = 0;
      if (((ulong)pcVar8 & 1) == 0) {
        pcVar8 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
        _objc_retainAutoreleasedReturnValue();
        local_d9 = 1;
        puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_d8 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar7);
        if (((ulong)pcVar8 & 1) == 0) {
          local_270 = *(cfstringStruct **)PTR____NSArray0___02578280;
        }
        else {
          local_270 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_images);
          _objc_retainAutoreleasedReturnValue();
          local_e9 = 1;
          local_e8 = local_270;
        }
        local_260 = local_270;
      }
      else {
        local_260 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
        _objc_retainAutoreleasedReturnValue();
        local_c9 = 1;
        local_c8 = local_260;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_260;
      if ((local_e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      if ((local_d9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
      }
      if ((local_c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      pcVar8 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
      local_101 = false;
      bVar1 = ((ulong)pcVar8 & 1) == 0;
      if (bVar1) {
        local_288 = (cfstringStruct *)0x0;
      }
      else {
        local_288 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_100 = local_288;
      }
      local_101 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_288;
      if ((local_101 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_100);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_b64_json);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar8 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
      local_119 = false;
      bVar1 = ((ulong)pcVar8 & 1) == 0;
      if (bVar1) {
        local_2a0 = (cfstringStruct *)0x0;
      }
      else {
        local_2a0 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_b64_json);
        _objc_retainAutoreleasedReturnValue();
        local_118 = local_2a0;
      }
      local_119 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = local_2a0;
      if ((local_119 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_118);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
      puVar7 = PTR__OBJC_CLASS___NSURL_026ce328;
      if (pcVar5 == (cfstringStruct *)0x0) {
        pcVar5 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar9);
        local_169 = false;
        bVar1 = ((ulong)pcVar8 & 1) == 0;
        if (bVar1) {
          local_310 = &cf___;
        }
        else {
          local_310 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
          _objc_retainAutoreleasedReturnValue();
          local_168 = local_310;
        }
        local_169 = !bVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_URLWithString__026a16d8,local_310);
        _objc_retainAutoreleasedReturnValue();
        local_160 = puVar7;
        if ((local_169 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_168);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        puVar7 = local_160;
        FUN_009c907c();
        if (((ulong)puVar7 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_setFinished__026a15b8,1);
          puVar7 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_198 = PTR___NSConcreteStackBlock_02578660;
          local_190 = 0xc2000000;
          local_18c = 0;
          local_188 = FUN_009cff20;
          local_180 = &DAT_025814c8;
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          (*(code *)PTR__objc_retain_02578638)();
          local_178 = uVar6;
          _dispatch_async(puVar7,&local_198);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          local_4c = 1;
          _objc_storeStrong(&local_178,0);
        }
        else {
          puVar9 = PTR__OBJC_CLASS___NSURLSession_026ce498;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = local_160;
          local_1c8 = PTR___NSConcreteStackBlock_02578660;
          local_1c0 = 0xc2000000;
          local_1bc = 0;
          local_1b8 = FUN_009cff94;
          local_1b0 = &DAT_02581558;
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_retain_02578638)();
          uVar10 = *(undefined8 *)(param_1 + 0x28);
          local_1a8 = uVar6;
          (*(code *)PTR__objc_retain_02578638)();
          puVar11 = puVar9;
          local_1a0 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar9,PTR_s_dataTaskWithURL_completionHandle_026aaf48,puVar7,&local_1c8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_setSecondaryTask__026aaf50);
          (*(code *)PTR__objc_release_02578630)(puVar11);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_secondaryTask_026aae78);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar6);
          _objc_storeStrong(&local_1a0);
          _objc_storeStrong(&local_1a8,0);
          local_4c = 0;
        }
        _objc_storeStrong(&local_160,0);
      }
      else {
        puVar7 = PTR__OBJC_CLASS___NSData_026ce1d0;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_128 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_setFinished__026a15b8,1);
        puVar7 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_158 = PTR___NSConcreteStackBlock_02578660;
        local_150 = 0xc2000000;
        local_14c = 0;
        local_148 = FUN_009cfe38;
        local_140 = &DAT_0257ca68;
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_retain_02578638)();
        puVar9 = local_128;
        local_130 = uVar6;
        (*(code *)PTR__objc_retain_02578638)();
        local_138 = puVar9;
        _dispatch_async(puVar7,&local_158);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        local_4c = 1;
        _objc_storeStrong(&local_138);
        _objc_storeStrong(&local_130,0);
        _objc_storeStrong(&local_128,0);
      }
      _objc_storeStrong(&local_110);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_c0,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setFinished__026a15b8,1);
      puVar7 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_009cfcbc;
      local_a0 = &DAT_0257a710;
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      lVar3 = local_40;
      local_88 = uVar6;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar5 = local_78;
      local_98 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = pcVar5;
      local_80 = local_58;
      _dispatch_async(puVar7,&local_b8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      local_4c = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
    if (local_4c == 0) {
      local_4c = 0;
    }
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

