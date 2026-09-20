// FUN_0004751c @ 0004751c

void FUN_0004751c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  uint local_38;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_38 = 1;
  }
  else {
    puVar2 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026df728);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_boolValue_026ca540);
    if (((ulong)puVar2 & 1) == 0) {
      local_38 = 1;
    }
    else {
      puVar2 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026df710);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_28;
      local_48 = puVar2;
      _objc_getAssociatedObject(local_28,DAT_026df718);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = local_48;
        FUN_00046684();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_50;
        local_50 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_0003102c();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_000366f8();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar4 & 1) == 0) {
        local_38 = 1;
      }
      else {
        puVar3 = local_50;
        FUN_00047ab4();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_50;
        local_50 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        local_58 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (puVar2 == (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__p);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_58;
          local_58 = puVar3;
          (*(code *)PTR__objc_release_02578630)();
        }
        FUN_00035298();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        FUN_0003b818(0x40ac200000000000);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        bVar1 = ((ulong)puVar3 & 1) != 0;
        if (bVar1) {
          FUN_00047cc8(local_50);
          FUN_00047fc8(local_50);
          FUN_000481a0(local_50);
          FUN_00048660(local_50);
          FUN_000364f0();
        }
        local_38 = (uint)!bVar1;
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

