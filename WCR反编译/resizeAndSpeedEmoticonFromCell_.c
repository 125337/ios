// resizeAndSpeedEmoticonFromCell: @ 00f49b8c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineEmoticonToolsHelper::resizeAndSpeedEmoticonFromCell_
          (WCRefineEmoticonToolsHelper *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined8 in_d0;
  undefined8 uVar7;
  cfstringStruct *local_d0;
  cfstringStruct *local_b8;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  undefined4 local_54;
  ID local_50;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageWrapFromCell__026ac0d8,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  local_40 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_emoticonMD5FromMessageWrap__026aa7d0,IVar3);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_48 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_chatViewControllerFromView__026ab918,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_48;
  local_50 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((IVar4 == 0) || (local_50 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSh_);
    local_54 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isAnimatedEmoticonMessageWrap__026ac0e8,local_40);
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_resizeEmoticonFromCell__026ac3e8,local_38);
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideMenuController_026aa7a0);
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_emoticonResizeFixedEnabled_026ac3c0);
      if ((((ulong)puVar5 & 1) == 0) ||
         (puVar5 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_emoticonSpeedFixedEnabled_026ac3d8),
         IVar3 = local_28, ((ulong)puVar5 & 1) == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = &cf_1_0_2;
        puVar5 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_emoticonResizeFixedEnabled_026ac3c0);
        if ((((ulong)puVar5 & 1) != 0) ||
           (puVar5 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_emoticonSpeedFixedEnabled_026ac3d8),
           ((ulong)puVar5 & 1) != 0)) {
          puVar5 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_emoticonResizeFixedEnabled_026ac3c0);
          local_b8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          local_79 = false;
          bVar1 = ((ulong)puVar5 & 1) == 0;
          if (bVar1) {
            local_b8 = &cf_1_0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_emoticonResizeFixedScale_026ac3c8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
            _objc_retainAutoreleasedReturnValue();
            local_78 = local_b8;
          }
          local_79 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = local_b8;
          if ((local_79 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_78);
          }
          puVar5 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_emoticonSpeedFixedEnabled_026ac3d8);
          local_d0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          local_91 = ((ulong)puVar5 & 1) == 0;
          if (local_91) {
            local_d0 = &cf_2;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_emoticonSpeedFixedValue_026ac3e0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_stringWithFormat__0269cca8,&cf___1f);
            _objc_retainAutoreleasedReturnValue();
            local_90 = local_d0;
          }
          local_91 = !local_91;
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = local_d0;
          if (local_91) {
            (*(code *)PTR__objc_release_02578630)(local_90);
          }
          pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______)
          ;
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_68;
          local_68 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          _objc_storeStrong(&local_88);
          _objc_storeStrong(&local_70,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_presentInputWithTitle_message_de_026ac3d0,&cf__YS,&cf_<h__Y__,
                   local_68,local_48,local_50,2);
        _objc_storeStrong(&local_68,0);
        local_54 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_emoticonResizeFixedScale_026ac3c8);
        uVar7 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_emoticonSpeedFixedValue_026ac3e0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,*(undefined8 *)PTR__CGSizeZero_025782f8,
                   *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8),uVar7,IVar3,
                   PTR_s_performResizeScale_size_speed_md_026abfd0,local_48,local_50);
        local_54 = 1;
      }
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

