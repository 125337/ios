// FUN_0064fc7c @ 0064fc7c

void FUN_0064fc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  ulong local_50;
  int local_48;
  ulong local_38;
  long local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_48 = 1;
  }
  else {
    FUN_00656968();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_sync_enter();
    FUN_00656968();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    FUN_00656d70(local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_50;
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
    if ((uVar3 & 1) == 0) {
      local_48 = 1;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_38;
      uVar3 = local_50;
      local_88 = PTR___NSConcreteGlobalBlock_02578658;
      local_80 = 0xd0800000;
      local_7c = 0;
      local_78 = FUN_0065ffc4;
      local_70 = &DAT_0257e7a8;
      local_58 = puVar6;
      (*(code *)PTR__objc_retain_02578638)();
      puVar6 = local_58;
      local_68 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_88);
      puVar6 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      if (puVar6 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_removeObjectsAtIndexes__026a2c98,local_58);
      }
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      if (uVar3 == 0) {
        FUN_00656968();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_28;
        FUN_00656d70(local_28,local_30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_removeObjectForKey__0269d700);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_58,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_50,0);
    if (local_48 == 0) {
      local_48 = 0;
    }
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_48 == 0) {
      local_48 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

