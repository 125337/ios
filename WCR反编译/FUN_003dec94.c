// FUN_003dec94 @ 003dec94

void FUN_003dec94(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  long local_88;
  byte local_79;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined4 local_5c;
  char *local_58;
  double local_50;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = "MMSessionInfo";
  local_50 = param_1;
  local_41 = param_5;
  local_40 = param_4;
  _objc_getClass();
  local_58 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_5c = 1;
  }
  else {
    _objc_alloc_init();
    local_68 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_28 = (char *)0x0;
      local_5c = 1;
    }
    else {
      lVar2 = local_30;
      FUN_00355e04();
      _objc_retainAutoreleasedReturnValue();
      local_70 = lVar2;
      FUN_00367110(local_68,&cf_m_nsUserName,lVar2);
      local_78 = 0;
      local_79 = 0;
      FUN_003db9fc(local_40,local_41 & 1,&local_78,&local_79);
      pcVar1 = local_68;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                 local_78);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(pcVar1,&cf_m_uUnReadCount);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar1 = local_68;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_79 & 1);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(pcVar1,&cf_m_bShowUnReadAsRedDot);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar1 = local_68;
      if (0.0 < local_50) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   (int)local_50);
        _objc_retainAutoreleasedReturnValue();
        FUN_00367110(pcVar1,&cf_m_uLastTime);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar1 = local_68;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   (int)local_50);
        _objc_retainAutoreleasedReturnValue();
        FUN_00367110(pcVar1,&cf_sortTime);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      lVar2 = local_70;
      FUN_003defdc(local_70,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_88 = lVar2;
      if (lVar2 != 0) {
        FUN_00367110(local_68,&cf_m_contact,lVar2);
      }
      pcVar1 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_5c = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

