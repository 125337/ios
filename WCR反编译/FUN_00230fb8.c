// FUN_00230fb8 @ 00230fb8

void FUN_00230fb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined4 local_24;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_0022a660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_checkAndUpdateImage_0269de70);
    if ((uVar2 & 1) == 0) {
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setHeadImageByName__0269de50);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setHeadImageByName__0269de50,local_30);
        }
      }
      local_24 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_checkAndUpdateImage_0269de70);
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

