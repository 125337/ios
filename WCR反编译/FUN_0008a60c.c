// FUN_0008a60c @ 0008a60c

byte FUN_0008a60c(undefined8 param_1,byte param_2,byte param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong local_30;
  byte local_22;
  byte local_21;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_22 = param_3;
  local_21 = param_2;
  _objc_storeStrong(&local_30,param_4);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else if ((local_22 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    FUN_0008a890();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,_WCRAvatarSceneMyProfile);
      if ((uVar1 & 1) == 0) {
        if ((local_21 & 1) == 0) {
          uVar1 = local_20;
          FUN_0008b6d0();
          if ((uVar1 & 1) == 0) {
            uVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,&cf_moments_list);
            if (((uVar1 & 1) == 0) &&
               (uVar1 = local_30,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_30,PTR_s_isEqualToString__0269ccc8,&cf_moments_profile),
               (uVar1 & 1) == 0)) {
              local_11 = 1;
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
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

