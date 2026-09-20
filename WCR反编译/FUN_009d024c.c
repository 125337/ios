// FUN_009d024c @ 009d024c

void FUN_009d024c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_28;
  
  lVar3 = *(long *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  local_60 = *(cfstringStruct **)(param_1 + 0x30);
  bVar1 = false;
  if (local_60 == (cfstringStruct *)0x0) {
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    bVar1 = lVar2 == 0;
    if (bVar1) {
      local_68 = &cf_VGrN_1Y_;
      FUN_009c701c(&cf_VGrN_1Y_,0xfffffffffffffffe);
      _objc_retainAutoreleasedReturnValue();
      local_28 = local_68;
    }
    else {
      local_68 = (cfstringStruct *)0x0;
    }
    local_60 = local_68;
  }
  (**(code **)(lVar3 + 0x10))(lVar3,uVar4,uVar5,local_60);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

