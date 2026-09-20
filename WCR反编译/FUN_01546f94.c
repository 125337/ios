// FUN_01546f94 @ 01546f94

void FUN_01546f94(byte param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    bVar1 = (param_1 & 1) == 0;
    local_50 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0,DAT_0232c528,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_50;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,DAT_02323c68,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_28 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
  }
  else {
    local_18 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

