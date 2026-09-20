// FUN_01123fac @ 01123fac

void FUN_01123fac(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  uint local_2c;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar4 = local_20;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar2 = local_20;
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_011240d8;
    local_40 = &DAT_02579a30;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_58);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_20,0);
  return;
}

