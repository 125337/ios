// FUN_00fec6ac @ 00fec6ac

void FUN_00fec6ac(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  DAT_028e30d0 = 0;
  _objc_storeWeak(&DAT_028e30a8,0);
  _objc_storeWeak(&DAT_028e30b0,0);
  _objc_storeStrong(&DAT_028e30c8,0);
  DAT_028e30f8 = 0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setHighlighted__0269fd50);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setHighlighted__0269fd50,0);
  }
  _WCRefineVoiceRippleSetPressToTalkActive(local_18,0);
  FUN_00fee6f8(local_18);
  FUN_00fee7b8(local_18,&cf_abort);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

