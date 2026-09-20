// unreadDotOffsetSliderChanged: @ 01cb7b9c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefinePrivateFriendViewController::unreadDotOffsetSliderChanged_
          (WCRefinePrivateFriendViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  float in_s0;
  long local_40;
  undefined8 local_38;
  double local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  local_30 = (double)(long)in_s0;
  if (local_30 < -40.0) {
    local_30 = -40.0;
  }
  if (40.0 < local_30) {
    local_30 = 40.0;
  }
  (*(code *)PTR__objc_msgSend_02578628)((float)local_30,local_28,PTR_s_setValue__026a51b0);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_38 = 0x5ec7;
  if (lVar1 != 0x5ec5) {
    local_38 = 0x5ec8;
  }
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  (*(code *)PTR__objc_release_02578630)();
  lVar1 = local_40;
  FUN_01cb7b50(local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTitle_forState__026caab8,lVar2,0);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

