// FUN_003a6ea0 @ 003a6ea0

void FUN_003a6ea0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  bVar1 = lVar2 != 0;
  if (bVar1) {
    FUN_003c57ac();
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObject__0269d180,local_18);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    DAT_028ca218 = lVar3;
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

