// extractZipAtPath: @ 01994698

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::extractZipAtPath_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  dispatch_queue_t pdVar6;
  cfstringStruct *local_d0;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  cfstringStruct *local_88;
  ID local_80;
  ID local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  ID local_60;
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
  FUN_0198f2c8();
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRN_ec);
    local_3c = 1;
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_beginFileOperationWithText__026ba5f8,&cf_ck_WS_);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeOperationToast_026ba600);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    IVar2 = local_28;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedDirectory_026ba370);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_d0 = &cf_SeN;
    }
    else {
      local_d0 = local_58;
    }
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_stringByAppendingPathComponent__026cab30,local_d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_uniqueDestinationForPath__026ba378);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_trackOperationPath__026ba608,local_60);
    _objc_initWeak(auStack_68,local_28);
    pdVar6 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_48;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01994a80;
    local_98 = &DAT_02585f70;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = local_38;
    local_90 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_60;
    local_88 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = IVar2;
    _objc_copyWeak(auStack_70,auStack_68);
    IVar2 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = IVar2;
    _dispatch_async(pdVar6,&local_b0);
    (*(code *)PTR__objc_release_02578630)(pdVar6);
    _objc_storeStrong(&local_78);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_90,0);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

