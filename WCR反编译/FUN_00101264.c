// FUN_00101264 @ 00101264

void FUN_00101264(undefined8 param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    _os_unfair_lock_lock(&DAT_028c8460);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c83b0,PTR_s_removeObjectForKey__0269d700,local_18);
    _os_unfair_lock_unlock(&DAT_028c8460);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

