// FUN_006611d8 @ 006611d8

byte FUN_006611d8(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined *local_50;
  undefined *local_40;
  undefined4 local_38;
  double local_28;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  if (((ulong)puVar1 & 1) == 0) {
    local_11 = 1;
    local_38 = 1;
  }
  else {
    puVar1 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028cbc5e);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_40;
      local_40 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_setAssociatedObject(local_20,&DAT_028cbc5e,local_40,1);
    }
    _CFAbsoluteTimeGetCurrent();
    local_50 = (undefined *)0x0;
    dVar3 = param_1;
    while (puVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0),
          puVar1 = local_40, local_50 < puVar2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (param_1 <= dVar3) {
        dVar3 = ABS(dVar3 - local_28);
        if (dVar3 < DAT_02323e38) {
          local_11 = 0;
          goto LAB_00661518;
        }
        local_50 = local_50 + 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectAtIndex__0269d530,local_50)
        ;
      }
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_11 = 1;
LAB_00661518:
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

