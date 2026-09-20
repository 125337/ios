// FUN_01ef0b28 @ 01ef0b28

void FUN_01ef0b28(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  cfstringStruct *local_a8;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar3 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  uVar2 = local_20;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01ef0d84;
  local_40 = &DAT_0258cad0;
  local_30 = lVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_updateItem_mutate__026c7f08,uVar7,&local_58);
  uVar4 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  uVar6 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  bVar1 = (uVar6 & 1) == 0;
  if (bVar1) {
    local_a8 = &cf___;
  }
  else {
    local_a8 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_a8;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  FUN_01eec144(local_60,local_20,1);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

