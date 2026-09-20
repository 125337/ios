// FUN_01e5b374 @ 01e5b374

void FUN_01e5b374(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 local_b0;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_1;
  local_18 = param_1;
  while( true ) {
    uVar4 = local_28;
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_tabButtons_026c6940);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar6 = local_28;
    bVar1 = false;
    if (uVar4 < uVar3) {
      uVar4 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
      bVar1 = uVar6 < uVar4;
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (!bVar1) break;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_tabButtons_026c6940);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar6 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_tabId_026a8270);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_selectedTabId_026b01c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    if ((uVar4 & 1) == 0) {
      local_b0 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      local_b0 = *(undefined8 *)(param_1 + 0x30);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setTitleColor_forState__026caac0,local_b0,0);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    local_28 = local_28 + 1;
  }
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIndicator_026c6938);
  }
  return;
}

