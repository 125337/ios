// FUN_009ce57c @ 009ce57c

void FUN_009ce57c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_50 = &cf__gg0RYOOo_;
      FUN_009c701c(&cf__gg0RYOOo_,0xfffffffffffffffe);
      _objc_retainAutoreleasedReturnValue();
      local_28 = local_50;
    }
    else {
      local_50 = (cfstringStruct *)0x0;
    }
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3,local_50);
    if (lVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
  }
  return;
}

