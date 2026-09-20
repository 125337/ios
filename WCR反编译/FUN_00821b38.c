// FUN_00821b38 @ 00821b38

void FUN_00821b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_b8;
  undefined8 local_58;
  ulong local_50;
  cfstringStruct *local_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar3;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar3 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar3,param_2);
  uVar2 = (uint)puVar3;
  local_28 = param_3;
  FUN_0082d7bc();
  if (((uVar2 & 1) == 0) ||
     (uVar4 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isViewLoaded_0269cde0),
     (uVar4 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    local_39 = 0;
    local_48 = (cfstringStruct *)0x0;
    local_58 = 0;
    uVar5 = local_18;
    FUN_00822088(local_18,local_20,local_28,&local_39,&local_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_48,local_58);
    uVar4 = local_18;
    uVar1 = local_20;
    local_50 = uVar5;
    if (uVar5 == 0) {
      local_38 = 1;
    }
    else {
      if (local_48 == (cfstringStruct *)0x0) {
        local_b8 = &cf___;
      }
      else {
        local_b8 = local_48;
      }
      pcVar6 = &cf_probe_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_probe_,PTR_s_stringByAppendingString__0269d398,local_b8);
      _objc_retainAutoreleasedReturnValue();
      FUN_0082a958(uVar4,uVar1,uVar5,pcVar6,0);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      local_38 = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

