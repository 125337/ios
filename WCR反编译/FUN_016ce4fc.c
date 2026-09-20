// FUN_016ce4fc @ 016ce4fc

void FUN_016ce4fc(undefined8 param_1)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  undefined8 **local_38 [3];
  undefined8 **local_20;
  undefined8 **local_18;
  
  local_18 = (undefined8 ***)0x0;
  _objc_storeStrong(&local_18,param_1);
  pppuVar2 = (undefined8 ***)local_18;
  FUN_016ce74c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_length_0269cca0);
  if (pppuVar2 == (undefined8 ***)0x0) {
    pppuVar2 = &local_20;
    _objc_storeStrong(pppuVar2,&cf_S_MRH);
  }
  FUN_016cebd0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = pppuVar3;
  (*(code *)PTR__objc_release_02578630)(pppuVar2);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  ppuVar1 = local_38[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(ppuVar1);
  return;
}

