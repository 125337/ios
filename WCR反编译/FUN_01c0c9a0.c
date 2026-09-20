// FUN_01c0c9a0 @ 01c0c9a0

void FUN_01c0c9a0(ulong param_1)

{
  ulong local_18;
  
  FUN_01c22264();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTimelineDataItems_026a49a8);
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTimelineDataItems_026a49a8);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

