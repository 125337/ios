// FUN_002e4444 @ 002e4444

byte FUN_002e4444(double param_1,double param_2,double param_3,undefined8 param_4,long param_5)

{
  double dVar1;
  long lVar2;
  long local_20;
  byte local_11;
  
  dVar1 = DAT_02323d38;
  local_20 = 0;
  _objc_storeStrong(&local_20,param_4);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    if (param_5 == 0) {
      if (ABS(param_2) <= dVar1) {
        if (param_3 <= dVar1) {
          if (ABS(param_1 - 1.0) <= DAT_02323db0) {
            local_11 = 0;
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

