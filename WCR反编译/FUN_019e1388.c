// FUN_019e1388 @ 019e1388

void FUN_019e1388(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doubleValue_026ca608);
    if (-0.75 < param_1) {
      if (DAT_02339e10 < param_1) {
        if (-0.35 < param_1) {
          if (DAT_02323da8 < param_1) {
            if (0.35 < param_1) {
              if (DAT_02323c98 < param_1) {
                if (0.75 < param_1) {
                  if (DAT_02323c60 < param_1) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_18 = &cf_Black;
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_18 = &cf_Heavy;
                  }
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_18 = &cf_Bold;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_18 = &cf_SemiBold;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_Medium;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_Regular;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_Light;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_ExtraLight;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Thin;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

