// FUN_0058afac @ 0058afac

undefined1 * FUN_0058afac(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *local_78;
  undefined *local_60;
  undefined *local_38;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_18 == (undefined *)0x0;
  if (bVar1) {
    local_60 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  else {
    local_60 = local_18;
  }
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_component_fromDate__026a5328,0x200,local_60);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_78 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_78 = (undefined1 *)((long)&MACH_HEADER.cputype + 3);
  }
  else {
    local_78 = local_78 + -1;
  }
  _objc_storeStrong(&local_18,0);
  return local_78;
}

