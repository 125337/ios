// momentsHiddenOwnEntryTitle: @ 01c0d32c

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsViewController::momentsHiddenOwnEntryTitle_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  cfstringStruct *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 *local_128;
  cfstringStruct *local_118;
  bool local_b1;
  undefined1 *local_b0;
  cfstringStruct *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined *local_80;
  undefined1 *local_78;
  undefined *local_70;
  SEL local_68;
  ID local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long *local_28;
  
  local_70 = (undefined1 *)0x0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  puVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectForKey__0269e048,&cf_desc);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    _objc_storeStrong(&local_78,&::cf___);
  }
  puVar3 = local_78;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_78;
  local_78 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (&MACH_HEADER.ncmds < puVar3) {
    local_48 = 0;
    local_50 = 0x10;
    local_40 = 0;
    local_38 = 0x10;
    local_98 = 0;
    local_90 = 0x10;
    puVar3 = local_78;
    puVar1 = PTR_s_rangeOfComposedCharacterSequence_026a44a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_rangeOfComposedCharacterSequence_026a44a0,0,0x10);
    puVar4 = local_78;
    local_88 = puVar3;
    local_80 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_substringWithRange__0269d138,puVar3,puVar1)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_78;
    local_78 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (puVar3 == (undefined1 *)0x0) {
    _objc_storeStrong(&local_78,&::cf__);
  }
  puVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectForKey__0269e048,&cf_time);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar7 = (uint)puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar3 = local_78;
  local_9c = uVar7;
  if (uVar7 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = puVar3;
    local_a0 = 1;
  }
  else {
    local_28 = &DAT_028e4628;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0258bac0);
    if (*local_28 != -1) {
      _dispatch_once(local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    pcVar6 = DAT_028e4620;
    uVar8 = NEON_ucvtf((ulong)local_9c);
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_118 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = local_118;
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar6 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_128 = local_78;
    }
    else {
      local_128 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_128;
    }
    local_b1 = pcVar6 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_128;
    if (local_b1) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    local_a0 = 1;
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_58;
}

