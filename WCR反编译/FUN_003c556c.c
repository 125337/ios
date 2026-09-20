// FUN_003c556c @ 003c556c

byte FUN_003c556c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  uint local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((uVar2 == 0) || (FUN_003c5414(), (uVar2 & 1) == 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_003c57ac();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsObject__0269cbb8,local_20);
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObject__0269d678,local_20);
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      DAT_028ca218 = uVar3;
    }
    else {
      local_11 = 0;
    }
    local_24 = (uint)!bVar1;
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_24 == 0) {
      local_11 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

