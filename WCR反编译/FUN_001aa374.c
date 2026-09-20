// FUN_001aa374 @ 001aa374

void FUN_001aa374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  ulong local_48;
  undefined *local_40;
  long local_38;
  ulong local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_30;
  FUN_001a81d4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_wxid_);
  if ((((uVar2 & 1) == 0) || (local_38 == 0)) ||
     (puVar4 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0),
     &DAT_000186a0 <= puVar4)) {
    local_58 = 1;
  }
  else {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,local_48)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,
                 PTR_s_dictionaryWithObject_forKey__0269fe88,local_38,&cf_roomContact);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_40;
      bVar1 = false;
      local_68 = puVar5;
      if (local_40 != (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        bVar1 = puVar4 != puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,&cf_memberData);
      }
      puVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,local_48);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_68,0);
      local_58 = 0;
    }
    else {
      local_58 = 1;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

