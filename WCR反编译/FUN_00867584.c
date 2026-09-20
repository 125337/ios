// FUN_00867584 @ 00867584

void FUN_00867584(ulong param_1)

{
  undefined *puVar1;
  ulong local_18;
  
  if (((DAT_028cd4d1 & 1) == 0) && ((DAT_028cd4d0 & 1) == 0)) {
    FUN_00886500();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_setTableHeaderTopViewHiddenIfNot_026a8ff0;
    local_18 = param_1;
    if ((param_1 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (param_1,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setTableHeaderTopViewHiddenIfNot_026a8ff0), (param_1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,puVar1,DAT_028cd870 & 1);
    }
    _objc_storeStrong(&local_18,0);
  }
  return;
}

