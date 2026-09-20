// FUN_0088a61c @ 0088a61c

void FUN_0088a61c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_70;
  byte local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  byte local_41;
  ulong local_40;
  uint local_24;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((DAT_028cd8c8 & 1) == 0) {
    local_24 = 1;
  }
  else {
    local_41 = 0;
    local_51 = 0;
    local_61 = 0;
    bVar1 = true;
    if (local_18 != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      bVar1 = true;
      local_40 = uVar2;
      if (uVar2 != 0) {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        bVar1 = uVar2 == 0;
        local_60 = uVar2;
      }
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (bVar1) {
      local_24 = 1;
    }
    else {
      uVar3 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028cd8c7);
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_boolValue_026ca540);
      uVar2 = local_18;
      bVar1 = (uVar3 & 1) == 0;
      if (bVar1) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028cd8c7,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        FUN_0088aa74();
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_24 = (uint)!bVar1;
      _objc_storeStrong(&local_70,0);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

