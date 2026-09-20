// FUN_0027b474 @ 0027b474

void FUN_0027b474(long param_1,long param_2)

{
  long lVar1;
  long local_a0;
  long local_98;
  cfstringStruct *local_18;
  
  local_98 = param_1;
  if (param_1 < param_2) {
    local_98 = param_2;
    param_2 = param_1;
  }
  if ((param_2 < 1) && (local_98 < 1)) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    lVar1 = (long)(((double)local_98 * 9.0) / 16.0);
    local_a0 = param_2;
    if (param_2 < lVar1) {
      local_a0 = lVar1;
    }
    if (local_a0 < 0x870) {
      if (local_a0 < 0x5a0) {
        if (local_a0 < 0x438) {
          if (local_a0 < 0x2d0) {
            if (local_a0 < 0x21c) {
              if (local_a0 < 0x1e0) {
                if (local_a0 < 0x168) {
                  if ((local_98 < 1) || (param_2 < 1)) {
                    local_18 = (cfstringStruct *)0x0;
                  }
                  else {
                    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf__ldx_ld);
                    _objc_retainAutoreleasedReturnValue();
                  }
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_18 = &cf_360P;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_480P;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_540P;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_720P;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_1080P;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_2K;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_4K;
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

