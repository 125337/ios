// FUN_001a4694 @ 001a4694

void FUN_001a4694(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ulong local_38;
  uint local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  FUN_001956c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  local_20 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar2 = local_20;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_001a5eec;
    local_40 = &DAT_0257a9d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_performWithoutAnimation__0269e7e0,&local_58);
    _objc_storeStrong(&local_38,0);
  }
  local_30 = (uint)!bVar1;
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

