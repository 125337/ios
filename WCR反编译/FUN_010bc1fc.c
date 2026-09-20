// FUN_010bc1fc @ 010bc1fc

void FUN_010bc1fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_cacheRootPath_026ae668);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_stringByAppendingPathExtension__026a4580,&cf_dat);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar5;
  if (puVar5 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,PTR_s_unarchiveObjectWithData__026a4f98,
               puVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar6;
    (*(code *)PTR__objc_release_02578630)(uVar7);
  }
  _objc_storeStrong(&local_30,0);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_applyArchivedMediaPathsToDataIte_026ae6e8,
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
               *(undefined8 *)(param_1 + 0x28),0);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleasePoolPop(lVar1);
  return;
}

