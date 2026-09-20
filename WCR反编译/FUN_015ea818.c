// FUN_015ea818 @ 015ea818

void FUN_015ea818(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setIdleSnapBlock__026b12e0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_performIdleSnapAnimated__026b1388,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

