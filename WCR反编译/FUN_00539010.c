// FUN_00539010 @ 00539010

void FUN_00539010(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  double dVar7;
  double local_108;
  long local_90;
  long local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined *local_50;
  undefined *local_48;
  uint local_3c;
  cfstringStruct *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_3c = param_1;
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &cf___;
  }
  else {
    uVar6 = NEON_ucvtf((ulong)param_1);
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    dVar7 = 0.0;
    local_70 = 0.0;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_timeIntervalSinceDate__0269cb78,local_48);
    local_108 = dVar7;
    if (dVar7 <= local_70) {
      local_108 = local_70;
    }
    local_80 = local_108;
    local_68 = local_108;
    local_28 = &DAT_028cb258;
    local_30 = 0;
    local_78 = dVar7;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257dcd8);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    lVar3 = DAT_028cb250;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb250,PTR_s_startOfDayForDate__0269cfb0,local_50);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = DAT_028cb250;
    local_88 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb250,PTR_s_startOfDayForDate__0269cfb0,local_48);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = DAT_028cb250;
    local_90 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cb250,PTR_s_components_fromDate_toDate_optio_0269fa20,0x10,lVar4,local_88,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (lVar4 < 1) {
      if (60.0 <= local_68) {
        if (3600.0 <= local_68) {
          pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
          _objc_retainAutoreleasedReturnValue();
          local_38 = pcVar5;
        }
        else {
          pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
          _objc_retainAutoreleasedReturnValue();
          local_38 = pcVar5;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = &cf_RR;
      }
    }
    else if (lVar4 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = &cf__f_Y;
    }
    else {
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar5;
    }
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_autoreleaseReturnValue(local_38);
  return;
}

