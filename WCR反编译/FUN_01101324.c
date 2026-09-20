// FUN_01101324 @ 01101324

void FUN_01101324(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long local_58;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_30);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_30);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_30);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        lVar2 = *(long *)(param_1 + 0x38);
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar2,PTR_s_displayEntryForLongPressItemID__026aede0,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_58 = lVar2;
        if (lVar2 == 0) {
          local_58 = local_20;
        }
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_addObject__0269d180,local_58);
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

