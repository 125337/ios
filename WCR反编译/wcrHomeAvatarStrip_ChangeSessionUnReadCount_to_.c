// wcrHomeAvatarStrip_ChangeSessionUnReadCount:to: @ 0034f28c

/* Function Stack Size: 0x1c bytes */

void WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_ChangeSessionUnReadCount_to_
               (ID param_1,SEL param_2,ID param_3,unsigned_int param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrHomeAvatarStrip_ChangeSession_026a2398,local_28,param_4);
  FUN_0034e7a8();
  puVar2 = PTR___dispatch_main_q_02578680;
  if ((IVar1 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

