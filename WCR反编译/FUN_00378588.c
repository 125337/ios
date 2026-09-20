// FUN_00378588 @ 00378588

void FUN_00378588(undefined8 param_1)

{
  double dVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  double dVar6;
  double dVar7;
  uint local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  double local_48;
  long local_40;
  undefined4 local_38;
  byte local_31;
  long local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  dVar1 = DAT_02323c88;
  local_18 = 0;
  dVar6 = DAT_02323c88;
  _objc_storeStrong(&local_18,param_1);
  local_21 = 0;
  local_31 = 0;
  local_7c = 1;
  if (local_18 != 0) {
    lVar2 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    local_21 = 1;
    local_20 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_7c = (uint)lVar2;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if ((local_21 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  if ((local_7c & 1) == 0) {
    lVar2 = local_18;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (local_40 == 0) {
      local_38 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
      dVar7 = dVar6;
      _CACurrentMediaTime();
      local_48 = dVar6 - dVar7;
      if (local_48 < dVar1) {
        local_48 = dVar1;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_18;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_initWeak(auStack_50,local_18);
      dVar5 = _dispatch_time(0,(long)(local_48 * 1000000000.0));
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_003d1b48;
      local_60 = &DAT_0257be28;
      _objc_copyWeak(auStack_58,auStack_50);
      _dispatch_after(dVar5,puVar4,&local_78);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_50);
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

