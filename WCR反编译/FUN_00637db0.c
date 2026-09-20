// FUN_00637db0 @ 00637db0

void FUN_00637db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98 [2];
  long local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  byte local_61;
  undefined *local_60;
  long local_58;
  uint local_50;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if (((local_28 == 0) || (local_30 == 0)) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_50 = 1;
    goto LAB_0063871c;
  }
  lVar2 = local_30;
  FUN_0063dc00(local_30,local_40,0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
LAB_006380a0:
    if (DAT_028cba80 == (char *)0x0) {
      pcVar6 = "MMHeadImageCacher";
      _objc_getClass();
      DAT_028cba80 = pcVar6;
    }
    pcVar6 = DAT_028cba80;
    _objc_retainAutoreleaseReturnValue();
    _objc_alloc_init();
    local_70 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_loadImageFromLocal_withCategory__026a0a08,local_30,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar6;
    if (pcVar6 == (char *)0x0) {
      if (local_38 != 0) {
        local_88 = 0;
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_88;
        local_88 = lVar4;
        (*(code *)PTR__objc_release_02578630)(lVar2);
        if ((local_88 == 0) ||
           (lVar2 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
           lVar2 == 0)) {
          local_50 = 0;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
                     PTR_s_defaultSessionConfiguration_026a16f0);
          _objc_retainAutoreleasedReturnValue();
          local_98[0] = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4024000000000000,puVar3,PTR_s_setTimeoutIntervalForRequest__026a16f8);
          puVar8 = PTR__OBJC_CLASS___NSURLSession_026ce498;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLSession_026ce498,
                     PTR_s_sessionWithConfiguration__026a5f58,local_98[0]);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSURLRequest_026ce7e8;
          puVar9 = PTR__OBJC_CLASS___NSURL_026ce328;
          local_a0 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_88);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_requestWithURL__026a16e0);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar9);
          lVar4 = local_38;
          puVar8 = local_a0;
          puVar3 = local_a8;
          local_e8 = PTR___NSConcreteStackBlock_02578660;
          local_e0 = 0xc2000000;
          local_dc = 0;
          local_d8 = FUN_0063ed50;
          local_d0 = &DAT_0257e558;
          (*(code *)PTR__objc_retain_02578638)();
          lVar2 = local_88;
          local_c8 = lVar4;
          (*(code *)PTR__objc_retain_02578638)();
          lVar4 = local_28;
          local_c0 = lVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar8,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar3,&local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_resume_026a1720);
          local_50 = 1;
          _objc_storeStrong(&local_b0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_c8,0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
          _objc_storeStrong(local_98,0);
        }
        _objc_storeStrong(&local_88,0);
        if (local_50 != 0) goto LAB_006386ec;
      }
      local_50 = 0;
    }
    else {
      _UIImageJPEGRepresentation(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar6;
      if (pcVar6 == (char *)0x0) {
        pcVar7 = local_78;
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_80;
        local_80 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      if (local_80 != (char *)0x0) {
        FUN_0063e464(local_28,local_80,0);
      }
      local_50 = 1;
      _objc_storeStrong(&local_80,0);
    }
LAB_006386ec:
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_58);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_58;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_61 = (byte)lVar5;
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    bVar1 = puVar3 != (undefined *)0x0;
    if (bVar1) {
      FUN_0063e464(local_28,local_60,local_61 & 1);
    }
    local_50 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_60,0);
    if (local_50 == 0) goto LAB_006380a0;
  }
  _objc_storeStrong(&local_58,0);
LAB_0063871c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

