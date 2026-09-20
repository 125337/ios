// FUN_003353ac @ 003353ac

ulong FUN_003353ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  long local_50;
  long local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  FUN_00336b14(local_20);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_arrKeys);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_20;
  local_48[0] = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_dicRoomMembers);
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar2;
  if ((local_48[0] == 0) || (lVar2 == 0)) {
    local_18 = 0;
    local_54 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar4;
    FUN_0033702c(local_30,local_28,local_60,puVar4);
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_insertObject_atIndex__0269eac0,&cf___N,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,&cf___N);
    }
    local_70 = (ulong)(puVar3 != (undefined *)0x0);
    puVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_insertObject_atIndex__0269eac0,&cf__t,local_70);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,local_68,&cf__t);
      local_70 = local_70 + 1;
    }
    local_18 = local_70;
    local_54 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

