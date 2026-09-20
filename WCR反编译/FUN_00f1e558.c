// FUN_00f1e558 @ 00f1e558

void FUN_00f1e558(undefined8 param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  undefined *local_50;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  puVar5 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((((ulong)puVar5 & 1) == 0) ||
     (puVar5 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     puVar5 == (undefined *)0x0)) {
    puVar5 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar5;
    local_34 = 1;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    local_50 = (undefined *)0x0;
    puVar4 = local_30;
    local_40 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
LAB_00f1e658:
    puVar5 = local_40;
    if (local_50 < puVar4) {
      puVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_characterAtIndex__0269fa18,local_50);
      sVar1 = (short)puVar5;
      if (sVar1 != 0x27) {
        if (!bVar2) {
          if (((local_50 + 1 < puVar4) && (sVar1 == 0x45)) &&
             (puVar6 = local_30,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_30,PTR_s_characterAtIndex__0269fa18,local_50 + 1), puVar5 = local_40,
             (int)puVar6 == 0x65)) {
            pcVar7 = &cf___WCR_DATE_FMT_WEEKDAY_ZH_SHORT__;
            FUN_00f20634();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            local_50 = local_50 + 2;
            goto LAB_00f1e658;
          }
          if (sVar1 == 0x45) {
            while( true ) {
              bVar3 = false;
              if (local_50 < puVar4) {
                puVar5 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_characterAtIndex__0269fa18,local_50);
                bVar3 = (int)puVar5 == 0x45;
              }
              puVar5 = local_40;
              if (!bVar3) break;
              local_50 = local_50 + 1;
            }
            pcVar7 = &cf___WCR_DATE_FMT_WEEKDAY_EN__;
            FUN_00f20634();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            goto LAB_00f1e658;
          }
          if (sVar1 == 0x65) {
            while( true ) {
              bVar3 = false;
              if (local_50 < puVar4) {
                puVar5 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_characterAtIndex__0269fa18,local_50);
                bVar3 = (int)puVar5 == 0x65;
              }
              puVar5 = local_40;
              if (!bVar3) break;
              local_50 = local_50 + 1;
            }
            pcVar7 = &cf___WCR_DATE_FMT_WEEKDAY_ZH__;
            FUN_00f20634();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            goto LAB_00f1e658;
          }
          if (sVar1 == 0x61) {
            while( true ) {
              bVar3 = false;
              if (local_50 < puVar4) {
                puVar5 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_characterAtIndex__0269fa18,local_50);
                bVar3 = (int)puVar5 == 0x61;
              }
              puVar5 = local_40;
              if (!bVar3) break;
              local_50 = local_50 + 1;
            }
            pcVar7 = &cf___WCR_DATE_FMT_MERIDIEM_LOWER__;
            FUN_00f20634();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            goto LAB_00f1e658;
          }
          if (sVar1 == 0x41) {
            while( true ) {
              bVar3 = false;
              if (local_50 < puVar4) {
                puVar5 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_characterAtIndex__0269fa18,local_50);
                bVar3 = (int)puVar5 == 0x41;
              }
              puVar5 = local_40;
              if (!bVar3) break;
              local_50 = local_50 + 1;
            }
            pcVar7 = &cf___WCR_DATE_FMT_MERIDIEM_UPPER__;
            FUN_00f20634();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            goto LAB_00f1e658;
          }
          if (sVar1 == 0x62) {
            while( true ) {
              bVar3 = false;
              if (local_50 < puVar4) {
                puVar5 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_characterAtIndex__0269fa18,local_50);
                bVar3 = (int)puVar5 == 0x62;
              }
              puVar5 = local_40;
              if (!bVar3) break;
              local_50 = local_50 + 1;
            }
            pcVar7 = &cf___WCR_DATE_FMT_MERIDIEM_ZH__;
            FUN_00f20634();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            goto LAB_00f1e658;
          }
          if (sVar1 == 99) {
            while( true ) {
              bVar3 = false;
              if (local_50 < puVar4) {
                puVar5 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_characterAtIndex__0269fa18,local_50);
                bVar3 = (int)puVar5 == 99;
              }
              puVar5 = local_40;
              if (!bVar3) break;
              local_50 = local_50 + 1;
            }
            pcVar7 = &cf___WCR_DATE_FMT_DAY_PERIOD__;
            FUN_00f20634();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendString__0269ccb0);
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            goto LAB_00f1e658;
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_appendFormat__0269d148,&cf__C);
        local_50 = local_50 + 1;
        goto LAB_00f1e658;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_appendString__0269ccb0,&cf__);
      if ((local_50 + 1 < puVar4) &&
         (puVar5 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_characterAtIndex__0269fa18,local_50 + 1), (int)puVar5 == 0x27)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_appendString__0269ccb0,&cf__);
        local_50 = local_50 + 2;
      }
      else {
        bVar2 = (bool)(bVar2 ^ 1);
        local_50 = local_50 + 1;
      }
      goto LAB_00f1e658;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar5;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

