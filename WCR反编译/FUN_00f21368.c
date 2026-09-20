// FUN_00f21368 @ 00f21368

undefined * FUN_00f21368(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined8 local_20;
  undefined *local_18;
  
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
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_weekday_026abdb0);
  if (((long)puVar1 < 1) || (local_18 = puVar1, 7 < (long)puVar1)) {
    local_18 = (undefined *)((long)&MACH_HEADER.magic + 1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

