// FUN_0219de48 @ 0219de48

uint FUN_0219de48(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 local_38;
  undefined *local_30;
  
  uVar1 = 0;
  FUN_0219defc();
  puVar2 = PTR__OBJC_CLASS___UIDevice_026ce400;
  _objc_opt_self();
  FUN_02222280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_02223a40();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  ppuVar4 = &local_30;
  local_38 = 1;
  local_30 = puVar3;
  FUN_0219df90();
  __sSQ2eeoiySbx_xtFZTj(ppuVar4,&local_38,uVar1,puVar3);
  return (uint)ppuVar4 & 1;
}

