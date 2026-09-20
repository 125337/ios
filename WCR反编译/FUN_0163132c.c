// FUN_0163132c @ 0163132c

byte FUN_0163132c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isChatStatusNotifyOpen_026ab748),
     (uVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatStatusNotifyOpen_026ab748);
    local_11 = ((byte)uVar1 ^ 1) & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

