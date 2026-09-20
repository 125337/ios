// persistSendableIfNeededForMd5:raw: @ 0107c8d4

/* Function Stack Size: 0x20 bytes */

void WCRefineLocalEmoticonStore::persistSendableIfNeededForMd5_raw_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_78;
  ID local_68;
  byte local_59;
  ID local_58;
  byte local_49;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((IVar1 == 0) || (IVar1 = local_30, FUN_0107c5d4(), (IVar1 & 1) != 0)) {
    local_34 = 1;
  }
  else {
    IVar1 = local_28;
    FUN_0107bd28();
    local_49 = 0;
    local_59 = 0;
    if ((IVar1 & 1) == 0) {
      local_78 = local_30;
      FUN_0107c72c();
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_78;
    }
    else {
      local_78 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_78;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (IVar1 == 0) {
      local_34 = 1;
    }
    else {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_cachedSendableDataForMd5__026ae230,local_40);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (IVar2 == 0) {
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_sendableDataFromData__026a3db8,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_68 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
        if ((IVar1 != 0) && (local_68 != local_30)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_storeSendableCache_forMd5__026ae238,local_68,local_40);
        }
        _objc_storeStrong(&local_68,0);
        local_34 = 0;
      }
      else {
        local_34 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

