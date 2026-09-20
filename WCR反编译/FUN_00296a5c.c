// FUN_00296a5c @ 00296a5c

void FUN_00296a5c(long param_1)

{
  long lVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardImage_fromViewControl_026a1850,
               *(undefined8 *)(param_1 + 0x28),local_20);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardImageAtPath_fromViewC_026a1848,
               *(undefined8 *)(param_1 + 0x20),local_20);
  }
  FUN_0028fbf8(0x405e000000000000,*(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_20,0);
  return;
}

