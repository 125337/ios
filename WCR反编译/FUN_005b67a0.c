// FUN_005b67a0 @ 005b67a0

void FUN_005b67a0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_4;
  if (local_28 != 0) {
    pcVar1 = &cf_WCActionSheet;
    _NSClassFromString();
    local_38 = pcVar1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      _objc_setAssociatedObject(pcVar1,&DAT_028cb77d,local_28,1);
      pcVar1 = &cf_getCellViewForDataItem_;
      _NSSelectorFromString();
      uVar2 = local_18;
      local_50 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,local_50,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar2;
        if (uVar2 != 0) {
          _objc_setAssociatedObject(local_38,&DAT_028cb77e,uVar2,0);
        }
        _objc_storeStrong(&local_58,0);
      }
    }
  }
  (*DAT_028cb708)(local_18,local_20,local_28,local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

