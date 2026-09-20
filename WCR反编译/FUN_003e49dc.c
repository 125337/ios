// FUN_003e49dc @ 003e49dc

void FUN_003e49dc(undefined8 param_1)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **local_40;
  undefined4 local_38;
  undefined8 **local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  
  pppuVar2 = &local_20;
  local_20 = (undefined8 ***)0x0;
  _objc_storeStrong(pppuVar2,param_1);
  FUN_003e4738();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_length_0269cca0);
  ppuVar1 = local_28;
  if (pppuVar2 == (undefined8 ***)0x0) {
    FUN_003e4d48();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pppuVar2,PTR_s_lock_026a3390);
    pppuVar2 = DAT_028ca330;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca330,PTR_s_length_0269cca0);
    if (pppuVar2 == (undefined8 ***)0x0) {
      FUN_003e4dbc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = local_28;
      local_28 = pppuVar2;
      (*(code *)PTR__objc_release_02578630)(ppuVar1);
      if ((undefined8 ***)local_28 == (undefined8 ***)0x0) {
        pppuVar2 = (undefined8 ***)local_20;
        FUN_003e5724();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = local_28;
        local_28 = pppuVar2;
        (*(code *)PTR__objc_release_02578630)(ppuVar1);
        if ((undefined8 ***)local_28 == (undefined8 ***)0x0) {
          pppuVar2 = (undefined8 ***)PTR__OBJC_CLASS___NSUUID_026ce668;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
          _objc_retainAutoreleasedReturnValue();
          pppuVar3 = pppuVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = local_28;
          local_28 = pppuVar3;
          (*(code *)PTR__objc_release_02578630)(ppuVar1);
          (*(code *)PTR__objc_release_02578630)(pppuVar2);
        }
      }
      _objc_storeStrong(&DAT_028ca330,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_unlock_026a3398);
      FUN_003e4ed8(local_28);
      ppuVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = ppuVar1;
    }
    else {
      _objc_storeStrong(&local_28,DAT_028ca330);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_unlock_026a3398);
      ppuVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = ppuVar1;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = ppuVar1;
    local_38 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

