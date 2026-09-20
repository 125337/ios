// FUN_00814ea4 @ 00814ea4

void FUN_00814ea4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028cd1f8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMapTable_026ce9c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMapTable_026ce9c0,PTR_s_mapTableWithKeyOptions_valueOpti_026a8c58
               ,5,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_setAssociatedObject(local_20,&DAT_028cd1f8,local_28,1);
  }
  FUN_008387e0(local_18,local_20,local_28);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

