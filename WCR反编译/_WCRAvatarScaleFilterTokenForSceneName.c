// _WCRAvatarScaleFilterTokenForSceneName @ 0093a354

undefined8 _WCRAvatarScaleFilterTokenForSceneName(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_wechat);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_contacts);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_chat);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_profile);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf_moments);
          if ((uVar1 & 1) == 0) {
            local_18 = 0;
          }
          else {
            local_18 = 5;
          }
        }
        else {
          local_18 = 4;
        }
      }
      else {
        local_18 = 3;
      }
    }
    else {
      local_18 = 2;
    }
  }
  else {
    local_18 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

