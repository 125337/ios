// FUN_005c6f58 @ 005c6f58

void FUN_005c6f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *local_98;
  char *local_90;
  char *local_88;
  ulong local_80;
  undefined *local_78;
  undefined *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  ulong local_50;
  undefined4 local_48;
  undefined *local_38;
  ulong local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  FUN_005a71f0();
  if ((uVar2 & 1) == 0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    uVar2 = local_30;
    FUN_005c75c4();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
    else {
      pcVar3 = "SightDraft";
      _objc_getClass();
      pcVar4 = "SightDraftItem";
      local_58 = pcVar3;
      _objc_getClass();
      pcVar3 = "WCUtil";
      local_60 = pcVar4;
      _objc_getClass();
      local_68 = pcVar3;
      if (((local_58 == (char *)0x0) || (local_60 == (char *)0x0)) || (pcVar3 == (char *)0x0)) {
        local_28 = (char *)0x0;
        local_48 = 1;
      }
      else {
        local_70 = PTR_s_draftItemWithThumbImg_andPath_in_026a5a98;
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,
                   PTR_s_draftItemWithThumbImg_andPath_in_026a5a98);
        puVar1 = local_38;
        if (((ulong)pcVar3 & 1) == 0) {
          local_28 = (char *)0x0;
          local_48 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_78 = puVar1;
          if (puVar1 == (undefined *)0x0) {
            uVar2 = local_30;
            FUN_005a7354();
            _objc_retainAutoreleasedReturnValue();
            local_80 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
            if (uVar2 != 0) {
              puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                         local_80);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = local_78;
              local_78 = puVar5;
              (*(code *)PTR__objc_release_02578630)(puVar1);
            }
            _objc_storeStrong(&local_80,0);
          }
          pcVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,local_70,local_78,local_50,2);
          _objc_retainAutoreleasedReturnValue();
          local_88 = pcVar3;
          if (pcVar3 == (char *)0x0) {
            local_28 = (char *)0x0;
            local_48 = 1;
          }
          else {
            pcVar3 = local_58;
            _objc_alloc_init();
            local_90 = pcVar3;
            if ((pcVar3 == (char *)0x0) ||
               ((*(code *)PTR__objc_msgSend_02578628)
                          (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_addItem__026a5aa0),
               ((ulong)pcVar3 & 1) == 0)) {
              local_28 = (char *)0x0;
              local_48 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_addItem__026a5aa0,local_88);
              puVar1 = PTR_s_uploadMediaFromSightDraft_requir_026a5aa8;
              local_98 = (char *)0x0;
              pcVar3 = local_68;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68,PTR_s_respondsToSelector__026ca818,
                         PTR_s_uploadMediaFromSightDraft_requir_026a5aa8);
              if (((ulong)pcVar3 & 1) == 0) {
                pcVar3 = local_68;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_68,PTR_s_respondsToSelector__026ca818,
                           PTR_s_uploadMediaFromSightDraft__026a5ab0);
                if (((ulong)pcVar3 & 1) != 0) {
                  pcVar4 = local_68;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_68,PTR_s_uploadMediaFromSightDraft__026a5ab0,local_90);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_98;
                  local_98 = pcVar4;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
              }
              else {
                pcVar4 = local_68;
                (*(code *)PTR__objc_msgSend_02578628)(local_68,puVar1,local_90,0);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_98;
                local_98 = pcVar4;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
              }
              if (local_98 == (char *)0x0) {
                local_28 = (char *)0x0;
              }
              else {
                pcVar3 = local_98;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_98,PTR_s_respondsToSelector__026ca818,
                           PTR_s_setSubMediaType__026a5ab8);
                if (((ulong)pcVar3 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setSubMediaType__026a5ab8,2);
                }
                pcVar3 = local_98;
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar3;
              }
              local_48 = 1;
              _objc_storeStrong(&local_98,0);
            }
            _objc_storeStrong(&local_90,0);
          }
          _objc_storeStrong(&local_88);
          _objc_storeStrong(&local_78,0);
        }
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

