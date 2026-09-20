// FUN_008f7b6c @ 008f7b6c

void FUN_008f7b6c(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_40;
  uint local_38;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (lVar2 == 0) {
    local_38 = 1;
  }
  else {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hash_0269ec90);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithUnsignedInteger__0269e4d0,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(ulong *)(param_1 + 0x20);
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8,puVar3);
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_40);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_20);
    }
    local_38 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_38 == 0) {
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

