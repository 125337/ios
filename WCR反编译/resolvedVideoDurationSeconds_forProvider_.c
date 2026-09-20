// resolvedVideoDurationSeconds:forProvider: @ 009bab1c

/* Function Stack Size: 0x20 bytes */

long_long WCRefineAIStore::resolvedVideoDurationSeconds_forProvider_
                    (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  int iVar4;
  cfstringStruct *local_88;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ID local_40;
  cfstringStruct *local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_clampedVideoDurationSeconds__026aad70,local_30);
  pcVar2 = local_38;
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_68;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoModel_026aad78);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_88 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_88;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_luma);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_grok);
    if ((((ulong)pcVar2 & 1) == 0) &&
       (pcVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_xai),
       ((ulong)pcVar2 & 1) == 0)) {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_yunwu);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_doubao);
        if (((ulong)pcVar2 & 1) == 0) {
          local_18 = local_40;
        }
        else {
          pcVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_2_5);
          if ((((ulong)pcVar2 & 1) == 0) &&
             (pcVar2 = local_50,
             (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_2_5),
             ((ulong)pcVar2 & 1) == 0)) {
            pcVar2 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_2_0);
            if ((((ulong)pcVar2 & 1) == 0) &&
               (pcVar2 = local_50,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_50,PTR_s_containsString__0269d0b0,&cf_2_0), ((ulong)pcVar2 & 1) == 0
               )) {
              if ((long)local_40 < 0xd) {
                local_18 = local_40;
              }
              else {
                local_18 = 0xc;
              }
            }
            else if ((long)local_40 < 4) {
              local_18 = 4;
            }
            else if ((long)local_40 < 0x10) {
              local_18 = local_40;
            }
            else {
              local_18 = 0xf;
            }
          }
          else if ((long)local_40 < 4) {
            local_18 = 4;
          }
          else {
            local_18 = local_40;
          }
        }
      }
      else if ((long)local_40 < 4) {
        local_18 = 4;
      }
      else if ((long)local_40 < 0x10) {
        local_18 = local_40;
      }
      else {
        local_18 = 0xf;
      }
    }
    else if ((long)local_40 < 1) {
      local_18 = 1;
    }
    else if ((long)local_40 < 0x10) {
      local_18 = local_40;
    }
    else {
      local_18 = 0xf;
    }
  }
  else {
    iVar4 = 9;
    if ((long)local_40 < 7) {
      iVar4 = 5;
    }
    local_18 = (ID)iVar4;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return local_18;
}

