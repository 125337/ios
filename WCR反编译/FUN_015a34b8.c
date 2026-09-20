// FUN_015a34b8 @ 015a34b8

void FUN_015a34b8(long param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_48;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_status_026a1830);
  if (lVar1 == 3) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    pcVar2 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_error_026a1838);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_48 = &cf_ofmT1Y_;
    }
    (**(code **)(lVar1 + 0x10))(lVar1,0,local_48);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  return;
}

