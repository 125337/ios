// FUN_006f2154 @ 006f2154

void FUN_006f2154(long param_1)

{
  cfstringStruct *local_40;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    local_40 = *(cfstringStruct **)(param_1 + 0x28);
    if (local_40 == (cfstringStruct *)0x0) {
      local_40 = &cf_U_O_4lpS_Q1Y_;
    }
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),local_40);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__0269d180,
               *(undefined8 *)(param_1 + 0x20));
    if (*(long *)(param_1 + 0x40) != 0) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
                (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20));
    }
  }
  return;
}

