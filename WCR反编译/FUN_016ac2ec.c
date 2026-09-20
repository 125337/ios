// FUN_016ac2ec @ 016ac2ec

byte FUN_016ac2ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  cfstringStruct *pcVar2;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar1,param_2);
  FUN_016ac524();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_ForwardMsg_ToContact_;
  local_30 = puVar1;
  _NSSelectorFromString();
  if ((local_30 == (undefined8 *)0x0) ||
     (puVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar2,local_20,local_28);
    local_11 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

