// FUN_01c67bf4 @ 01c67bf4

/* WARNING: Removing unreachable block (ram,0x01c67d84) */

void FUN_01c67bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setNicknameTextColorLight__026c1e98,local_20);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setNicknameTextColorDark__026c1ea0,local_28);
  uVar1 = local_28;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01c67e08;
  local_48 = &DAT_0258aa60;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_20;
  local_40 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_colorWithDynamicProvider__0269e538,&local_60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setNicknameTextColor__026c1ea8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_saveSettings_026b9548)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

