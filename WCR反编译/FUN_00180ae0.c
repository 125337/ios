// FUN_00180ae0 @ 00180ae0

undefined4 FUN_00180ae0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_getContactCount;
  _NSSelectorFromString();
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) == 0) {
    local_14 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1);
    local_14 = (undefined4)uVar2;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

