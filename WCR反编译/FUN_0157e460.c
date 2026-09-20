// FUN_0157e460 @ 0157e460

void FUN_0157e460(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (((local_18 != 0) &&
      (uVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isGroup_026af768),
      (uVar1 & 1) == 0)) &&
     (uVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isSelf_0269ff30),
     (uVar1 & 1) == 0)) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wxid_026b04e8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_0157e9cc();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHasRecentMomentCount3Days__026b0878,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRecentMomentCount3Days__026b0880,uVar2);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

