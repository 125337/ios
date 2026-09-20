// FUN_005bf2cc @ 005bf2cc

void FUN_005bf2cc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_005bf4b0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,local_30,
               *(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = local_30;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  FUN_005bf524(*(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

