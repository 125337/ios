// FUN_016be224 @ 016be224

undefined8 FUN_016be224(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_016be590();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_wcrefinebackup);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_w);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_w),
         (uVar1 & 1) == 0)) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_w);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_w);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_hasPrefix__0269d320,&cf_wcrefinefont);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_w);
              if ((uVar1 & 1) == 0) {
                uVar1 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_w);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_28;
                  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__nmc)
                  ;
                  if ((uVar1 & 1) == 0) {
                    local_18 = 0;
                  }
                  else {
                    local_18 = 7;
                  }
                }
                else {
                  local_18 = 8;
                }
              }
              else {
                local_18 = 6;
              }
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
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

