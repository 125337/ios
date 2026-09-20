// FUN_0086bef8 @ 0086bef8

void FUN_0086bef8(ulong param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  if ((((param_3 & 1) == 0) &&
      (FUN_00863880(), puVar1 = PTR_s_setTableHeaderTopViewHiddenIfNot_026a8ff0,
      (DAT_028cd870 & 1) != 0)) &&
     (uVar2 = param_1,
     (*(code *)PTR__objc_msgSend_02578628)
               (param_1,PTR_s_respondsToSelector__026ca818,
                PTR_s_setTableHeaderTopViewHiddenIfNot_026a8ff0), (uVar2 & 1) != 0)) {
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar1,1);
  }
  if (((param_3 & 1) == 0) || (FUN_00889fc4(), (uVar2 & 1) == 0)) {
    (*DAT_028cd630)(param_1,param_2,param_3 & 1);
  }
  return;
}

