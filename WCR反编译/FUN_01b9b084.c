// FUN_01b9b084 @ 01b9b084

void FUN_01b9b084(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_01b92980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_png);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_gif);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_jpeg);
        if (((uVar1 & 1) == 0) &&
           (uVar1 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_jpg),
           (uVar1 & 1) == 0)) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_bmp);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_webp);
            if ((uVar1 & 1) == 0) {
              local_18 = (cfstringStruct *)0x0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_webp;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf_bmp;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_jpg;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_gif;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_png;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

