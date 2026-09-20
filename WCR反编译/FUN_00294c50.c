// FUN_00294c50 @ 00294c50

void FUN_00294c50(long param_1)

{
  long lVar1;
  long lVar2;
  long local_60;
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_status_026a1830);
  if (lVar1 == 3) {
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_error_026a1838);
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar1;
    if (lVar1 == 0) {
      local_38 = -6;
      FUN_00272848(0xfffffffffffffffa,&cf__Q1Y_);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_38;
    }
    (**(code **)(lVar2 + 0x10))(lVar2,0,local_60);
    if (lVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  return;
}

