// FUN_00397d80 @ 00397d80

void FUN_00397d80(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *local_d8;
  long local_b8;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar1 = PTR_WCRGroupingEntry_026ce628;
  local_38 = param_3;
  _objc_alloc_init();
  pcVar2 = local_28;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_90 = &cf__g_TTR_;
  }
  else {
    local_90 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_90;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTitle__0269cef0,local_90);
  if (pcVar3 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a0 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setGroupId__026a30e8,local_a0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  if (local_30 == 0) {
    local_b8 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_b8 = local_30;
  }
  pcVar3 = pcVar2;
  FUN_003ce834(pcVar2,local_b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setItems__026a17a8);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCount__026a30f0,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_d8 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  if (local_d8 < local_38) {
    local_d8 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTotalCount__026a30f8,local_d8);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scope_0269ea90);
  FUN_003d27b4();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setIconKind__026a3110,pcVar2);
  FUN_003d2800(local_40,local_28);
  pcVar2 = local_28;
  FUN_003d3510();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAvatarImage__026a3118);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarImage_026a3120);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setAvatarUsesTemplate__026a3128,puVar1 == (undefined *)0x0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

