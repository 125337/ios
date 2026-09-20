// FUN_0002f734 @ 0002f734

void FUN_0002f734(undefined8 param_1,byte param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40 [3];
  ulong local_28;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  local_19 = param_2;
  FUN_0002f3f4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineMessageBlockSupport_026ce0f8;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageBlockSupport_026ce0f8,
             PTR_s_chatRoomContextFromProfileContro_0269d570,local_18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_40[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((uVar2 == 0) ||
     (uVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar2 & 1) != 0)) {
    local_44 = 1;
  }
  else {
    puVar3 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_40[0];
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
    if (puVar4 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setAutomaticReplyEnabled_forCont_0269d580,local_19 & 1,local_28);
      pcVar1 = &cf__ReQVY_YS;
      if ((local_19 & 1) == 0) {
        pcVar1 = &cf__yQVY_YS;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
      local_44 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setAutomaticReplyEnabled_forMemb_0269d578,local_19 & 1,local_28,
                 local_40[0]);
      pcVar1 = &cf__c_VYdkN_g_;
      if ((local_19 & 1) == 0) {
        pcVar1 = &cf__Smc_dkN;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

