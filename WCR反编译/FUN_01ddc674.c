// FUN_01ddc674 @ 01ddc674

void FUN_01ddc674(long param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  cfstringStruct *local_28;
  
  lVar3 = *(long *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x30);
  bVar2 = false;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    local_28 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    local_58 = local_28;
    if (local_28 == (cfstringStruct *)0x0) {
      local_58 = &cf_OX_1Y_;
    }
    local_48 = local_58;
  }
  else {
    local_48 = &cf__OX_0RvQ;
  }
  (**(code **)(lVar3 + 0x10))(lVar3,bVar1 & 1,local_48);
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

