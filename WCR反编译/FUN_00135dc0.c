// FUN_00135dc0 @ 00135dc0

undefined8 FUN_00135dc0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 local_70;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar1 = DAT_028c8688;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028c8688,PTR_s_objectForKeyedSubscript__0269d098,local_18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_70 = local_20;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
    local_70 = param_1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return local_70;
}

