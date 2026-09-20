// FUN_000dfeb0 @ 000dfeb0

void FUN_000dfeb0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  uint local_128;
  cfstringStruct *local_f0;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar1 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c837b);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar1 & 1) == 0) {
    _objc_storeStrong(&local_30,*(undefined8 *)PTR____NSArray0___02578280);
  }
  pcVar1 = local_28;
  FUN_000e07e8();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_48[0] = pcVar1;
  _objc_getAssociatedObject(local_28,&DAT_028c8374);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_50 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar4;
  for (local_68 = (cfstringStruct *)0x0; pcVar1 = local_68, pcVar5 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0), pcVar3 = local_50,
      pcVar1 < pcVar5; local_68 = (cfstringStruct *)((long)&local_68->field0_0x0 + 1)) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48[0];
    local_70 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_f0 = &cf___;
    }
    FUN_000e0924(pcVar1,local_f0);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar2 = local_58;
    if (((ulong)pcVar1 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 local_68);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_70);
    }
    _objc_storeStrong(&local_70,0);
  }
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_128 = 0;
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToArray__0269e9b0,local_58);
    local_128 = (uint)pcVar1;
  }
  pcVar1 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(pcVar1,&DAT_028c8373,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar1 = local_28;
  puVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
  _objc_setAssociatedObject(pcVar1,&DAT_028c8374,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_setAssociatedObject(local_28,&DAT_028c8376,local_60,1);
  if ((local_128 & 1) == 0) {
    FUN_000e10c4(local_28);
  }
  FUN_000dd800(local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  pcVar1 = local_48[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  _NSLog(&cf__wcr__chat_member_search_file_applycontroller__pvisible__luall__luquery___skip__d);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

