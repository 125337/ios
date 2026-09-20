// FUN_00678dd0 @ 00678dd0

byte FUN_00678dd0(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  double dVar6;
  ulong local_48;
  double local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_11 = false;
    local_38 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    local_40 = param_1;
    FUN_00677084();
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    uVar4 = DAT_028cbca8;
    lVar2 = local_20;
    FUN_00679c2c(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    uVar4 = local_48;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    dVar1 = local_40;
    if ((uVar4 & 1) == 0) {
      local_11 = false;
    }
    else {
      dVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doubleValue_026ca608);
      local_11 = dVar1 - dVar6 < 8.0;
    }
    local_38 = 1;
    _objc_storeStrong(&local_48,0);
    _objc_sync_exit(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

