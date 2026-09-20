// FUN_00827904 @ 00827904

void FUN_00827904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == (undefined *)0x0)) {
    local_24 = 1;
  }
  else {
    puVar1 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028cd1d3);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMapTable_026ce9c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMapTable_026ce9c0,
                 PTR_s_mapTableWithKeyOptions_valueOpti_026a8c58,5,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_30;
      local_30 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_setAssociatedObject(local_20,&DAT_028cd1d3,local_30,1);
    }
    FUN_00827dfc(local_18,local_30);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

