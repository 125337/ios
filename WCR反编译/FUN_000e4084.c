// FUN_000e4084 @ 000e4084

void FUN_000e4084(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_000e4f9c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = uVar1;
  _objc_getAssociatedObject(local_18,&DAT_028c8395);
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,local_20);
  if ((uVar2 & 1) == 0) {
    _objc_setAssociatedObject(local_18,&DAT_028c8395,local_20,3);
    _objc_setAssociatedObject(local_18,&DAT_028c8394,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c8396,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c8397,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c8398,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c8374,0,1);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

