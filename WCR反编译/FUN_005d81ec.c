// FUN_005d81ec @ 005d81ec

void FUN_005d81ec(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_005d8714();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
  }
  else {
    FUN_005dabb8(param_1);
  }
  return;
}

