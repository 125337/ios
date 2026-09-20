// FUN_01bc24c4 @ 01bc24c4

void FUN_01bc24c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028e45c8 != (code *)0x0) {
    (*DAT_028e45c8)(local_18,param_2);
  }
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e45b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    FUN_01bc2250(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

