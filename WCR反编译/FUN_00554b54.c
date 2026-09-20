// FUN_00554b54 @ 00554b54

void FUN_00554b54(void)

{
  bool bVar1;
  undefined *puVar2;
  u_int32_t uVar3;
  undefined *puVar4;
  undefined *local_88;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_88 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_momentsAutoCommentUseCustom_026a4738);
  bVar1 = ((ulong)local_88 & 1) == 0;
  if (bVar1) {
    FUN_00554f00();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_88;
  }
  else {
    local_40 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_momentsAutoCommentTexts_026a4740);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_40;
    FUN_0054fe38();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_88;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_50);
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (puVar4 == (undefined *)0x0) {
    FUN_00554f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_28 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (puVar4 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    uVar3 = _arc4random_uniform((u_int32_t)puVar4);
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectAtIndexedSubscript__0269cc78,uVar3);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar4;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

