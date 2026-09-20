// uniquePathInDirectory:preferredName:ext: @ 0108c0d0

/* Function Stack Size: 0x28 bytes */

ID WCRefineLocalEmoticonStore::uniquePathInDirectory_preferredName_ext_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  long local_98;
  ID local_90;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_40;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_61 = 0;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_c0 = &cf_h_;
    }
    else {
      local_c0 = local_40;
    }
    local_b8 = local_c0;
  }
  else {
    local_b8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_b8;
  }
  FUN_0108688c();
  _objc_retainAutoreleasedReturnValue();
  local_58 = local_b8;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_79 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_d0 = &cf_png;
  }
  else {
    local_d0 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_d0;
  }
  local_79 = pcVar3 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_d0;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_stringByAppendingPathExtension__026a4580,local_70);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_38;
  local_88 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_stringByAppendingPathComponent__026cab30,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_98 = 2;
  local_90 = IVar4;
  do {
    puVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fileExistsAtPath__026ca630,local_90);
    if (((ulong)puVar1 & 1) == 0) break;
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____ld___);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_88;
    local_88 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    IVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_88);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_90;
    local_90 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_98 = local_98 + 1;
  } while (local_98 < 1000);
  IVar4 = local_90;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return IVar4;
}

