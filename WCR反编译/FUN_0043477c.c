// FUN_0043477c @ 0043477c

void FUN_0043477c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_00436d1c();
  local_21 = (byte)param_1;
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBMutliContact__026a39c0,1);
  }
  (*DAT_028ca8b8)(local_18,local_20);
  uVar1 = local_18;
  FUN_00436dfc(local_18,"m_sessionSelectController");
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 != 0) {
    if ((local_21 & 1) != 0) {
      FUN_00437450(uVar1);
    }
    FUN_00437620(local_30);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

