// FUN_000d492c @ 000d492c

ulong FUN_000d492c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_d8;
  uint local_84;
  ulong local_70;
  byte local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  long local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  local_51 = 0;
  local_61 = 0;
  local_38 = param_4;
  FUN_000d8808();
  uVar4 = local_30;
  local_84 = 0;
  if ((uVar1 & 1) != 0) {
    uVar3 = local_20;
    FUN_000db77c();
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_84 = 0;
    local_50 = uVar3;
    if (uVar4 == uVar3) {
      local_84 = 0;
      if (local_38 == 0) {
        uVar4 = local_20;
        _objc_getAssociatedObject(local_20,&DAT_028c8373);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_84 = (uint)uVar4;
      }
    }
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_84 & 1) == 0) {
    uVar4 = local_20;
    (*DAT_028c82e8)(local_20,local_28,local_30,local_38);
    local_18 = uVar4;
  }
  else {
    uVar4 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028c8374);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_70 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((uVar4 & 1) == 0) {
      local_d8 = 0;
    }
    else {
      local_d8 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    }
    local_18 = local_d8;
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

