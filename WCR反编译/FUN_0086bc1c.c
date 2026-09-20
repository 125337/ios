// FUN_0086bc1c @ 0086bc1c

void FUN_0086bc1c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  (*DAT_028cd608)(param_1,param_2);
  puVar1 = PTR_s_setTableHeaderTopViewHiddenIfNot_026a8ff0;
  if (((DAT_028cd870 & 1) != 0) &&
     (uVar2 = param_1,
     (*(code *)PTR__objc_msgSend_02578628)
               (param_1,PTR_s_respondsToSelector__026ca818,
                PTR_s_setTableHeaderTopViewHiddenIfNot_026a8ff0), (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar1,1);
  }
  return;
}

