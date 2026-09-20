// FUN_000366f8 @ 000366f8

byte FUN_000366f8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  byte local_c8;
  undefined *local_a0;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  ulong local_40;
  undefined4 local_38;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoAcceptTransferProfileControl_0269d698);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 1;
    local_38 = 1;
  }
  else {
    uVar3 = local_20;
    FUN_000370d0();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      local_11 = 0;
      local_38 = 1;
    }
    else {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      bVar1 = (uVar3 & 1) == 0;
      local_a0 = local_28;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_autoAcceptTransferAllowedPersonL_0269d6a8);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_a0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_autoAcceptTransferAllowedGroupLi_0269d6a0);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_a0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_a0;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      puVar2 = local_48;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_c8 = 0;
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_40);
        local_c8 = (byte)puVar2;
      }
      local_11 = local_c8 & 1;
      local_38 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

