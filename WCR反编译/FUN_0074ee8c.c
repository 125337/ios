// FUN_0074ee8c @ 0074ee8c

void FUN_0074ee8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long local_48;
  int local_3c;
  uint local_38;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  uVar2 = local_18;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (((uVar2 == 0) || (uVar2 = local_28, FUN_00744988(), (uVar2 & 1) != 0)) ||
     (uVar2 = local_28, FUN_0074b910(), (uVar2 & 1) != 0)) {
    local_38 = 1;
  }
  else {
    lVar3 = local_20;
    FUN_00748ad4(local_20,&cf_m_uiMessageType);
    local_3c = (int)lVar3;
    if ((local_3c == 10000) || (local_3c + -0x3f == 0)) {
      local_38 = 1;
    }
    else {
      lVar3 = local_20;
      FUN_00750140(local_3c + -0x3f);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      bVar1 = lVar3 != 0;
      if (bVar1) {
        FUN_0074aadc();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        _objc_sync_enter();
        FUN_0074aadc();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar6,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        FUN_0074ab50();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_sync_exit(lVar3);
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      local_38 = (uint)!bVar1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

