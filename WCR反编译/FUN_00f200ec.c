// FUN_00f200ec @ 00f200ec

uint FUN_00f200ec(undefined8 param_1)

{
  ulong uVar1;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_yyyy);
  local_1c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_yy);
    local_1c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_MM);
      local_1c = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_dd);
        local_1c = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_HH);
          local_1c = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_mm);
            local_1c = 1;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_18;
              (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_ss);
              local_1c = 1;
              if ((uVar1 & 1) == 0) {
                uVar1 = local_18;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_18,PTR_s_containsString__0269d0b0,&cf_hh);
                local_1c = (uint)uVar1;
              }
            }
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

