// FUN_006717b4 @ 006717b4

void FUN_006717b4(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_290;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  int local_48;
  byte local_31;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_31 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar2 = local_30, pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = pcVar2;
    FUN_00672b5c();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar3;
    FUN_00672f4c();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar3;
    FUN_006693d4();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    (*(code *)PTR__objc_release_02578630)();
    FUN_00673008();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar3;
    FUN_006730c4();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar3;
    FUN_00668b18();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    do {
      pcVar3 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hasPrefix__0269d320,local_58);
      pcVar2 = local_88;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasPrefix__0269d320,local_60);
        pcVar2 = local_88;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf__);
          if ((((ulong)pcVar2 & 1) == 0) &&
             (pcVar3 = local_88,
             (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasPrefix__0269d320,&cf__),
             pcVar2 = local_88, ((ulong)pcVar3 & 1) != 0)) {
            pcVar3 = &cf__;
            (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_88;
            local_88 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          else {
            pcVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf__);
            if ((((ulong)pcVar2 & 1) == 0) &&
               (pcVar3 = local_88,
               (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasPrefix__0269d320,&cf__),
               pcVar2 = local_88, ((ulong)pcVar3 & 1) != 0)) {
              pcVar3 = &cf__;
              (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_length_0269cca0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_88;
              local_88 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              pcVar2 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasPrefix__0269d320,&cf_space_s_)
              ;
              if (((ulong)pcVar2 & 1) != 0) {
                pcVar3 = local_88;
                (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_substringFromIndex__0269d120,1)
                ;
                _objc_retainAutoreleasedReturnValue();
                pcVar2 = local_88;
                local_88 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar2);
              }
            }
            else if (((local_31 & 1) == 0) ||
                    (pcVar3 = local_88,
                    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasPrefix__0269d320,&cf__),
                    pcVar2 = local_88, ((ulong)pcVar3 & 1) == 0)) {
              if (((local_31 & 1) == 0) ||
                 (pcVar3 = local_88,
                 (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasPrefix__0269d320,local_70),
                 pcVar2 = local_88, ((ulong)pcVar3 & 1) == 0)) {
                if ((((local_31 & 1) == 0) ||
                    (pcVar2 = local_70,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_70,PTR_s_isEqualToString__0269ccc8,&cf__),
                    ((ulong)pcVar2 & 1) != 0)) ||
                   (pcVar3 = local_88,
                   (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasPrefix__0269d320,&cf__),
                   pcVar2 = local_88, ((ulong)pcVar3 & 1) == 0)) {
                  pcVar3 = local_88;
                  FUN_00672de4();
                  pcVar2 = local_88;
                  if (pcVar3 == (cfstringStruct *)0x0) {
                    pcVar3 = local_88;
                    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasPrefix__0269d320,&cf__);
                    pcVar2 = local_88;
                    if (((ulong)pcVar3 & 1) == 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_88,PTR_s_hasPrefix__0269d320,&cf__);
                      if ((((ulong)pcVar2 & 1) == 0) &&
                         (pcVar2 = local_88,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_88,PTR_s_hasPrefix__0269d320,&cf__),
                         ((ulong)pcVar2 & 1) == 0)) {
                        if (((local_31 & 1) == 0) ||
                           (pcVar3 = local_88,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_88,PTR_s_hasPrefix__0269d320,local_78),
                           pcVar2 = local_88, ((ulong)pcVar3 & 1) == 0)) {
                          pcVar3 = local_88;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_88,PTR_s_hasPrefix__0269d320,local_68);
                          pcVar2 = local_88;
                          if (((ulong)pcVar3 & 1) == 0) {
                            pcVar3 = local_88;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_88,PTR_s_hasPrefix__0269d320,&cf___uNb);
                            pcVar2 = local_88;
                            if (((ulong)pcVar3 & 1) == 0) {
                              pcVar3 = local_88;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_88,PTR_s_hasPrefix__0269d320,local_80);
                              pcVar2 = local_88;
                              if (((ulong)pcVar3 & 1) == 0) {
                                pcVar3 = local_88;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_88,PTR_s_hasPrefix__0269d320,&cf_eeN);
                                pcVar2 = local_88;
                                if (((ulong)pcVar3 & 1) == 0) {
                                  pcVar3 = local_88;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (local_88,PTR_s_hasPrefix__0269d320,&cf_eeN);
                                  pcVar2 = local_88;
                                  if (((ulong)pcVar3 & 1) == 0) {
                                    pcVar3 = local_88;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (local_88,PTR_s_hasPrefix__0269d320,&cf_eeN_);
                                    pcVar2 = local_88;
                                    if (((ulong)pcVar3 & 1) != 0) {
                                      pcVar3 = &cf_eeN_;
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (&cf_eeN_,PTR_s_length_0269cca0);
                                      (*(code *)PTR__objc_msgSend_02578628)
                                                (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                                      _objc_retainAutoreleasedReturnValue();
                                      pcVar3 = local_88;
                                      local_88 = pcVar2;
                                      (*(code *)PTR__objc_release_02578630)(pcVar3);
                                    }
                                  }
                                  else {
                                    pcVar3 = &cf_eeN;
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (&cf_eeN,PTR_s_length_0269cca0);
                                    (*(code *)PTR__objc_msgSend_02578628)
                                              (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                                    _objc_retainAutoreleasedReturnValue();
                                    pcVar3 = local_88;
                                    local_88 = pcVar2;
                                    (*(code *)PTR__objc_release_02578630)(pcVar3);
                                  }
                                }
                                else {
                                  pcVar3 = &cf_eeN;
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (&cf_eeN,PTR_s_length_0269cca0);
                                  (*(code *)PTR__objc_msgSend_02578628)
                                            (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                                  _objc_retainAutoreleasedReturnValue();
                                  pcVar3 = local_88;
                                  local_88 = pcVar2;
                                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                                }
                              }
                              else {
                                pcVar3 = local_80;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (local_80,PTR_s_length_0269cca0);
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                                _objc_retainAutoreleasedReturnValue();
                                pcVar3 = local_88;
                                local_88 = pcVar2;
                                (*(code *)PTR__objc_release_02578630)(pcVar3);
                              }
                            }
                            else {
                              pcVar3 = &cf___uNb;
                              (*(code *)PTR__objc_msgSend_02578628)(&cf___uNb,PTR_s_length_0269cca0)
                              ;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                              _objc_retainAutoreleasedReturnValue();
                              pcVar3 = local_88;
                              local_88 = pcVar2;
                              (*(code *)PTR__objc_release_02578630)(pcVar3);
                            }
                          }
                          else {
                            pcVar3 = local_68;
                            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                            _objc_retainAutoreleasedReturnValue();
                            pcVar3 = local_88;
                            local_88 = pcVar2;
                            (*(code *)PTR__objc_release_02578630)(pcVar3);
                          }
                        }
                        else {
                          pcVar3 = local_78;
                          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                          _objc_retainAutoreleasedReturnValue();
                          pcVar3 = local_88;
                          local_88 = pcVar2;
                          (*(code *)PTR__objc_release_02578630)(pcVar3);
                          pcVar2 = local_88;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_88,PTR_s_hasPrefix__0269d320,&cf_space_s_);
                          if (((ulong)pcVar2 & 1) != 0) {
                            pcVar3 = local_88;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_88,PTR_s_substringFromIndex__0269d120,1);
                            _objc_retainAutoreleasedReturnValue();
                            pcVar2 = local_88;
                            local_88 = pcVar3;
                            (*(code *)PTR__objc_release_02578630)(pcVar2);
                          }
                        }
                      }
                      else {
                        pcVar2 = local_88;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_88,PTR_s_hasPrefix__0269d320,&cf__);
                        if (((ulong)pcVar2 & 1) == 0) {
                          local_290 = &cf__;
                          (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_length_0269cca0);
                        }
                        else {
                          local_290 = &cf__;
                          (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_length_0269cca0);
                        }
                        pcVar3 = local_88;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_88,PTR_s_substringFromIndex__0269d120,local_290);
                        _objc_retainAutoreleasedReturnValue();
                        pcVar2 = local_88;
                        local_88 = pcVar3;
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                        pcVar2 = local_88;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_88,PTR_s_hasPrefix__0269d320,&cf_space_s_);
                        if (((ulong)pcVar2 & 1) != 0) {
                          pcVar3 = local_88;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_88,PTR_s_substringFromIndex__0269d120,1);
                          _objc_retainAutoreleasedReturnValue();
                          pcVar2 = local_88;
                          local_88 = pcVar3;
                          (*(code *)PTR__objc_release_02578630)(pcVar2);
                        }
                      }
                    }
                    else {
                      pcVar3 = &cf__;
                      (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_length_0269cca0);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar3 = local_88;
                      local_88 = pcVar2;
                      (*(code *)PTR__objc_release_02578630)(pcVar3);
                    }
                  }
                  else {
                    pcVar3 = local_88;
                    FUN_00672de4();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar3 = local_88;
                    local_88 = pcVar2;
                    (*(code *)PTR__objc_release_02578630)(pcVar3);
                  }
                }
                else {
                  pcVar3 = &cf__;
                  (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_length_0269cca0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_88;
                  local_88 = pcVar2;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
              }
              else {
                pcVar3 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_88;
                local_88 = pcVar2;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
              }
            }
            else {
              pcVar3 = &cf__;
              (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_length_0269cca0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_88;
              local_88 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
          }
        }
        else {
          pcVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_88;
          local_88 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar2 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hasPrefix__0269d320,&cf_space_s_);
          if (((ulong)pcVar2 & 1) != 0) {
            pcVar3 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_substringFromIndex__0269d120,1);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_88;
            local_88 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
        }
      }
      else {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_88;
        local_88 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if ((local_88 == local_50) ||
         (pcVar2 = local_88,
         (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,local_50),
         ((ulong)pcVar2 & 1) != 0)) {
        local_48 = 2;
      }
      else {
        _objc_storeStrong(&local_50,local_88);
        local_48 = 0;
      }
      _objc_storeStrong(&local_88,0);
      local_28 = local_50;
    } while (local_48 == 0);
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = 1;
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

