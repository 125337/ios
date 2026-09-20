// FUN_00f795b0 @ 00f795b0

void FUN_00f795b0(long param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x40;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if ((lVar1 != 0) &&
     (lVar2 = *(long *)(param_1 + 0x48),
     (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_requestToken_026acb48), lVar2 == lVar1)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_handleCgiResponse_error_userName_026acbc0,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

