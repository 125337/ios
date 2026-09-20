// FUN_002027a4 @ 002027a4

void FUN_002027a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 local_28;
  long local_20;
  code *local_18;
  
  local_18 = (code *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if ((((local_18 != (code *)0x0) && (local_20 != 0)) &&
      (pcVar1 = local_18,
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,local_20),
      ((ulong)pcVar1 & 1) != 0)) &&
     (pcVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_methodForSelector__0269e1d8,local_20),
     pcVar1 != (code *)0x0)) {
    (*pcVar1)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

