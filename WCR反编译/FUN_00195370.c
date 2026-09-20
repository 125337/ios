// FUN_00195370 @ 00195370

void FUN_00195370(undefined8 param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  uint local_38;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar3 = param_2 + 0x20;
  local_20 = param_2;
  local_18 = param_2;
  _objc_loadWeakRetained();
  local_28 = uVar3;
  _objc_setAssociatedObject(uVar3,&DAT_028c8970,0,1);
  uVar2 = (uint)uVar3;
  if ((local_28 == 0) ||
     (FUN_0018b0b8(), uVar3 = local_28, puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038,
     (uVar2 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar4,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,&DAT_028c8971,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar3 = local_28;
    FUN_0018ab34(local_28,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    FUN_0018f054(local_28);
    uVar5 = local_28;
    FUN_001956c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    local_40 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar3 = local_40;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    bVar1 = (uVar5 & 1) != 0;
    if (bVar1) {
      local_68 = PTR___NSConcreteGlobalBlock_02578658;
      local_60 = 0xd0800000;
      local_5c = 0;
      local_58 = FUN_00195b88;
      local_50 = &DAT_0257a9d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_performWithoutAnimation__0269e7e0,&local_68);
      _objc_storeStrong(&local_48,0);
    }
    local_38 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

