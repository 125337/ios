// FUN_021c56a8 @ 021c56a8

void FUN_021c56a8(long param_1)

{
  long local_48;
  undefined1 auStack_40 [24];
  long local_28;
  
  param_1 = param_1 + 0x10;
  local_28 = param_1;
  _swift_beginAccess(param_1,auStack_40,0x20,0);
  _swift_unknownObjectWeakLoadStrong();
  local_48 = param_1;
  if (param_1 == 0) {
    FUN_021cdc34(&local_48);
    _swift_endAccess(auStack_40);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)(param_1);
    FUN_021cdc34(&local_48);
    _swift_endAccess(auStack_40);
    FUN_0219eddc(1,0);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

