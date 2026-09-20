// wcr_isRelMatchingCurrentPickerSelection: @ 0182a1ac

/* Function Stack Size: 0x18 bytes */

bool WCRefineAvatarFrameLibraryViewController::wcr_isRelMatchingCurrentPickerSelection_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  byte local_144;
  byte local_124;
  byte local_104;
  byte local_e4;
  byte local_cc;
  cfstringStruct *local_c8;
  cfstringStruct *local_b0;
  undefined *local_98;
  undefined *local_88;
  undefined *local_78;
  undefined *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  ulong local_40;
  SEL local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSelectMode_026b6440);
  if (((((ulong)pcVar2 & 1) == 0) ||
      (uVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
      uVar3 == 0)) ||
     (pcVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isNoneFrameItem__026b6448,local_40),
     ((ulong)pcVar2 & 1) != 0)) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectionContextEnabled_026b6410);
    if (((ulong)pcVar2 & 1) == 0) {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_60 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_previewRole_026b63a8);
      uVar3 = local_40;
      if (pcVar2 == (cfstringStruct *)0x0) {
        puVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_avatarFrameChatListPath_0269df10);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
        uVar5 = local_40;
        local_e4 = 1;
        bVar1 = (uVar3 & 1) == 0;
        if (bVar1) {
          local_68 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_avatarFrameChatListNightPath_0269df18);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8);
          local_e4 = (byte)uVar5;
        }
        local_21 = local_e4 & 1;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_68);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      else {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_previewRole_026b63a8);
        uVar3 = local_40;
        if (pcVar2 == (cfstringStruct *)0x1) {
          puVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_avatarFrameChatPageOtherPath_0269df20);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
          uVar5 = local_40;
          local_104 = 1;
          bVar1 = (uVar3 & 1) == 0;
          if (bVar1) {
            local_78 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_avatarFrameChatPageOtherNightPat_0269df28);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8);
            local_104 = (byte)uVar5;
          }
          local_21 = local_104 & 1;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_78);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        else {
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_previewRole_026b63a8);
          if (pcVar2 == (cfstringStruct *)0x2) {
            puVar4 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_avatarFrameChatPageDistinguishSe_0269df00);
            uVar3 = local_40;
            if (((ulong)puVar4 & 1) == 0) {
              puVar4 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_avatarFrameChatPageOtherPath_0269df20);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
              uVar5 = local_40;
              local_144 = 1;
              bVar1 = (uVar3 & 1) == 0;
              if (bVar1) {
                local_98 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_60,PTR_s_avatarFrameChatPageOtherNightPat_0269df28);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8);
                local_144 = (byte)uVar5;
              }
              local_21 = local_144 & 1;
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_98);
              }
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
            else {
              puVar4 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_avatarFrameChatPageSelfPath_0269df30);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
              uVar5 = local_40;
              local_124 = 1;
              bVar1 = (uVar3 & 1) == 0;
              if (bVar1) {
                local_88 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_60,PTR_s_avatarFrameChatPageSelfNightPath_0269df38);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8);
                local_124 = (byte)uVar5;
              }
              local_21 = local_124 & 1;
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_88);
              }
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
          }
          else {
            local_21 = 0;
          }
        }
      }
      local_44 = 1;
      _objc_storeStrong(&local_60,0);
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectionContextDayPath_026b6450);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_b0 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_b0;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectionContextNightPath_026b6458);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_c8 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_c8;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_50);
      local_cc = 1;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_58);
        local_cc = (byte)uVar3;
      }
      local_21 = local_cc & 1;
      local_44 = 1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

