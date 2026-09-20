// FUN_017992d4 @ 017992d4

void FUN_017992d4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *local_20;
  code *local_18;
  
  local_20 = (code *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == (code *)0x0) || (param_2 == 0)) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (code *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_methodForSelector__0269e1d8,param_2);
    if (pcVar1 == (code *)0x0) {
      local_18 = (code *)0x0;
    }
    else {
      pcVar2 = local_20;
      (*pcVar1)(local_20,param_2);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

