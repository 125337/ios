// FUN_016aa590 @ 016aa590

byte FUN_016aa590(undefined8 param_1)

{
  long lVar1;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = true;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
    local_11 = (int)lVar1 == 2000 || (int)lVar1 == 0x7d1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

