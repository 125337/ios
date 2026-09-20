// FUN_01014a60 @ 01014a60

void FUN_01014a60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_01000d54();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (*(long *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
                (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),0);
    }
  }
  else if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
              (*(long *)(param_1 + 0x40),0,0,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

