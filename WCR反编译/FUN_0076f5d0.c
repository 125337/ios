// FUN_0076f5d0 @ 0076f5d0

byte FUN_0076f5d0(undefined8 param_1,double *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  byte local_a4;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = DAT_028cc8b8;
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar3 & 1) != 0) && (0.0 < DAT_028cc8f8)) {
      puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
      dVar4 = DAT_028cc8f8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar4 = dVar4 - DAT_028cc8f8;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (param_2 != (double *)0x0) {
        *param_2 = dVar4;
      }
      local_a4 = 0;
      if ((0.0 <= dVar4) && (local_a4 = 0, dVar4 <= 180.0)) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToNumber__026a7b80,DAT_028cc8b8)
        ;
        local_a4 = (byte)uVar3;
      }
      local_11 = local_a4 & 1;
      goto LAB_0076f864;
    }
  }
  if (param_2 != (double *)0x0) {
    *param_2 = 1.7976931348623157e+308;
  }
  local_11 = 0;
LAB_0076f864:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

