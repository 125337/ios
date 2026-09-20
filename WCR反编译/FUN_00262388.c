// FUN_00262388 @ 00262388

void FUN_00262388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  FUN_00262558(local_18,local_20);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_addButtonWithTitle_atIndex__026a1230);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_addButtonWithTitle__026a1238);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addButtonWithTitle__026a1238,local_20);
        _NSLog(&cf__wcr__emoticon_oainject__append);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_addButtonWithTitle_atIndex__026a1230,local_20,param_3);
      _NSLog(&cf__wcr__emoticon_oainject__atIndex__llu);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

