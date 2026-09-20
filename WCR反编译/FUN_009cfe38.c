// FUN_009cfe38 @ 009cfe38

void FUN_009cfe38(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  cfstringStruct *local_48;
  cfstringStruct *local_28;
  
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_48 = &cf_VGrpencx1Y_;
    FUN_009c701c(&cf_VGrpencx1Y_,0xfffffffffffffffe);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_48;
  }
  else {
    local_48 = (cfstringStruct *)0x0;
  }
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3,&cf_image_png,local_48);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

