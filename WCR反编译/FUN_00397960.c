// FUN_00397960 @ 00397960

void FUN_00397960(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  bool local_59;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined4 local_48;
  char local_41;
  long local_40;
  long local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_41 = '\0';
  bVar1 = true;
  if ((local_30 != (cfstringStruct *)0x0) && (bVar1 = true, local_38 != 0)) {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_originalIndexPath_026a27d8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = '\x01';
    bVar1 = lVar2 == 0;
    local_40 = lVar2;
  }
  if (local_41 != '\0') {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar1) {
    local_28 = (undefined *)0x0;
    local_48 = 1;
  }
  else {
    puVar3 = PTR_WCRGroupingEntry_026ce628;
    _objc_alloc_init();
    pcVar4 = local_30;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_88 = &cf_lQOS;
    }
    else {
      local_88 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_88;
    }
    local_59 = pcVar5 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTitle__0269cef0,local_88);
    if (local_59) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_98 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setGroupId__026a30e8,local_98);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_20 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setItems__026a17a8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCount__026a30f0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTotalCount__026a30f8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setNativePassthrough__026a3100,1);
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_originalIndexPath_026a27d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setNativeOriginalIndexPath__026a3108);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    puVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

