// FUN_007b0d1c @ 007b0d1c

void FUN_007b0d1c(char *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_48;
  undefined8 local_40;
  char *local_38;
  char *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = param_2;
  local_38 = param_1;
  FUN_007ac894();
  if (((ulong)param_1 & 1) == 0) {
    pcVar2 = local_38;
    (*DAT_028ccc10)(local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    goto LAB_007b10f8;
  }
  puVar1 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isFilteringActive_026a30c8);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasUnfilteredSnapshot_026a8210),
     ((ulong)puVar1 & 1) == 0)) {
LAB_007b10a0:
    pcVar2 = local_38;
    (*DAT_028ccc10)(local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
  }
  else {
    pcVar2 = "MMConcatEnumerator";
    _objc_getClass();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_concatEnumrators__026a8218);
    if (((ulong)pcVar3 & 1) == 0) goto LAB_007b10a0;
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastUnfilteredAllTop_026a8220);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_48;
    local_28 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastUnfilteredNormal_026a8230);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_concatEnumrators__026a8218);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_48,0);
LAB_007b10f8:
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

