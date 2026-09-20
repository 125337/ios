// FUN_010c71a8 @ 010c71a8

void FUN_010c71a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_3c;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar5 = local_28;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = param_1;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar2 = local_28;
  bVar1 = (uVar5 & 1) != 0;
  if (bVar1) {
    local_70 = PTR___NSConcreteGlobalBlock_02578658;
    local_68 = 0xd0800000;
    local_64 = 0;
    local_60 = FUN_010c733c;
    local_58 = &DAT_025853c8;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_20;
    local_50 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_70);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

