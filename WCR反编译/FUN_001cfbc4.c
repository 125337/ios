// FUN_001cfbc4 @ 001cfbc4

byte FUN_001cfbc4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_a0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  undefined4 local_34;
  undefined *local_30;
  byte local_21;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == (undefined *)0x0) {
    local_21 = 0;
    local_34 = 1;
    goto LAB_001cff5c;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
  puVar1 = local_30;
  local_70 = param_1;
  local_68 = param_2;
  local_60 = param_3;
  dStack_58 = param_4;
  local_50 = param_3;
  dStack_48 = param_4;
  _object_getClassName();
  puVar2 = local_30;
  local_88 = puVar1;
  _object_getClass();
  puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  puVar1 = local_30;
  local_89 = puVar2 == puVar3;
  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) != 0) {
    if ((local_50 < 36.0) || (dStack_48 < 36.0)) {
      local_21 = 0;
      local_34 = 1;
      goto LAB_001cff5c;
    }
    puVar1 = local_88;
    FUN_001d1e50();
    if (((ulong)puVar1 & 1) != 0) {
      local_21 = 0;
      local_34 = 1;
      goto LAB_001cff5c;
    }
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = puVar1;
  for (local_a0 = 0; local_98 != (undefined *)0x0 && local_a0 < 5; local_a0 = local_a0 + 1) {
    puVar1 = local_98;
    _object_getClassName();
    if ((local_a0 < 2 || local_a0 - 2 == 0) &&
       (puVar2 = puVar1, FUN_001d1e50(local_a0 - 2), ((ulong)puVar2 & 1) != 0)) {
      local_21 = 0;
      goto LAB_001cff4c;
    }
    uVar4 = (long)local_98 - (long)local_30;
    if (((uVar4 != 0) || (uVar4 = (ulong)local_89, (local_89 & 1) == 0)) &&
       (FUN_001d1fb4(uVar4), ((ulong)puVar1 & 1) != 0)) {
      local_21 = 1;
      goto LAB_001cff4c;
    }
    puVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_98;
    local_98 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  local_21 = 0;
LAB_001cff4c:
  local_34 = 1;
  _objc_storeStrong(&local_98,0);
LAB_001cff5c:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

