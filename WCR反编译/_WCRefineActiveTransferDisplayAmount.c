// _WCRefineActiveTransferDisplayAmount @ 00f1beb8

void _WCRefineActiveTransferDisplayAmount(void)

{
  long lVar1;
  undefined8 local_18;
  
  lVar1 = DAT_0280e078;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_0280e078,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = DAT_0280e078;
  }
  _objc_retainAutoreleaseReturnValue(local_18);
  return;
}

