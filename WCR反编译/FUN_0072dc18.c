// FUN_0072dc18 @ 0072dc18

bool FUN_0072dc18(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  FUN_0072db3c(local_18,PTR_s_m_uiMessageType_0269d0a8);
  bVar1 = true;
  if ((lVar2 != 0x32) && (bVar1 = true, lVar2 != 0x33)) {
    bVar1 = 9999 < lVar2;
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

