// FUN_00eb9cbc @ 00eb9cbc

void FUN_00eb9cbc(long param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_authorizationStatus_026a1770);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_requestAuthorizationWithOptions__026a8550,7,
               &PTR___NSConcreteGlobalBlock_02581bb0);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

