// FUN_015c9ecc @ 015c9ecc

ulong FUN_015c9ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_110;
  ulong local_e0;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  long local_48;
  ulong local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_38;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  local_58 = lVar2 + 1;
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_e0 = uVar4;
  if (local_58 < uVar4) {
    local_e0 = local_58;
  }
  local_68 = local_e0;
  uVar3 = uVar1;
  local_60 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,local_e0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  local_110 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (lVar2 + 1U < local_110) {
    local_110 = lVar2 + 1U;
  }
  uVar3 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,local_110);
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pathComponents_026ae478);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_pathComponents_026ae478);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (uVar3 == uVar4) {
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_localizedStandardCompare__0269e098,local_70);
    local_28 = uVar1;
  }
  else {
    local_28 = 1;
    if (uVar3 < uVar4) {
      local_28 = 0xffffffffffffffff;
    }
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

