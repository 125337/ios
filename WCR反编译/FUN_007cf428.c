// FUN_007cf428 @ 007cf428

byte FUN_007cf428(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = DAT_028cccb8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = DAT_028cccb8, (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccb8,PTR_s_count_0269cfe0)
     , uVar2 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar3 = local_20;
    FUN_007cdd54();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    FUN_007d20a0();
    local_11 = (byte)uVar3 & 1;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

