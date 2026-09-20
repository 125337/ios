// FUN_0198b764 @ 0198b764

undefined8 FUN_0198b764(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_18 = &DAT_028e4408;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258a838);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_48 = &cf___;
  }
  _objc_storeStrong(&local_30,local_48);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_gif);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_svg);
    if (((ulong)pcVar1 & 1) == 0) {
      uVar2 = DAT_028e43e0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e43e0,PTR_s_containsObject__0269cbb8,local_30);
      if ((uVar2 & 1) == 0) {
        uVar2 = DAT_028e43e8;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028e43e8,PTR_s_containsObject__0269cbb8,local_30);
        if ((uVar2 & 1) == 0) {
          uVar2 = DAT_028e43f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e43f0,PTR_s_containsObject__0269cbb8,local_30);
          if ((uVar2 & 1) == 0) {
            pcVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_pdf);
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_isEqualToString__0269ccc8,&cf_html);
              if ((((ulong)pcVar1 & 1) == 0) &&
                 (pcVar1 = local_30,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_30,PTR_s_isEqualToString__0269ccc8,&cf_htm),
                 ((ulong)pcVar1 & 1) == 0)) {
                pcVar1 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_isEqualToString__0269ccc8,&cf_xml);
                if ((((ulong)pcVar1 & 1) == 0) &&
                   (pcVar1 = local_30,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_30,PTR_s_isEqualToString__0269ccc8,&cf_plist),
                   ((ulong)pcVar1 & 1) == 0)) {
                  uVar2 = DAT_028e43f8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (DAT_028e43f8,PTR_s_containsObject__0269cbb8,local_30);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = DAT_028e4400;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (DAT_028e4400,PTR_s_containsObject__0269cbb8,local_30);
                    if ((uVar2 & 1) == 0) {
                      local_28 = 0xb;
                    }
                    else {
                      local_28 = 10;
                    }
                  }
                  else {
                    local_28 = 8;
                  }
                }
                else {
                  local_28 = 9;
                }
              }
              else {
                local_28 = 7;
              }
            }
            else {
              local_28 = 6;
            }
          }
          else {
            local_28 = 5;
          }
        }
        else {
          local_28 = 4;
        }
      }
      else {
        local_28 = 1;
      }
    }
    else {
      local_28 = 3;
    }
  }
  else {
    local_28 = 2;
  }
  _objc_storeStrong(&local_30,0);
  return local_28;
}

