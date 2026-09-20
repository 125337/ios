// FUN_021c68fc @ 021c68fc

void FUN_021c68fc(long param_1,undefined8 param_2)

{
  long local_50;
  undefined1 auStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  param_1 = param_1 + 0x10;
  local_30 = param_2;
  local_28 = param_1;
  _swift_beginAccess(param_1,auStack_48,0x20,0);
  _swift_unknownObjectWeakLoadStrong();
  local_50 = param_1;
  if (param_1 == 0) {
    FUN_021cdc34(&local_50);
    _swift_endAccess(auStack_48);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)(param_1);
    FUN_021cdc34(&local_50);
    _swift_endAccess(auStack_48);
    FUN_021c62ac(param_2);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

