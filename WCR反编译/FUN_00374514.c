// FUN_00374514 @ 00374514

void FUN_00374514(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  cfstringStruct *local_b8;
  cfstringStruct *local_78;
  long local_38;
  double local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  long local_18;
  
  dVar1 = DAT_02323c88;
  local_18 = 0;
  dVar5 = DAT_02323c88;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    _CACurrentMediaTime();
    lVar2 = local_18;
    local_30 = dVar5;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if ((local_38 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608),
       dVar5 <= local_30)) {
      dVar5 = local_30 + 1.5;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_18;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      lVar2 = local_18;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar2 = local_18;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      if (local_20 == (cfstringStruct *)0x0) {
        local_b8 = &cf_coalesce;
      }
      else {
        local_b8 = local_20;
      }
      FUN_003bfcb8(dVar5 + dVar1,local_b8);
      local_24 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
      if (local_20 == (cfstringStruct *)0x0) {
        local_78 = &cf_coalesce_extend;
      }
      else {
        local_78 = local_20;
      }
      FUN_003bfcb8(dVar5 + dVar1,local_78);
      local_24 = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

