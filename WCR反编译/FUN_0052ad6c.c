// FUN_0052ad6c @ 0052ad6c

void FUN_0052ad6c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if ((local_18 != 0) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,
                PTR_s_wcRefine_playLivePhotoIfNeeded_026a49e8), (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
               local_18,PTR_s_wcRefine_playLivePhotoIfNeeded_026a49e8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,local_18,PTR_s_performSelector_withObject_after_026a4990,
               PTR_s_wcRefine_playLivePhotoIfNeeded_026a49e8,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

