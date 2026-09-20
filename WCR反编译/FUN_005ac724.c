// FUN_005ac724 @ 005ac724

ulong FUN_005ac724(ulong param_1)

{
  ulong uVar1;
  
  _objc_getAssociatedObject(param_1,&DAT_028cb77c);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return uVar1 & 0xffffffff;
}

