// FUN_014e35d8 @ 014e35d8

void FUN_014e35d8(undefined8 param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long local_a8;
  undefined8 local_a0;
  long local_98 [5];
  undefined8 local_70;
  undefined8 local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long *local_40;
  long *local_38;
  long *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_48 = 0;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  uVar1 = local_28;
  FUN_014e48f4(local_28,&cf_m_uiSex);
  local_5c = (int)uVar1;
  if ((local_5c == 1) && (local_30 != (long *)0x0)) {
    *local_30 = *local_30 + 1;
  }
  else if ((local_5c == 2) && (local_38 != (long *)0x0)) {
    *local_38 = *local_38 + 1;
  }
  else if (local_40 != (long *)0x0) {
    *local_40 = *local_40 + 1;
  }
  local_68 = 0;
  local_70 = 0;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_nsCountry);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_68;
  local_68 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_nsProvince);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_70;
  local_70 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_98[0] = 0;
  local_a0 = 2;
  uVar1 = local_68;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_70;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_a8 = local_98[0];
  FUN_014fae44(uVar1,uVar2,&local_a8,&local_a0);
  _objc_storeStrong(local_98,local_a8);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  lVar3 = local_98[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_length_0269cca0);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (lVar3 != 0) {
    lVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,local_98[0]);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,lVar4 + 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_98[0]);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_98[0]);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  FUN_014fb5a8(local_28);
  FUN_014fb478();
  _objc_storeStrong(local_98);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_28,0);
  return;
}

