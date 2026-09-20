// FUN_01bb4968 @ 01bb4968

void FUN_01bb4968(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x38;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_wcrRepo_attemptLocateWrap_sessio_026c0448,*(undefined8 *)(param_1 + 0x20)
               ,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x30),2,&PTR___NSConcreteGlobalBlock_0258b620);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

