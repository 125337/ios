// FUN_00940cd0 @ 00940cd0

byte FUN_00940cd0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  char *local_38;
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  FUN_00942bf4();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "ForwardMessageLogicController";
  local_30 = lVar1;
  _objc_getClass();
  pcVar3 = &cf_ForwardMsg_ToContact_;
  local_38 = pcVar2;
  _NSSelectorFromString();
  local_40 = pcVar3;
  if (((local_20 == 0) || (local_30 == 0)) || (local_38 == (char *)0x0)) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    pcVar2 = local_38;
    _objc_alloc_init();
    local_50 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,local_40),
       ((ulong)pcVar2 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      FUN_009435b4(local_50);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_40,local_20,local_30);
      local_11 = 1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

