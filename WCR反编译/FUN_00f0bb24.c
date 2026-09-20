// FUN_00f0bb24 @ 00f0bb24

void FUN_00f0bb24(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_30 == (cfstringStruct *)0x0) || (local_20 != 0)) {
    if (local_20 == 0x191) {
      if (*(long *)(param_1 + 0x28) != 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),&cf_W);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_webdavMkcolRemaining_index_compl_026abc70,
                 *(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x38) + 1,
                 *(undefined8 *)(param_1 + 0x28));
    }
  }
  else if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_68 = &cf_W;
    }
    (**(code **)(lVar2 + 0x10))(lVar2,local_68);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

