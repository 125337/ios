// FUN_005dc4a4 @ 005dc4a4

ulong FUN_005dc4a4(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiAppMsgInnerType_026a14f0),
     (uVar1 & 1) == 0)) {
    local_18 = 0x7fffffffffffffff;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiAppMsgInnerType_026a14f0);
    local_18 = uVar1 & 0xffffffff;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

