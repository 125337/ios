// FUN_020213cc @ 020213cc

ulong FUN_020213cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long local_70;
  long local_58;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_58 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_58 = local_18;
  }
  puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_58);
  _objc_retainAutoreleasedReturnValue();
  if (local_20 == 0) {
    local_70 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_70 = local_20;
  }
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_70);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToSet__026a6630,puVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return (ulong)puVar1 & 0xffffffff;
}

