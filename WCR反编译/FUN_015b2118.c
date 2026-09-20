// FUN_015b2118 @ 015b2118

void FUN_015b2118(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_30;
  undefined *local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (DAT_028e3ac8 == 0)) {
    local_1c = 1;
  }
  else {
    puVar2 = PTR_WCRefineVoicePackStore_026cea20;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackStore_026cea20,PTR_s_rootAbsolutePath_026ae1f8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_18;
    local_28 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar1;
    while (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
          uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e3ac8,PTR_s_removeObjectForKey__0269d700,local_30);
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_28);
      if ((uVar1 & 1) != 0) break;
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

