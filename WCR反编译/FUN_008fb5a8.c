// FUN_008fb5a8 @ 008fb5a8

void FUN_008fb5a8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *local_40;
  undefined4 local_38;
  char *local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  pcVar1 = "ForwardMessageLogicController";
  _objc_getClass();
  local_28 = pcVar1;
  if (((pcVar1 == (char *)0x0) || (local_18 == 0)) || (local_20 == 0)) {
    local_38 = 1;
  }
  else {
    _objc_alloc_init();
    pcVar2 = &cf_ForwardMsg_ToContact_;
    local_40 = pcVar1;
    _NSSelectorFromString();
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar2,local_18,local_20);
    }
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

