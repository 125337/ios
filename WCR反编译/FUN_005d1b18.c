// FUN_005d1b18 @ 005d1b18

void FUN_005d1b18(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_WCRefine_performDeleteMomentWith_026a5810,*(undefined8 *)(param_1 + 0x20)
              );
  }
  _objc_storeStrong(&local_28,0);
  return;
}

