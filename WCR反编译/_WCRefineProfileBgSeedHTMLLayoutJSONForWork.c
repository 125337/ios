// _WCRefineProfileBgSeedHTMLLayoutJSONForWork @ 01cf1828

void _WCRefineProfileBgSeedHTMLLayoutJSONForWork(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  long local_40;
  long local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  _WCRefineProfileBgSafePathComponent();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    lVar1 = local_20;
    FUN_01cf0474();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (lVar1 == 0) {
      local_2c = 1;
    }
    else {
      lVar1 = local_28;
      _WCRefineProfileBgHTMLWorkDirectory();
      _objc_retainAutoreleasedReturnValue();
      local_40 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
      if (lVar1 == 0) {
        local_2c = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                   PTR_s_dataWithJSONObject_options_error_026a64a8,local_38,3,0);
        _objc_retainAutoreleasedReturnValue();
        local_48 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
        puVar2 = local_48;
        if (puVar3 != (undefined *)0x0) {
          lVar1 = local_28;
          FUN_01cf1aa0();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_writeToFile_atomically__0269f928,lVar1,1);
          (*(code *)PTR__objc_release_02578630)(lVar1);
        }
        local_2c = (uint)(puVar3 == (undefined *)0x0);
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

