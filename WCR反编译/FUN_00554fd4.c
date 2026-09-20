// FUN_00554fd4 @ 00554fd4

byte FUN_00554fd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_38;
  int local_2c;
  undefined *local_28;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = puVar1;
  while (local_28 != (undefined *)0x0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsString__0269d0b0,&cf_WCTimeLine);
    if ((((ulong)puVar1 & 1) == 0) &&
       (puVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_containsString__0269d0b0,&cf_WCCommentDetail),
       ((ulong)puVar1 & 1) == 0)) {
      local_2c = 0;
    }
    else {
      local_11 = 1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
    if (local_2c != 0) goto LAB_00555198;
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_parentViewController_0269e500);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  local_2c = 2;
LAB_00555198:
  _objc_storeStrong(&local_28,0);
  iVar3 = local_2c + -2;
  if (iVar3 == 0) {
    iVar3 = 1;
    local_11 = 0;
    local_2c = 1;
  }
  _objc_storeStrong(iVar3,&local_20,0);
  return local_11 & 1;
}

