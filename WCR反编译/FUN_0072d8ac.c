// FUN_0072d8ac @ 0072d8ac

byte FUN_0072d8ac(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((local_20 == 0) || (FUN_0072da78(), (uVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    uVar3 = local_20;
    FUN_0072db3c(local_20,PTR_s_m_uiStatus_026a7ab8);
    if (uVar3 == 1) {
      uVar3 = local_20;
      FUN_0072dc18(0);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_20;
        FUN_0072dce8(local_20,PTR_s_m_bForbidden_026a7ac0);
        if ((uVar3 & 1) == 0) {
          uVar3 = local_20;
          FUN_0072ddd8();
          if ((uVar3 & 1) == 0) {
            local_11 = 0;
          }
          else {
            uVar3 = local_20;
            _objc_msgSend(local_20,PTR_s_respondsToSelector__026ca818,
                          PTR_s_setM_bForbidden__026a7ab0);
            local_11 = (byte)uVar3 & 1;
          }
        }
        else {
          local_11 = 0;
        }
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

