// loadIndexDictionary @ 015b32e0

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoicePackStore::loadIndexDictionary(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_b8;
  bool local_59;
  undefined *local_58;
  undefined *local_50;
  ID local_48;
  undefined4 local_40;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rootAbsolutePath_026ae1f8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (DAT_028e3b10 != 0) {
    IVar2 = DAT_028e3b18;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3b18,PTR_s_isEqualToString__0269ccc8,IVar1);
    IVar1 = DAT_028e3b10;
    if ((IVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar1;
      local_40 = 1;
      goto LAB_015b35b4;
    }
  }
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByAppendingPathComponent__026cab30,&cf__wcr_voicepack_index_plist)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_48 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithContentsOfFile__026a3348,
             IVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_59 = ((ulong)puVar3 & 1) == 0;
  if (local_59) {
    local_b8 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  else {
    local_b8 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
    local_58 = local_b8;
  }
  local_59 = !local_59;
  _objc_storeStrong(&DAT_028e3b10,local_b8);
  if (local_59) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
  IVar1 = DAT_028e3b18;
  DAT_028e3b18 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = DAT_028e3b10;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = IVar1;
  local_40 = 1;
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
LAB_015b35b4:
  _objc_storeStrong(&local_30,0);
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return local_18;
}

