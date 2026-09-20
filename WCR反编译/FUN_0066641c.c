// FUN_0066641c @ 0066641c

byte FUN_0066641c(undefined8 param_1)

{
  long lVar1;
  int local_38;
  int local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = false;
  }
  else {
    lVar1 = local_20;
    FUN_0065635c(local_20,PTR_s_m_uAtMeCount_0269e650);
    local_28 = (int)lVar1;
    if (local_28 == 0) {
      lVar1 = local_20;
      FUN_006564b8(local_20,"m_uAtMeCount");
      local_28 = (int)lVar1;
    }
    if (local_28 == 0) {
      lVar1 = local_20;
      FUN_0065635c(local_20,PTR_s_m_uAtAllCount_0269e660);
      local_38 = (int)lVar1;
      if (local_38 == 0) {
        lVar1 = local_20;
        FUN_006564b8(local_20,"m_uAtAllCount");
        local_38 = (int)lVar1;
      }
      local_11 = local_38 != 0;
    }
    else {
      local_11 = true;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

