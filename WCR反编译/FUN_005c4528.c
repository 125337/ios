// FUN_005c4528 @ 005c4528

void FUN_005c4528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong local_1b0;
  char *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  ulong local_e0;
  ulong local_d8;
  byte local_c9;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined *local_b0;
  char *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined4 local_7c;
  char *local_78;
  char *local_60;
  undefined8 local_58;
  ulong local_50;
  char *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  pcVar1 = "WCUploadTask";
  _objc_getClass();
  pcVar2 = "WCUploadMedia";
  local_60 = pcVar1;
  _objc_getClass();
  local_78 = pcVar2;
  if ((local_60 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    local_48 = (char *)0x0;
    local_7c = 1;
  }
  else {
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contentObj_026a5990);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar3;
    FUN_0059d260(uVar3,&cf_linkUrl);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      local_48 = (char *)0x0;
      local_7c = 1;
    }
    else {
      uVar3 = local_88;
      FUN_0059d260(local_88,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_005a0828();
      _objc_retainAutoreleasedReturnValue();
      local_98 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_88;
      FUN_0059d260(local_88,&cf_desc);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_005a0828();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      pcVar1 = local_78;
      _objc_alloc_init();
      local_a8 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setType__026a3cb8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setSubType__026a5a70,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setTitle__0269cef0,local_98);
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setDesc__026a5a78,local_a0);
      local_b0 = (undefined *)0x0;
      uVar3 = local_88;
      FUN_0059d260(local_88,&cf_mediaList);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 0;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_b8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar3 & 1) == 0) {
        local_1b0 = 0;
      }
      else {
        local_1b0 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_c9 = 1;
        local_c8 = local_1b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_1b0;
      if ((local_c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      if (local_c0 != 0) {
        uVar3 = local_c0;
        FUN_005b9830(local_c0,PTR_s_pathForPreview_026a4a18);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        FUN_005a0828();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_d8;
        local_40 = &cf__jpg;
        local_38 = &cf__jpeg;
        local_30 = &cf__png;
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,3);
        _objc_retainAutoreleasedReturnValue();
        FUN_005c6174(uVar3,puVar5,0);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = uVar3;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (local_e0 != 0) {
          puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                     local_e0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_b0;
          local_b0 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                     local_e0);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_a8;
          puVar5 = PTR_s_setImgSize__026a5520;
          local_e8 = puVar6;
          if (puVar6 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_size_026cab00);
            local_f8 = param_1;
            local_f0 = param_2;
            (*(code *)PTR__objc_msgSend_02578628)(param_1,param_2,pcVar1,puVar5);
          }
          _objc_storeStrong(&local_e8,0);
        }
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_d8,0);
      }
      pcVar1 = local_60;
      _objc_alloc_init();
      pcVar2 = pcVar1;
      FUN_005c6904(pcVar1,3,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_100 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setLinkUrl__026a5a80,local_90);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setTitle__0269cef0,local_98);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setDesc__026a5a78,local_a0);
      pcVar1 = local_100;
      puVar5 = PTR_s_setMediaList__026a5a88;
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_a8)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      if ((puVar5 != (undefined *)0x0) &&
         (pcVar1 = local_100,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_100,PTR_s_respondsToSelector__026ca818,
                    PTR_s_addThumbForPrevMedia__026a5a90), ((ulong)pcVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_addThumbForPrevMedia__026a5a90,local_b0);
      }
      pcVar1 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar1;
      local_7c = 1;
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

