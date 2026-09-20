// FUN_006a420c @ 006a420c

void FUN_006a420c(ulong param_1)

{
  ulong uVar1;
  ulong local_18;
  
  FUN_006a4590();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  if ((param_1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_updateMainSessionListNotify__026a65f8), (param_1 & 1) == 0)) {
    if ((local_18 != 0) &&
       (uVar1 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_rebuildMainSessions_026a2f68),
       (uVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rebuildMainSessions_026a2f68);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateMainSessionListNotify__026a65f8,1);
  }
  FUN_006a45b0();
  FUN_006a4a14();
  _objc_storeStrong(&local_18,0);
  return;
}

