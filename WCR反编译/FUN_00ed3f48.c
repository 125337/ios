// FUN_00ed3f48 @ 00ed3f48

void FUN_00ed3f48(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_numberOfRanges_0269ef18);
  if (1 < uVar1) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = local_20;
    puVar2 = PTR_s_rangeAtIndex__0269ef20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeAtIndex__0269ef20,1);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_substringWithRange__0269d138,uVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_wcr_addMemberUserName_into__026ab640,uVar3,
               *(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

