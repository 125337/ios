// FUN_00297a94 @ 00297a94

void FUN_00297a94(long param_1,byte param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *local_60;
  
  if ((param_2 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -1;
  if (0 < *(long *)(param_1 + 0x38)) {
    lVar3 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar3 = ((*(long *)(param_1 + 0x38) -
               *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18)) * 99) /
              *(long *)(param_1 + 0x38);
    }
    FUN_0027164c(lVar3);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) < 1) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) < 1) {
      pcVar2 = *(cfstringStruct **)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_60 = &cf_VGrN_1Y_;
      }
      FUN_0028e9e4(local_60);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__OX_);
      _objc_retainAutoreleasedReturnValue();
      FUN_00297ca4();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  return;
}

