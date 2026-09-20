// FUN_003c76a4 @ 003c76a4

void FUN_003c76a4(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    if (param_2 != (long *)0x0) {
      lVar1 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028ca290);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_2 = lVar1;
    }
    if (param_3 != (long *)0x0) {
      lVar1 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028ca291);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_3 = lVar1;
    }
    if (param_4 != (long *)0x0) {
      lVar1 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028ca292);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = lVar1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

