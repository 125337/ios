// unreadDotOffsetSliderEnded: @ 01cb7d68

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefinePrivateFriendViewController::unreadDotOffsetSliderEnded_
          (WCRefinePrivateFriendViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  float in_s0;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_unreadDotOffsetSliderChanged__026c3308,local_28);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if (lVar1 == 0x5ec5) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)((double)in_s0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)((double)in_s0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

