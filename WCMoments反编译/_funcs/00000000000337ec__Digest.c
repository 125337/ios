// _Digest @0x337ec

void _Digest(undefined8 param_1)

{
  CC_LONG len;
  undefined8 uVar1;
  void *data;
  undefined8 local_68;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uchar auStack_38 [32];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  _objc_msgSend_dataUsingEncoding_(local_40,local_68,4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  _objc_retainAutorelease();
  data = (void *)_objc_msgSend_bytes(uVar1,local_68);
  len = _objc_msgSend_length(local_48,local_68);
  _CC_SHA256(data,len,auStack_38);
  local_50 = _objc_opt_new(&_OBJC_CLASS___NSMutableString);
  for (local_58 = 0; local_58 < 0x20; local_58 = local_58 + 1) {
    _objc_msgSend_appendFormat_(local_50,local_68,&cf__02x);
  }
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_50);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,uVar1);
  return;
}

