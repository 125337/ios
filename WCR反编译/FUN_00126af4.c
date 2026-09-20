// FUN_00126af4 @ 00126af4

byte FUN_00126af4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  undefined8 local_48;
  long local_40;
  byte local_31;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  lVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_31 = 1;
    local_58 = 1;
  }
  else {
    local_28 = &DAT_028c8608;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257a3e8);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    uVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf__lu___);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar6;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar2 = DAT_028c8570;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    uVar7 = DAT_028c8570;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028c8570,PTR_s_objectForKeyedSubscript__0269d098,local_40);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar7);
    bVar1 = (uVar8 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028c8570,PTR_s_setObject_forKeyedSubscript__0269d248,local_68,local_40);
    }
    else {
      local_31 = 0;
    }
    local_58 = (uint)!bVar1;
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_58 == 0) {
      local_31 = 1;
      local_58 = 1;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

