// FUN_00f89624 @ 00f89624

byte FUN_00f89624(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 1;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
    if (uVar1 == 0x24f721) {
      local_11 = 1;
      local_24 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
      if (uVar1 == 0x24f722) {
        local_11 = 1;
        local_24 = 1;
      }
      else {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
        if (uVar1 == 0x24f723) {
          local_11 = 1;
          local_24 = 1;
        }
        else {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_30 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_HeadImage);
          if (((uVar1 & 1) == 0) &&
             (uVar1 = local_30,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_30,PTR_s_containsString__0269d0b0,&cf_HeadImg), (uVar1 & 1) == 0)) {
            uVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_containsString__0269d0b0,&cf_Nameplate);
            if ((uVar1 & 1) == 0) {
              local_11 = 0;
            }
            else {
              local_11 = 1;
            }
          }
          else {
            local_11 = 1;
          }
          local_24 = 1;
          _objc_storeStrong(&local_30,0);
        }
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

