// FUN_01f164b8 @ 01f164b8

void FUN_01f164b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_48;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_48 = 0;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_completed);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = (uint)uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if ((local_48 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_entryFromOfficialCompletedMeta_r_026c8268,local_28,local_20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

