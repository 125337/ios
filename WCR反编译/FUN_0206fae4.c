// FUN_0206fae4 @ 0206fae4

void FUN_0206fae4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long local_40;
  undefined *local_38;
  long local_30;
  int local_24;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
  if (local_20 == 0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    local_40 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_unarchivedObjectOfClass_fromData_026b88c8,puVar1,local_20,&local_40);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_30,local_40);
    local_38 = puVar2;
    if ((puVar2 == (undefined *)0x0) || (local_30 != 0)) {
      local_24 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_24 = 1;
      local_18 = puVar2;
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    if (local_24 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,
                 PTR_s_unarchiveObjectWithData__026a4f98,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = puVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

