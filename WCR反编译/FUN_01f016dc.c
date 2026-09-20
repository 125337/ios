// FUN_01f016dc @ 01f016dc

void FUN_01f016dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_a0;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40;
  undefined8 **local_38;
  undefined8 **local_30;
  undefined *local_28;
  undefined8 **local_20;
  undefined *local_18;
  
  local_20 = (undefined8 ***)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pppuVar1 = (undefined8 ***)local_20;
  FUN_01f06ca8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pppuVar1,PTR_s_length_0269cca0);
  if (pppuVar1 == (undefined8 ***)0x0) {
    pppuVar1 = &local_30;
    _objc_storeStrong(pppuVar1,&cf_S_MRH);
  }
  FUN_01f0f818();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pppuVar3;
  (*(code *)PTR__objc_release_02578630)(pppuVar2);
  (*(code *)PTR__objc_release_02578630)(pppuVar1);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithContentsOfFile__026a3348,
             local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  puVar6 = local_28;
  puVar5 = local_40;
  if (((ulong)puVar4 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)puVar6 & 1) == 0) {
      local_a0 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    else {
      local_a0 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_a0;
    pppuVar1 = (undefined8 ***)local_20;
    FUN_01f07a70();
    puVar5 = local_50;
    if (((ulong)pppuVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar5;
    }
    else {
      pppuVar1 = (undefined8 ***)local_20;
      FUN_01f0ea0c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_writeToFile_atomically__0269f928,pppuVar1,1);
      (*(code *)PTR__objc_release_02578630)(pppuVar1);
      puVar5 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar5;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar5;
    local_44 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

