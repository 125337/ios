// compressPathsToCurrentDirectory: @ 01995220

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::compressPathsToCurrentDirectory_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  dispatch_queue_t pdVar8;
  cfstringStruct *local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ID local_d0;
  cfstringStruct *local_c8;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  ID local_98;
  ID local_90;
  bool local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_3c = 1;
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_beginFileOperationWithText__026ba5f8,&cf_ck_WS___);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeOperationToast_026ba600);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    local_61 = 0;
    local_71 = 0;
    local_81 = false;
    if (pcVar1 != (cfstringStruct *)0x1) {
      local_f8 = &cf_S__eN;
    }
    else {
      local_f8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_f8;
    }
    local_81 = pcVar1 == (cfstringStruct *)0x1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_f8;
    if ((local_81 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_58,&cf_S__eN);
    }
    IVar2 = local_28;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedDirectory_026ba370);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_stringByAppendingPathExtension__026a4580,&cf_zip);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_uniqueDestinationForPath__026ba378);
    _objc_retainAutoreleasedReturnValue();
    local_90 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)();
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar5 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_stringWithFormat__0269cca8,&cf_WCRFileCompress___);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_98 = IVar2;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_trackOperationPath__026ba608,local_98);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_trackOperationPath__026ba608,local_90);
    _objc_initWeak(auStack_a0,local_28);
    pdVar8 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_98;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_019958d4;
    local_d8 = &DAT_0258a638;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = local_38;
    local_d0 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_48;
    local_c8 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = IVar2;
    _objc_copyWeak(auStack_a8,auStack_a0);
    IVar2 = local_90;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_50;
    local_b8 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = IVar3;
    _dispatch_async(pdVar8,&local_f0);
    (*(code *)PTR__objc_release_02578630)(pdVar8);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_b8,0);
    _objc_destroyWeak(auStack_a8);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_destroyWeak(auStack_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

