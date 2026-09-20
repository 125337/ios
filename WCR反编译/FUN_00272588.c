// FUN_00272588 @ 00272588

void FUN_00272588(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *local_70;
  
  _objc_storeStrong(&DAT_028c9590,0);
  if (*(long *)(param_1 + 0x38) < 400) {
    if ((*(long *)(param_1 + 0x20) == 0) && (0x3ff < *(long *)(param_1 + 0x40))) {
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                  (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
      }
    }
    else if (*(long *)(param_1 + 0x30) != 0) {
      lVar4 = *(long *)(param_1 + 0x30);
      pcVar3 = *(cfstringStruct **)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_70 = &cf_vQ_eHe_;
      }
      uVar2 = 0xfffffffffffffffd;
      FUN_00272848(0xfffffffffffffffd,local_70);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,0);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_v);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0xfffffffffffffffd;
    FUN_00272848();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

