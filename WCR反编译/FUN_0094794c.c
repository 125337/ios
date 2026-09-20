// FUN_0094794c @ 0094794c

byte FUN_0094794c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_009463a8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_WCRClipboardHistoryStore_026ce680;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_thumbForItem__026aaab0,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_11 = puVar3 != (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)();
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

