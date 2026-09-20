// FUN_0066604c @ 0066604c

ulong FUN_0066604c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_0065635c(local_20,PTR_s_m_uUnReadCount_026a6310);
  if ((int)uVar1 == 0) {
    uVar1 = local_20;
    FUN_0065635c(local_20,PTR_s_unreadCount_026a3080);
    if ((int)uVar1 == 0) {
      uVar1 = local_20;
      FUN_0065635c(local_20,PTR_s_newUnreadCount_026a6318);
      if ((int)uVar1 == 0) {
        uVar1 = local_28;
        FUN_0065635c(local_28,PTR_s_unreadCount_026a3080);
        if ((int)uVar1 == 0) {
          uVar1 = local_20;
          FUN_006564b8(local_20,"m_uUnReadCount");
          local_18 = uVar1;
          if ((((uVar1 == 0) &&
               (uVar1 = local_20, FUN_006564b8(local_20,"unreadCount"), local_18 = uVar1, uVar1 == 0
               )) && (uVar1 = local_20, FUN_006564b8(local_20,"newUnreadCount"), local_18 = uVar1,
                     uVar1 == 0)) &&
             (uVar1 = local_28, FUN_006564b8(local_28,"m_lastUnReadCount"), local_18 = uVar1,
             uVar1 == 0)) {
            uVar1 = local_28;
            FUN_006564b8(local_28,"m_unreadCount");
            local_18 = uVar1;
          }
        }
        else {
          local_18 = uVar1 & 0xffffffff;
        }
      }
      else {
        local_18 = uVar1 & 0xffffffff;
      }
    }
    else {
      local_18 = uVar1 & 0xffffffff;
    }
  }
  else {
    local_18 = uVar1 & 0xffffffff;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

