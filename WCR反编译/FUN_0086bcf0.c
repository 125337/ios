// FUN_0086bcf0 @ 0086bcf0

void FUN_0086bcf0(ulong param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  (*DAT_028cd618)(param_1,param_2,param_3 & 1);
  FUN_00878c68(param_1);
  puVar1 = PTR_s_setTableHeaderTopViewHiddenIfNot_026a8ff0;
  if (((((DAT_028cd870 & 1) != 0) && ((DAT_028cd4d1 & 1) == 0)) && ((DAT_028cd4d0 & 1) == 0)) &&
     (uVar2 = param_1,
     (*(code *)PTR__objc_msgSend_02578628)
               (param_1,PTR_s_respondsToSelector__026ca818,
                PTR_s_setTableHeaderTopViewHiddenIfNot_026a8ff0), (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar1,1);
  }
  return;
}

