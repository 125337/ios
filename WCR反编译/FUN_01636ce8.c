// FUN_01636ce8 @ 01636ce8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01636ce8(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_e8;
  undefined *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar2 = local_28;
  FUN_016360a8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_c_Nzz);
    local_34 = 1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = pcVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = &cf___;
      pcVar2 = local_30;
      puVar5 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rangeOfString__0269d838,&cf__);
      local_58 = pcVar2;
      local_50 = puVar5;
      if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringToIndex__0269d6c0,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_016360a8();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_40;
        local_40 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_substringFromIndex__0269d120,
                   (undefined1 *)((long)&local_58->field0_0x0 + 1));
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_016360a8();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_48;
        local_48 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasPrefix__0269d320,&cf_gh_);
      if ((((ulong)pcVar2 & 1) == 0) &&
         (pcVar2 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasSuffix__0269d018,&cf__app),
         ((ulong)pcVar2 & 1) == 0)) {
        puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_alphanumericCharacterSet_026a2e60
                  );
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf_wx);
        if (((((ulong)pcVar2 & 1) == 0) ||
            (pcVar2 = local_40,
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
            pcVar2 != (cfstringStruct *)0x12)) ||
           (pcVar2 = local_40, puVar5 = PTR_s_rangeOfCharacterFromSet__0269db68,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40,PTR_s_rangeOfCharacterFromSet__0269db68,local_80), local_90 = pcVar2,
           local_88 = puVar5, pcVar2 != (cfstringStruct *)0x7fffffffffffffff)) {
          pcVar2 = local_40;
          puVar5 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf____);
          local_a0 = pcVar2;
          local_98 = puVar5;
          if ((pcVar2 == (cfstringStruct *)0x7fffffffffffffff) &&
             (pcVar2 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__),
             ((ulong)pcVar2 & 1) != 0)) {
            pcVar2 = &cf_https___;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&cf_https___,PTR_s_stringByAppendingString__0269d398,local_40);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_40;
            local_40 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_60;
            local_60 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          pcVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf_http___);
          if (((((ulong)pcVar2 & 1) == 0) &&
              (pcVar2 = local_60,
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf_https___)
              , ((ulong)pcVar2 & 1) == 0)) ||
             (pcVar2 = local_40, FUN_01638360(), ((ulong)pcVar2 & 1) == 0)) {
            puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_40);
            _objc_retainAutoreleasedReturnValue();
            local_a8 = puVar5;
            if (puVar5 == (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ceHe);
              local_34 = 1;
            }
            else {
              puVar5 = PTR__OBJC_CLASS___UIApplication_026ce010;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
              _objc_retainAutoreleasedReturnValue();
              local_b0 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_respondsToSelector__026ca818,
                         PTR_s_openURL_options_completionHandle_026a6be8);
              if (((ulong)puVar5 & 1) == 0) {
                puVar5 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_openURL__026b1b30,local_a8);
                if (((ulong)puVar5 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                             &cf__g_____ubelSb);
                }
                local_34 = 1;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b0,PTR_s_openURL_options_completionHandle_026a6be8,local_a8,
                           *(undefined8 *)PTR____NSDictionary0___02578288,
                           &PTR___NSConcreteGlobalBlock_02587920);
                local_34 = 0;
              }
              _objc_storeStrong(&local_b0,0);
            }
            _objc_storeStrong(&local_a8,0);
          }
          else {
            local_34 = 1;
          }
        }
        else {
          FUN_01638108(0,local_40,local_48);
          local_34 = 1;
        }
        _objc_storeStrong(&local_80,0);
      }
      else {
        pcVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasSuffix__0269d018,&cf__app);
        local_71 = 0;
        bVar1 = ((ulong)pcVar2 & 1) == 0;
        if (bVar1) {
          local_e8 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_stringByAppendingString__0269d398,&cf__app);
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_e8;
        }
        else {
          local_e8 = local_40;
        }
        local_71 = bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_e8;
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        FUN_01637f78(local_68,local_48);
        local_34 = 1;
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
    }
    else {
      pcVar2 = local_30;
      FUN_01637ecc();
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__z_cSb);
      }
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

