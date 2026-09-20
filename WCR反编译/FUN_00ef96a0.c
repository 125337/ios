// FUN_00ef96a0 @ 00ef96a0

byte FUN_00ef96a0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  char *local_b0;
  char *local_80;
  char *local_70;
  char *local_68;
  char *local_60;
  int local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_20;
  _WCRChatToolbarAttachmentController();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  if (uVar2 == 0) {
    FUN_00ef8b3c(local_20,&cf_initAttachmentView);
    uVar3 = local_20;
    _WCRChatToolbarAttachmentController();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = local_30;
  FUN_00ef4940();
  local_38 = uVar2;
  for (local_40 = 0; local_40 < local_38; local_40 = local_40 + 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
    local_50 = &cf___;
    FUN_00ef49d8(local_30,local_40,&local_50);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeStrong(&local_48,local_50);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsObject__0269cbb8,local_48);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_OnAttachmentClicked__0269f348),
       (uVar2 & 1) == 0)) {
      local_54 = 4;
    }
    else {
      local_b0 = "AttachmentButton";
      _objc_getClass();
      bVar1 = local_b0 == (char *)0x0;
      local_60 = local_b0;
      if (bVar1) {
        local_b0 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_b0;
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__CGRectZero_025782f0,
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
        local_70 = local_b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_b0;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setTag__026caa80,&DAT_00004650 + local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_OnAttachmentClicked__0269f348,local_68);
      local_11 = 1;
      local_54 = 1;
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_48,0);
    iVar4 = local_54 + -4;
    if (iVar4 != 0) goto LAB_00ef99f0;
  }
  iVar4 = 1;
  local_11 = 0;
  local_54 = 1;
LAB_00ef99f0:
  _objc_storeStrong(iVar4,&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

