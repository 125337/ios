// FUN_016c0118 @ 016c0118

void FUN_016c0118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_e8;
  undefined *local_80;
  undefined *local_70;
  undefined *local_68;
  long local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  puVar2 = local_30;
  local_48 = param_4;
  FUN_016bf6b4(local_30,local_38);
  puVar4 = local_30;
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = local_38;
    FUN_016bfb34(local_38,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_30;
    local_60 = lVar3;
    if (lVar3 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar4;
      local_58 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_e8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_e8;
      }
      else {
        local_e8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
        local_70 = local_e8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_e8;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if (local_68 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_68;
        local_68 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addObject__0269d180,local_60);
      puVar4 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginIconCatalog_026ce4e0,
                 PTR_s_applyLongPressOrderToMenuItems__026a9ac0,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_58 = 1;
      local_28 = puVar4;
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar4;
    local_58 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

