// FUN_00588890 @ 00588890

void FUN_00588890(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028cb62d);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    (*DAT_028cb5e8)(param_1,param_2);
  }
  return;
}

