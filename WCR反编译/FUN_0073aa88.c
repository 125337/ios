// FUN_0073aa88 @ 0073aa88

void FUN_0073aa88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulong *puVar2;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0073a058();
  uVar4 = local_30;
  if ((uVar1 & 1) == 0) {
    uVar6 = local_20;
    (*DAT_028cc558)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar6;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) != 0) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
      local_48 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_removeObjectForKey__0269d700,
                 &cf_com_apple_developer_icloud_container_environment);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_removeObjectForKey__0269d700,&cf_com_apple_developer_icloud_services
                );
      uVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
      uVar4 = local_30;
      local_30 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _objc_storeStrong(&local_48,0);
    }
    uVar6 = local_20;
    (*DAT_028cc558)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar6;
  }
  local_40 = 1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

