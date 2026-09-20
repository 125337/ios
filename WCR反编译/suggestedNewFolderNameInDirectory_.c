// suggestedNewFolderNameInDirectory: @ 015b95c0

/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineVoicePackStore::suggestedNewFolderNameInDirectory_
          (WCRefineVoicePackStore *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  double in_d0;
  ID local_90;
  undefined *local_88;
  long local_80;
  uint local_74;
  undefined *local_70;
  long local_68;
  byte local_59;
  ID local_58;
  ID local_50;
  undefined *local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_40;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_59 = 0;
  if (IVar3 == 0) {
    local_90 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rootAbsolutePath_026ae1f8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_90;
  }
  else {
    local_90 = local_40;
  }
  local_59 = IVar3 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_90;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  for (local_68 = 0; local_68 < 0xb; local_68 = local_68 + 1) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_48;
    IVar3 = local_50;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_stringByAppendingPathComponent__026cab30,puVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_fileExistsAtPath__026ca630);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_70;
    bVar1 = ((ulong)puVar5 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
    }
    local_74 = (uint)bVar1;
    _objc_storeStrong(&local_70,0);
    if (local_74 != 0) goto LAB_015b99f8;
  }
  for (local_80 = 0xb; puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038,
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8, local_80 < 1000; local_80 = local_80 + 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_48;
    IVar3 = local_50;
    local_88 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_stringByAppendingPathComponent__026cab30,puVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_fileExistsAtPath__026ca630);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_88;
    bVar1 = ((ulong)puVar5 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
    }
    local_74 = (uint)bVar1;
    _objc_storeStrong(&local_88,0);
    if (local_74 != 0) goto LAB_015b99f8;
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,(long)in_d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_e_eN9Y_);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_74 = 1;
LAB_015b99f8:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

