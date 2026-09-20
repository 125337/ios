// FUN_01793b4c @ 01793b4c

undefined * FUN_01793b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (((uint)uVar2 & 1) == ((uint)uVar4 & 1)) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_numberWithUnsignedInteger__0269e4d0,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_compare__0269cd10);
    local_18 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  else {
    local_18 = (undefined *)((long)&MACH_HEADER.magic + 1);
    if ((uVar2 & 1) != 0) {
      local_18 = (undefined *)0xffffffffffffffff;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

