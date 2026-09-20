// FUN_00062394 @ 00062394

void FUN_00062394(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong local_38;
  undefined4 local_30;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_18 == 0)) {
    local_30 = 1;
  }
  else {
    uVar2 = local_18;
    FUN_0005e9ec();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    if ((uVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88),
       (uVar2 & 1) == 0)) {
      if ((local_38 != 0) &&
         (uVar2 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_insertString__0269dc28),
         (uVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_insertString__0269dc28,local_20);
      }
      local_30 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setText__026caa88,local_20);
      local_30 = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

