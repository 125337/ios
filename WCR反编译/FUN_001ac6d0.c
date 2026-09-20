// FUN_001ac6d0 @ 001ac6d0

void FUN_001ac6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_3);
  if (local_18 != 0) {
    pcVar1 = &cf_reloadIndexView;
    _NSSelectorFromString();
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1);
    }
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isDragging_0269ddf8);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isDecelerating_0269e888),
       (uVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentOffset_0269dd18);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,local_18,PTR_s_setContentOffset_animated__0269ddd8,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

