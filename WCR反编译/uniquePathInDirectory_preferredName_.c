// uniquePathInDirectory:preferredName: @ 015bb850

/* Function Stack Size: 0x20 bytes */

ID WCRefineVoicePackStore::uniquePathInDirectory_preferredName_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_a8;
  cfstringStruct *local_98;
  undefined *local_80;
  undefined *local_70;
  undefined *local_68;
  long local_60;
  ID local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_98 = &cf_voice_silk;
  }
  else {
    local_98 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_40;
  local_48 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_60 = 1;
  local_58 = IVar3;
  while (puVar1 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileExistsAtPath__026ca630,local_58),
        IVar3 = local_58, ((ulong)puVar1 & 1) != 0) {
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_a8 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____ld);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_a8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____ld___)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_a8;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringByAppendingPathComponent__026cab30,local_68);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_58;
    local_58 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_60 = local_60 + 1;
    _objc_storeStrong(&local_68,0);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

