// FUN_00f20c7c @ 00f20c7c

void FUN_00f20c7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hour_026a44c8);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_minute_026a44d0);
  puVar1 = puVar1 + (long)puVar2 * 0x3c;
  if ((long)puVar1 < 0x3c) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_HSY;
  }
  else if ((long)puVar1 < 0xb4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_Ym;
  }
  else if ((long)puVar1 < 300) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_Qhf;
  }
  else if ((long)puVar1 < 0x168) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_f;
  }
  else if ((long)puVar1 < 0x1a4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_bSf;
  }
  else if ((long)puVar1 < 0x1fe) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_nhf;
  }
  else if ((long)puVar1 < 600) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_eN;
  }
  else if ((long)puVar1 < 0x2b2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_NHS;
  }
  else if ((long)puVar1 < 0x30c) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_ckHS;
  }
  else if ((long)puVar1 < 900) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_HST;
  }
  else if ((long)puVar1 < 0x3fc) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_NHS;
  }
  else if ((long)puVar1 < 0x456) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_PZf;
  }
  else if ((long)puVar1 < 0x492) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_f;
  }
  else if ((long)puVar1 < 0x528) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_ZfN;
  }
  else if ((long)puVar1 < 0x564) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_YZf;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_mY;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

