// FUN_01d41128 @ 01d41128

void FUN_01d41128(long param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x4e22);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar3;
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isDoubleMode_026c4670);
    pcVar1 = &cf_SV_j_;
    if ((uVar4 & 1) == 0) {
      pcVar1 = &cf_USV_j_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_setTitle_forState__026caab8,pcVar1,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

