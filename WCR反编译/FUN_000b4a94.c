// FUN_000b4a94 @ 000b4a94

byte FUN_000b4a94(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = &cf_WCTimeLineViewController;
  _NSClassFromString();
  local_28 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    _objc_alloc_init();
    local_40 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_11 = 0;
      local_38 = 1;
    }
    else {
      puVar3 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      local_48 = puVar3;
      if (puVar3 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = puVar3 != (undefined *)0x0;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      if (bVar1) {
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_38 = 1;
      local_11 = bVar1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

