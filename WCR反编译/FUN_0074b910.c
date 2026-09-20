// FUN_0074b910 @ 0074b910

uint FUN_0074b910(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  uint local_44;
  long *local_20;
  long local_18;
  
  plVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar1,param_1);
  FUN_0074be7c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_20 = plVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  local_44 = 0;
  if (lVar2 != 0) {
    plVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    local_44 = 0;
    if (plVar1 != (long *)0x0) {
      lVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEqualToString__0269ccc8,local_20);
      local_44 = (uint)lVar2;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_44 & 1;
}

