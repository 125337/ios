// FUN_0074cb90 @ 0074cb90

void FUN_0074cb90(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48 [3];
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  uVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_0074a168();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 != 0) {
    dVar3 = *(double *)(param_1 + 0x28);
    dVar4 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_doubleValue_026ca608);
    if (dVar3 - dVar4 < *(double *)(param_1 + 0x30)) {
      **(undefined1 **)(param_1 + 0x38) = 0;
      goto LAB_0074cd18;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_026ce038,
             PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
             *(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_release_02578630)(puVar2);
LAB_0074cd18:
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (0x100 < uVar1) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_78 = PTR___NSConcreteGlobalBlock_02578658;
    local_70 = 0xd0800000;
    local_6c = 0;
    local_68 = FUN_0074ceec;
    local_60 = &DAT_0257f8e8;
    local_50 = *(undefined8 *)(param_1 + 0x28);
    local_48[0] = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_78);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeObjectsForKeys__026a35f0,local_48[0])
    ;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

