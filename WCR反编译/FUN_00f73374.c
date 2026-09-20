// FUN_00f73374 @ 00f73374

void FUN_00f73374(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = DAT_028e2e48;
  DAT_028e2e48 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRFriendRelationProgressPresenter_026cebc8,PTR_s_shared_0269cad0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}

