// changeEmoticonSpeedFromCell: @ 00f498fc

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonToolsHelper::changeEmoticonSpeedFromCell_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_50;
  uint local_44;
  ID local_40;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_messageWrapFromCell__026ac0d8,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_emoticonMD5FromMessageWrap__026aa7d0,IVar2);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_38 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_chatViewControllerFromView__026ab918,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_38;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((IVar3 == 0) || (local_40 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSh_);
    local_44 = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_isAnimatedEmoticonMessageWrap__026ac0e8,local_30);
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Y_h_elS);
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideMenuController_026aa7a0);
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_emoticonSpeedFixedEnabled_026ac3d8);
      IVar2 = local_18;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_presentInputWithTitle_message_de_026ac3d0,&cf_teh__,&::cf_eQ,&cf_2
                   ,local_38,local_40,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_emoticonSpeedFixedValue_026ac3e0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_performSpeed_md5_chatVC__026abfb8,local_38,local_40);
      }
      local_44 = (uint)!bVar1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

