// FUN_003bf698 @ 003bf698

byte FUN_003bf698(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_s_isAffHasInit_026a2f50;
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isAffHasInit_026a2f50);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1), (uVar3 & 1) == 0))
    {
      puVar1 = PTR_s_exptConfig_026a2f58;
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_exptConfig_026a2f58);
      bVar2 = false;
      if ((uVar3 & 1) != 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = uVar3 != 0;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      if (bVar2) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

