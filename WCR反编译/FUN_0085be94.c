// FUN_0085be94 @ 0085be94

void FUN_0085be94(undefined4 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  code *local_18;
  
  local_18 = (code *)0x0;
  _objc_storeStrong(&local_18,param_2);
  if ((((local_18 != (code *)0x0) && (param_3 != 0)) &&
      (pcVar1 = local_18,
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,param_3),
      ((ulong)pcVar1 & 1) != 0)) &&
     (pcVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_methodForSelector__0269e1d8,param_3),
     pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1,local_18,param_3);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

