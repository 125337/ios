// FUN_002c2590 @ 002c2590

void FUN_002c2590(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    lVar2 = local_18;
    FUN_002acd8c(local_18,0x24f750);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_removeFromSuperview_026ca800);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

