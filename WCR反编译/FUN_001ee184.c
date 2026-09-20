// FUN_001ee184 @ 001ee184

byte FUN_001ee184(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_98;
  int local_8c;
  ulong local_88;
  ulong local_80;
  int local_74;
  ulong local_70;
  ulong local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  uint local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
    goto LAB_001ee850;
  }
  pcVar2 = &cf_AttachmentButton;
  _NSClassFromString();
  pcVar3 = &cf_SelectAttachmentViewController;
  local_40 = pcVar2;
  _NSClassFromString();
  pcVar2 = &cf_MMGrowDictationIconView;
  local_58 = pcVar3;
  _NSClassFromString();
  local_60 = pcVar2;
  if ((local_40 != (cfstringStruct *)0x0) &&
     (uVar4 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,local_40),
     (uVar4 & 1) != 0)) {
    local_21 = 1;
    local_34 = 1;
    goto LAB_001ee850;
  }
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsString__0269d0b0,&cf_AttachmentButton);
  if (((uVar4 & 1) == 0) &&
     (uVar5 = local_68,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_68,PTR_s_containsString__0269d0b0,&cf_SelectAttachment), uVar4 = local_30,
     (uVar5 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar4;
    local_74 = 0;
    do {
      uVar4 = local_30;
      if (local_70 == 0 || 0x17 < local_74) {
        if (local_58 == (cfstringStruct *)0x0) goto LAB_001ee7f4;
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = uVar4;
        local_8c = 0;
        goto LAB_001ee618;
      }
      uVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_containsString__0269d0b0,&cf_SelectAttachment);
      if ((((uVar4 & 1) == 0) &&
          (uVar4 = local_80,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_containsString__0269d0b0,&cf_AttachmentContainer),
          (uVar4 & 1) == 0)) &&
         (uVar4 = local_80,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_80,PTR_s_containsString__0269d0b0,&cf_AttachmentView), (uVar4 & 1) == 0))
      {
        if ((local_40 == (cfstringStruct *)0x0) ||
           (uVar4 = local_70,
           (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isKindOfClass__0269cd68,local_40),
           (uVar4 & 1) == 0)) {
          if ((local_60 == (cfstringStruct *)0x0) ||
             (uVar4 = local_70,
             (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isKindOfClass__0269cd68,local_60),
             (uVar4 & 1) == 0)) {
            uVar5 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_70;
            local_70 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            local_74 = local_74 + 1;
            local_34 = 0;
          }
          else {
            local_21 = 1;
            local_34 = 1;
          }
        }
        else {
          local_21 = 1;
          local_34 = 1;
        }
      }
      else {
        local_21 = 1;
        local_34 = 1;
      }
      _objc_storeStrong(&local_80,0);
    } while (local_34 == 0);
    goto LAB_001ee810;
  }
  local_21 = 1;
  local_34 = 1;
  goto LAB_001ee830;
  while( true ) {
    uVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_98 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsString__0269d0b0,&cf_SelectAttachment)
    ;
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      uVar5 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_88;
      local_88 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_8c = local_8c + 1;
    }
    else {
      local_21 = 1;
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_98,0);
    if (local_34 != 0) break;
LAB_001ee618:
    if (local_88 == 0 || 0x17 < local_8c) {
      local_34 = 0;
      break;
    }
    uVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isKindOfClass__0269cd68,local_58);
    if ((uVar4 & 1) != 0) {
      local_21 = 1;
      local_34 = 1;
      break;
    }
  }
  _objc_storeStrong(&local_88,0);
  if (local_34 == 0) {
LAB_001ee7f4:
    local_21 = 0;
    local_34 = 1;
  }
LAB_001ee810:
  _objc_storeStrong(&local_70,0);
LAB_001ee830:
  _objc_storeStrong(&local_68,0);
LAB_001ee850:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

