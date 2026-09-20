// FUN_0219e57c @ 0219e57c

void FUN_0219e57c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  puVar1 = param_1;
  FUN_0219e50c();
  (*(code *)PTR__objc_retain_02578638)(param_1);
  _swift_beginAccess(puVar1,auStack_38,0x21,0);
  uVar2 = *puVar1;
  *puVar1 = param_1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _swift_endAccess(auStack_38);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

