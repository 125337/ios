// listExtensionForItem: @ 015ae7cc

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackStore::listExtensionForItem_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isDirectory_026b0ba0),
     (uVar1 & 1) != 0)) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

