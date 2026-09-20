// FUN_003aae88 @ 003aae88

void FUN_003aae88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long local_28;
  long local_20;
  long local_18;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  FUN_0035fa54();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  local_28 = lVar3;
  if (lVar3 != 0) {
    FUN_00368c14(lVar3,&cf_updateGroupSortMode);
  }
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  FUN_003aae5c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__Rbc_N_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

