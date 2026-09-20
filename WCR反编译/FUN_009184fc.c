// FUN_009184fc @ 009184fc

void FUN_009184fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_LogViewerViewController_026cea80;
  local_20 = param_1;
  local_18 = param_1;
  _objc_alloc_init();
  lVar2 = *(long *)(param_1 + 0x20);
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_pageMode_026aa248);
  uVar3 = 3;
  if (lVar2 != 1) {
    uVar3 = 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLogType__026aa080,uVar3);
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

