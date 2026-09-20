// FUN_009cc840 @ 009cc840

void FUN_009cc840(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      FUN_009cb7b8();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (lVar1 == 0) {
      local_60 = &cf_cS_gV_jWRh;
      FUN_009c701c(&cf_cS_gV_jWRh,0xfffffffffffffffe);
      _objc_retainAutoreleasedReturnValue();
      local_28 = local_60;
    }
    else {
      local_60 = (cfstringStruct *)0x0;
    }
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3,local_60);
    if (lVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
  }
  return;
}

