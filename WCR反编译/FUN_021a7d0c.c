// FUN_021a7d0c @ 021a7d0c

void FUN_021a7d0c(void)

{
  ulong uVar1;
  ulong unaff_x20;
  undefined8 local_40;
  undefined8 local_38;
  
  _swift_getObjectType();
  uVar1 = unaff_x20;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_021b4f20();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    local_38 = 2;
  }
  FUN_02223340(unaff_x20,local_40,local_38);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  return;
}

