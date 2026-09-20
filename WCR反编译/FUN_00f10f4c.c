// FUN_00f10f4c @ 00f10f4c

void FUN_00f10f4c(long param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_19 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),local_28);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_deleteItems_index_removed_comple_026abca8,
               *(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x40) + 1,
               *(long *)(param_1 + 0x30) + 1,*(undefined8 *)(param_1 + 0x28));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

