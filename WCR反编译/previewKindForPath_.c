// previewKindForPath: @ 0195a85c

/* Function Stack Size: 0x18 bytes */

long_long WCRefineFileManagerPreviewViewController::previewKindForPath_
                    (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ID IVar4;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  long_long local_28;
  undefined8 local_20;
  long *local_18;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_68;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  local_18 = &DAT_028e4338;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258a2c8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_gif);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_svg);
    if (((ulong)pcVar1 & 1) == 0) {
      uVar3 = DAT_028e4310;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4310,PTR_s_containsObject__0269cbb8,local_48);
      if ((uVar3 & 1) == 0) {
        uVar3 = DAT_028e4318;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4318,PTR_s_containsObject__0269cbb8,local_48);
        if ((uVar3 & 1) == 0) {
          uVar3 = DAT_028e4320;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e4320,PTR_s_containsObject__0269cbb8,local_48);
          if ((uVar3 & 1) == 0) {
            pcVar1 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_pdf);
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_isEqualToString__0269ccc8,&cf_html);
              if ((((ulong)pcVar1 & 1) == 0) &&
                 (pcVar1 = local_48,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_48,PTR_s_isEqualToString__0269ccc8,&cf_htm),
                 ((ulong)pcVar1 & 1) == 0)) {
                pcVar1 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_48,PTR_s_isEqualToString__0269ccc8,&cf_xml);
                if ((((ulong)pcVar1 & 1) == 0) &&
                   (pcVar1 = local_48,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_48,PTR_s_isEqualToString__0269ccc8,&cf_plist),
                   ((ulong)pcVar1 & 1) == 0)) {
                  uVar3 = DAT_028e4328;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (DAT_028e4328,PTR_s_containsObject__0269cbb8,local_48);
                  if ((uVar3 & 1) == 0) {
                    uVar3 = DAT_028e4330;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (DAT_028e4330,PTR_s_containsObject__0269cbb8,local_48);
                    if ((uVar3 & 1) == 0) {
                      IVar4 = local_30;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_30,PTR_s_pathLooksLikeText__026b9ca8,local_40);
                      if ((IVar4 & 1) == 0) {
                        local_28 = 0xb;
                      }
                      else {
                        local_28 = 10;
                      }
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
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

