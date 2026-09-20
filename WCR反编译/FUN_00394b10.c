// FUN_00394b10 @ 00394b10

byte FUN_00394b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_70;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_3);
  if ((local_20 == (undefined *)0x0) || (local_28 == (undefined *)0x0)) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    puVar1 = PTR_WCRefineGroupDataProvider_026ce540;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_70 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_70;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_40 == local_28) || (local_20 == local_28)) {
      local_11 = 1;
    }
    else {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = local_28;
        FUN_00366324();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_30;
        local_30 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
        local_11 = 0;
      }
      else {
        puVar1 = local_40;
        FUN_00366324();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_11 = (byte)puVar2 & 1;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

