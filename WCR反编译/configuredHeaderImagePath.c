// configuredHeaderImagePath @ 01790e2c

/* Function Stack Size: 0x10 bytes */

ID WCPluginsViewControllerBehavior::configuredHeaderImagePath(ID param_1,SEL param_2)

{
  u_int32_t uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint local_10c;
  cfstringStruct *local_b0;
  undefined *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_pluginTopAvatarEnabled_026a65b8);
  if (((ulong)pcVar2 & 1) == 0) {
    local_28 = (cfstringStruct *)0x0;
    local_44 = 1;
  }
  else {
    pcVar3 = (cfstringStruct *)((long)&MACH_HEADER.cpusubtype + 1);
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pluginTopAvatarImagePath_026a65c8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_b0 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf__),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if ((pcVar2 != (cfstringStruct *)0x0) &&
         ((pcVar2 = local_58,
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf__),
          ((ulong)pcVar2 & 1) != 0 &&
          (pcVar2 = local_58, puVar5 = PTR_s_rangeOfString__0269d838,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_rangeOfString__0269d838,&cf__Documents_), local_68 = pcVar2,
          local_60 = puVar5, pcVar2 != (cfstringStruct *)0x7fffffffffffffff)))) {
        pcVar4 = local_58;
        local_70 = (cfstringStruct *)(puVar5 + (long)&pcVar2->field0_0x0);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        pcVar3 = local_50;
        if ((cfstringStruct *)(puVar5 + (long)&pcVar2->field0_0x0) < pcVar4) {
          pcVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_substringFromIndex__0269d120,local_70);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_58;
          local_58 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
      }
    }
    else {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_stringByAppendingPathComponent__026cab30,local_58);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pluginTopAvatarRandomEnabled_026a65c0);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_78 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_80;
      puVar6 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSPredicate_026ce8f0,PTR_s_predicateWithBlock__026ab6e0,
                 &PTR___NSConcreteGlobalBlock_02588b60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_filteredArrayUsingPredicate__026b0178);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
      pcVar2 = local_78;
      puVar5 = local_88;
      if (puVar6 != (undefined *)0x0) {
        puVar6 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
        uVar1 = _arc4random_uniform((u_int32_t)puVar6);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByAppendingPathComponent__026cab30)
        ;
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_58;
        local_58 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
    }
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_10c = 1;
    if (pcVar2 != (cfstringStruct *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_10c = (uint)puVar6 ^ 1;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    pcVar2 = local_58;
    if ((local_10c & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    else {
      local_28 = (cfstringStruct *)0x0;
    }
    local_44 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

