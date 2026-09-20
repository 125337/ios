// FUN_021f583c @ 021f583c

void FUN_021f583c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(param_2);
  (*(code *)PTR__objc_release_02578630)(param_2);
  return;
}

