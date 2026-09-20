// FUN_01aab008 @ 01aab008

/* WARNING: Type propagation algorithm not settling */

void FUN_01aab008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_28 [3];
  
  local_28[1] = 0;
  local_28[2] = param_1;
  _objc_storeStrong(local_28 + 1);
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_3);
  lVar1 = local_28[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_28[0],PTR_s_row_0269e210);
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_selectedUsernames_026a6628);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (lVar1 < lVar3) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_selectedUsernames_026a6628);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_28[0],PTR_s_row_0269e210);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_removeObjectAtIndex__0269d530,lVar1);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadSelectedMembersSection_026bdcb0);
  }
  _objc_storeStrong(local_28);
  _objc_storeStrong(local_28 + 1,0);
  return;
}

