// captureNSLogMessage: @ 0091c368

/* Function Stack Size: 0x18 bytes */

void WCNavigationMonitor::captureNSLogMessage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  cfstringStruct *local_108;
  undefined *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_7c;
  undefined *local_78;
  SEL local_70;
  ID local_68;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_78 = (undefined *)0x0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  puVar2 = local_78;
  if (((*(byte *)(local_68 + 9) & 1) == 0) || ((*(byte *)(local_68 + 0xb) & 1) != 0)) {
    local_7c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar1 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
       puVar2 = local_78, puVar1 == (undefined *)0x0)) {
      local_7c = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        local_7c = 1;
      }
      else {
        IVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isLikelyNSLogLine__026aa460,local_88);
        puVar2 = local_88;
        if ((IVar3 & 1) == 0) {
          local_7c = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_90 = puVar2;
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSProcessInfo_026ce4d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSProcessInfo_026ce4d0,PTR_s_processInfo_026a1a38);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_108 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_108 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = local_108;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
          if (pcVar4 != (cfstringStruct *)0x0) {
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            pcVar4 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_88;
            local_a0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_rangeOfString__0269d838,puVar2);
            if (puVar1 != (undefined *)0x7fffffffffffffff) {
              puVar2 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
              local_60 = (long)puVar2 - (long)puVar1;
              puVar2 = local_88;
              puVar6 = PTR_s_rangeOfString_options_range__0269d130;
              local_58 = puVar1;
              local_50 = puVar1;
              local_48 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_rangeOfString_options_range__0269d130,&::cf__,0,puVar1,
                         local_60,in_x6,in_x7,pcVar4);
              if ((puVar2 != (undefined *)0x7fffffffffffffff) &&
                 (puVar1 = local_88, local_30 = puVar2, local_28 = puVar6,
                 (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
                 puVar2 + (long)puVar6 < puVar1)) {
                puVar1 = local_88;
                local_40 = puVar2;
                local_38 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_88,PTR_s_substringFromIndex__0269d120,puVar2 + (long)puVar6);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = local_90;
                local_90 = puVar1;
                (*(code *)PTR__objc_release_02578630)(puVar2);
              }
            }
            _objc_storeStrong(&local_a0,0);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_appendEntry_toLogStore__026aa3c8,local_90,
                     *(undefined8 *)(local_68 + 0x20));
          _objc_storeStrong(&local_98);
          _objc_storeStrong(&local_90,0);
          local_7c = 0;
        }
      }
      _objc_storeStrong(&local_88,0);
    }
  }
  _objc_storeStrong(&local_78,0);
  return;
}

