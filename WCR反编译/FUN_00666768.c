// FUN_00666768 @ 00666768

void FUN_00666768(undefined8 param_1,long param_2,void *param_3,size_t param_4)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((((local_18 != 0) && (param_2 != 0)) && (param_3 != (void *)0x0)) && (param_4 != 0)) {
    lVar1 = local_18;
    _object_getClass();
    FUN_00655f20(lVar1,param_2);
    if ((lVar1 != 0) && (_ivar_getOffset(), local_18 != 0)) {
      _memcpy((void *)(local_18 + lVar1),param_3,param_4);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

