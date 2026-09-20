// FUN_0056c198 @ 0056c198

void FUN_0056c198(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if ((lVar1 != 0) &&
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),local_30,
               PTR_s_WCRefinePerformDoubleTapActionVa_026a4fe0,local_20,
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

