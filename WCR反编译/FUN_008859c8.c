// FUN_008859c8 @ 008859c8

void FUN_008859c8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cd8c1);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_30 = 1;
  }
  else {
    _objc_setAssociatedObject(local_18,&DAT_028cd8c1,0,3);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_008825d8();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_20);
    if ((uVar1 & 1) == 0) {
      FUN_008861f0(local_18,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setText__026caa88,local_20);
      FUN_008861f0(local_18,0);
    }
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

