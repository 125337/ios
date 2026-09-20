// sendEmoticonWrap:imageData:sourceWrap:chatVC:asSelfie:error: @ 00f4b014

/* Function Stack Size: 0x3c bytes */

bool WCRefineEmoticonToolsHelper::sendEmoticonWrap_imageData_sourceWrap_chatVC_asSelfie_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7,
               ID *param_8)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ID IVar9;
  ulong local_108;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined *local_88;
  char *local_80;
  char *local_78;
  undefined4 local_6c;
  ulong *local_68;
  byte local_59;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  local_59 = (byte)param_7;
  local_68 = param_8;
  if ((local_40 == 0) || (local_58 == 0)) {
    if (param_8 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_68 = (ulong)&cf_elSh_;
    }
    local_21 = 0;
    local_6c = 1;
  }
  else {
    pcVar3 = "CEmoticonMgr";
    _objc_getClass();
    local_80 = (char *)0x0;
    local_88 = PTR_s_emoticonMsgForEmoticonWrap_image_026ac440;
    local_78 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,
               PTR_s_emoticonMsgForEmoticonWrap_image_026ac440);
    if (((ulong)pcVar3 & 1) != 0) {
      local_90 = 0;
      local_98 = 0;
      pcVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,local_88,local_40,local_48,&local_98);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_90,local_98);
      pcVar3 = local_80;
      local_80 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      uVar6 = local_90;
      if ((local_80 == (char *)0x0) && (local_68 != (ulong *)0x0)) {
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
        bVar1 = (uVar6 & 1) == 0;
        if (bVar1) {
          local_108 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_description_026ca5f8);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = local_108;
        }
        else {
          local_108 = local_90;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = local_108;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        uVar7 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
        uVar6 = local_a0;
        if (uVar7 != 0) {
          _objc_retainAutorelease(uVar7);
          *local_68 = uVar6;
        }
        _objc_storeStrong(&local_a0,0);
      }
      _objc_storeStrong(&local_90,0);
    }
    if (((local_80 == (char *)0x0) &&
        (lVar8 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
        puVar5 = PTR_s_genEmoticonMsgForEmoticonWrap_im_026ac150, lVar8 != 0)) &&
       (pcVar3 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_78,PTR_s_respondsToSelector__026ca818,
                  PTR_s_genEmoticonMsgForEmoticonWrap_im_026ac150), ((ulong)pcVar3 & 1) != 0)) {
      pcVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,puVar5,local_40,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_80;
      local_80 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    if (local_80 == (char *)0x0) {
      if ((local_68 != (ulong *)0x0) && (*local_68 == 0)) {
        _objc_retainAutorelease();
        *local_68 = (ulong)&cf_ubh_1Y_;
      }
      local_21 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_copyEmoticonTransportFieldsFrom__026ac448,local_50,local_80);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_applySelfieActivityId_toMessageW_026ac188,local_59 & 1,local_80);
      IVar9 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isSelfieEmoticonMessageWrap__026ac0e0,local_80);
      if ((uint)IVar9 == (local_59 & 1)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_markMessageWrapForFullExternXml__026ac450,local_80);
        pcVar2 = &cf_Sbh_;
        if ((local_59 & 1) == 0) {
          pcVar2 = &cf_Snfh_;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_deliverEmoticonMessage_chatVC_as_026ac190,local_80,local_58,
                   local_59 & 1,pcVar2);
        local_21 = 1;
      }
      else {
        if (local_68 != (ulong *)0x0) {
          pcVar2 = &cf_ubbh_1Y_;
          if ((local_59 & 1) == 0) {
            pcVar2 = &cf_ubnfh_1Y_;
          }
          _objc_retainAutorelease();
          *local_68 = (ulong)pcVar2;
        }
        local_21 = 0;
      }
    }
    local_6c = 1;
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

