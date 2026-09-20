// FUN_002e71b4 @ 002e71b4

void FUN_002e71b4(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  uint local_17c;
  cfstringStruct *local_168;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  byte local_41 [24];
  byte local_29;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
  local_29 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_41[1] = 1;
    local_41[2] = 0;
    local_41[3] = 0;
    local_41[4] = 0;
  }
  else {
    local_41[0] = 0;
    pcVar2 = local_28;
    FUN_002e7a0c(local_28,local_41);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_41[1] = 1;
      local_41[2] = 0;
      local_41[3] = 0;
      local_41[4] = 0;
    }
    else {
      pcVar2 = local_28;
      FUN_002e7ed8();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_scheme_026a1dd8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_168 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_168 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_168;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_http);
      local_17c = 1;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_https);
        local_17c = (uint)pcVar2;
      }
      local_61 = (byte)local_17c & 1;
      if (((local_41[0] & 1) != 0) && ((local_17c & 1) != 0)) {
        puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
        puVar1 = PTR___dispatch_main_q_02578680;
        if (((ulong)puVar4 & 1) == 0) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_28;
          local_90 = PTR___NSConcreteStackBlock_02578660;
          local_88 = 0xc2000000;
          local_84 = 0;
          local_80 = FUN_002e8b04;
          local_78 = &DAT_02578c20;
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = pcVar2;
          _dispatch_async(puVar1,&local_90);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          _objc_storeStrong(&local_70,0);
        }
        else {
          FUN_002e8078(local_28);
        }
      }
      pcVar2 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026dfd78);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar2;
      if (((local_29 & 1) == 0) &&
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isEqualToString__0269ccc8,local_50),
         ((ulong)pcVar2 & 1) != 0)) {
        local_41[1] = 1;
        local_41[2] = 0;
        local_41[3] = 0;
        local_41[4] = 0;
      }
      else {
        pcVar2 = local_28;
        _objc_setAssociatedObject(local_28,DAT_026dfd78,local_50,3);
        FUN_002e8b34();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        puVar1 = PTR___dispatch_main_q_02578680;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_41[1] = 1;
          local_41[2] = 0;
          local_41[3] = 0;
          local_41[4] = 0;
        }
        else {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_28;
          local_d0 = PTR___NSConcreteStackBlock_02578660;
          local_c8 = 0xc2000000;
          local_c4 = 0;
          local_c0 = FUN_002e95a4;
          local_b8 = &DAT_02578e60;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar2 = local_a0;
          local_b0 = pcVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_a8 = pcVar2;
          _dispatch_async(puVar1,&local_d0);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          if ((local_41[0] & 1) != 0) {
            dVar5 = _dispatch_time(0,800000000);
            puVar1 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_28;
            local_100 = PTR___NSConcreteStackBlock_02578660;
            local_f8 = 0xc2000000;
            local_f4 = 0;
            local_f0 = FUN_002e95f0;
            local_e8 = &DAT_02578e60;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar2 = local_a0;
            local_e0 = pcVar3;
            (*(code *)PTR__objc_retain_02578638)();
            local_d8 = pcVar2;
            _dispatch_after(dVar5,puVar1,&local_100);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            _objc_storeStrong(&local_d8);
            _objc_storeStrong(&local_e0,0);
          }
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_b0,0);
          local_41[1] = 0;
          local_41[2] = 0;
          local_41[3] = 0;
          local_41[4] = 0;
        }
        _objc_storeStrong(&local_a0,0);
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

