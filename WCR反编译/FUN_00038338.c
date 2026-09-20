// FUN_00038338 @ 00038338

void FUN_00038338(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_28 = 1;
  }
  else {
    FUN_00035dd4();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_transferID);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_transID);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_18,local_38);
    }
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_18,local_40);
    }
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_18,local_48);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

