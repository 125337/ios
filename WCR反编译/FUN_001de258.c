// FUN_001de258 @ 001de258

byte FUN_001de258(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  ulong uVar2;
  double dVar3;
  double local_1c0;
  double local_198;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  dVar1 = DAT_02323e18;
  local_30 = 0;
  dVar3 = DAT_02323e18;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  if (((local_30 == 0) ||
      (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768),
      (uVar2 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_alpha_026ca4d8), dVar3 <= DAT_02323cd0))
  {
    local_21 = 0;
  }
  else {
    uVar2 = local_30;
    local_198 = DAT_02323cd0;
    FUN_001d2ddc();
    if (((uVar2 & 1) == 0) && (uVar2 = local_30, FUN_001da12c(local_30,local_38), (uVar2 & 1) == 0))
    {
      uVar2 = local_30;
      FUN_001e6254();
      if ((uVar2 & 1) == 0) {
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        if ((param_3 < 32.0) || (param_4 < 32.0)) {
          local_21 = 0;
        }
        else {
          local_1c0 = param_4;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
          if (local_198 < 1.0) {
            local_198 = 1.0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
          if (local_1c0 < 1.0) {
            local_1c0 = 1.0;
          }
          if ((dVar1 <= param_3 / local_198) || (dVar1 <= param_4 / local_1c0)) {
            local_21 = 1;
          }
          else if ((param_3 < 80.0) || (param_4 < 80.0)) {
            local_21 = 0;
          }
          else {
            local_21 = 1;
          }
        }
      }
    }
    else {
      local_21 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

