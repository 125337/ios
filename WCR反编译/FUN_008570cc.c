// FUN_008570cc @ 008570cc

void FUN_008570cc(undefined8 param_1,long param_2)

{
  code *pcVar1;
  code *local_18;
  
  local_18 = (code *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if ((((local_18 != (code *)0x0) && (param_2 != 0)) &&
      (pcVar1 = local_18,
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,param_2),
      ((ulong)pcVar1 & 1) != 0)) &&
     (pcVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_methodForSelector__0269e1d8,param_2),
     pcVar1 != (code *)0x0)) {
    (*pcVar1)(local_18,param_2);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

