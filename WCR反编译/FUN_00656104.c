// FUN_00656104 @ 00656104

ulong FUN_00656104(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0065635c(local_20,PTR_s_m_uiMesLocalID_0269d238);
  if ((int)uVar1 == 0) {
    uVar1 = local_20;
    FUN_006564b8(local_20,"m_uiMesLocalID");
    local_18 = uVar1;
  }
  else {
    local_18 = uVar1 & 0xffffffff;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

