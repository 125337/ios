// FUN_000597d8 @ 000597d8

undefined4 FUN_000597d8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_00057b64(local_20,&cf_dataType);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_intValue_0269cc88);
  puVar1 = PTR_s_getDataType_0269db00;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getDataType_0269db00);
    if ((uVar2 & 1) == 0) {
      local_14 = 0xffffffff;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1);
      local_14 = (undefined4)uVar2;
    }
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_intValue_0269cc88);
    local_14 = (undefined4)uVar2;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

