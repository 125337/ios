// FUN_001b5ca4 @ 001b5ca4

byte FUN_001b5ca4(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  cfstringStruct *local_268;
  cfstringStruct *local_248;
  cfstringStruct *local_1f8;
  uint local_194;
  byte local_18c;
  long local_140;
  undefined1 local_131;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined **local_110;
  char *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  char *local_c0;
  undefined *local_b8;
  char *local_b0;
  byte local_a2;
  byte local_a1;
  undefined *local_a0;
  char *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  undefined **local_68;
  ulong local_60;
  undefined *local_58;
  byte local_49;
  int local_48;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  FUN_001b47e0();
  if (((uVar2 & 1) != 0) || (local_38 == 0)) {
    local_21 = 0;
    local_48 = 1;
    goto LAB_001b67d0;
  }
  local_49 = (byte)uVar2;
  FUN_001b77f4();
  uVar2 = local_30;
  local_58 = PTR_s_initWithContact__0269ff98;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = uVar2;
  ppuVar3 = &local_90;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_001b7894;
  local_78 = &DAT_025790c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar2;
  _objc_retainBlock();
  local_68 = ppuVar3;
  if ((local_49 & 1) == 0) {
LAB_001b6088:
    pcVar4 = "WCUIActionSheet";
    _objc_getClass();
    local_c8 = PTR_s_initWithTitle__0269d2f8;
    local_d0 = PTR_s_addDestructiveButtonTitle_handle_0269ffb0;
    local_d8 = PTR_s_addCancelBtnTitle_handler__0269ffb8;
    local_e0 = PTR_s_showInView__0269d310;
    local_c0 = pcVar4;
    if ((((pcVar4 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithTitle__0269d2f8
                    ), ((ulong)pcVar4 & 1) == 0)) ||
        (pcVar4 = local_c0,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_instancesRespondToSelector__0269da90,local_d0),
        ((ulong)pcVar4 & 1) == 0)) ||
       (pcVar4 = local_c0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_c0,PTR_s_instancesRespondToSelector__0269da90,local_e0),
       ((ulong)pcVar4 & 1) == 0)) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      pcVar4 = "Contacts_DeleteTitle";
      FUN_001b8178();
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = (cfstringStruct *)pcVar4;
      if ((cfstringStruct *)pcVar4 == (cfstringStruct *)0x0) {
        local_1f8 = &cf_nx_Rd_;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = local_1f8;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar1 = local_e8;
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      uVar2 = local_30;
      FUN_001b84f4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      pcVar4 = "Contacts_DeleteContact";
      FUN_001b8178();
      _objc_retainAutoreleasedReturnValue();
      local_248 = (cfstringStruct *)pcVar4;
      if ((cfstringStruct *)pcVar4 == (cfstringStruct *)0x0) {
        local_248 = &cf_RdT_N;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_248;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = "Common_Cancel";
      FUN_001b8178();
      _objc_retainAutoreleasedReturnValue();
      local_268 = (cfstringStruct *)pcVar4;
      if ((cfstringStruct *)pcVar4 == (cfstringStruct *)0x0) {
        local_268 = &cf_Sm;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_100 = local_268;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_c0;
      _objc_alloc();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,local_c8,local_f0);
      _objc_retainAutoreleasedReturnValue();
      local_108 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      ppuVar3 = local_68;
      puVar6 = local_d0;
      pcVar1 = local_f8;
      pcVar4 = local_108;
      if (local_108 == (char *)0x0) {
        local_21 = 0;
        local_48 = 1;
      }
      else {
        ppuVar7 = &local_130;
        local_130 = PTR___NSConcreteStackBlock_02578660;
        local_128 = 0xc2000000;
        local_124 = 0;
        local_120 = FUN_001b868c;
        local_118 = &DAT_02579910;
        (*(code *)PTR__objc_retain_02578638)();
        local_110 = ppuVar3;
        local_131 = 1;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar6,pcVar1);
        local_131 = 0;
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        pcVar4 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_respondsToSelector__026ca818,local_d8)
        ;
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_108,local_d8,local_100,0);
        }
        lVar8 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_140 = lVar8;
        if (lVar8 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_108,local_e0,lVar8);
        }
        local_48 = 1;
        local_21 = lVar8 != 0;
        _objc_storeStrong(&local_140);
        _objc_storeStrong(&local_110,0);
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
    }
  }
  else {
    pcVar4 = "DeleteContactConfirmActionSheet";
    _objc_getClass();
    local_a0 = PTR_s_showFromViewController_animated__0269ffa0;
    local_18c = 0;
    local_98 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_instancesRespondToSelector__0269da90,local_58);
      local_18c = (byte)pcVar4;
    }
    local_a1 = local_18c & 1;
    local_194 = 0;
    if (local_98 != (char *)0x0) {
      pcVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_instancesRespondToSelector__0269da90,local_a0);
      local_194 = (uint)pcVar4;
    }
    local_a2 = (byte)local_194 & 1;
    if (((local_a1 & 1) == 0) || ((local_194 & 1) == 0)) goto LAB_001b6088;
    pcVar4 = local_98;
    _objc_alloc();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,local_58,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_b8 = PTR_s_setConfirmBlock__0269ffa8;
    if ((local_b0 == (char *)0x0) ||
       (pcVar5 = local_b0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_setConfirmBlock__0269ffa8),
       pcVar4 = local_b0, puVar6 = local_b8, ((ulong)pcVar5 & 1) == 0)) {
      local_48 = 0;
    }
    else {
      ppuVar3 = local_68;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar6);
      (*(code *)PTR__objc_release_02578630)(ppuVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_a0,local_38,1);
      local_21 = 1;
      local_48 = 1;
    }
    _objc_storeStrong(&local_b0,0);
    if (local_48 == 0) goto LAB_001b6088;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
LAB_001b67d0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

