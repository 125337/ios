// FUN_0012b7d4 @ 0012b7d4

undefined4 FUN_0012b7d4(undefined8 param_1,undefined1 *param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  pcVar1 = &cf_m_uiChatRoomStatus;
  _NSSelectorFromString();
  if ((local_20 == 0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1),
     (uVar2 & 1) == 0)) {
    local_14 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1);
    local_14 = (undefined4)uVar2;
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

