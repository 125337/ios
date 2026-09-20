// FUN_0022fe54 @ 0022fe54

void FUN_0022fe54(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_40;
  uint local_38;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_isKindOfClass__0269cd68,*(undefined8 *)(param_1 + 0x28));
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar3;
    FUN_0023001c();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20));
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      _objc_setAssociatedObject(local_40,DAT_026dfb40,0,1);
      FUN_002303d0(local_40,1);
    }
    local_38 = (uint)!bVar1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    if (local_38 == 0) {
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

