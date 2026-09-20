// FUN_009cd714 @ 009cd714

void FUN_009cd714(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined *local_70;
  undefined *local_60;
  undefined *local_38;
  undefined *local_28;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    local_60 = *(undefined **)(param_1 + 0x20);
    bVar1 = false;
    bVar2 = false;
    if (local_60 == (undefined *)0x0) {
      local_70 = *(undefined **)(param_1 + 0x28);
      bVar1 = local_70 == (undefined *)0x0;
      if (bVar1) {
        local_70 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_HTTP_ld)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_28 = local_70;
      }
      FUN_009c701c(local_70,*(undefined8 *)(param_1 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_60 = local_70;
      local_38 = local_70;
    }
    (**(code **)(lVar3 + 0x10))(lVar3,0,local_60);
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
  }
  return;
}

