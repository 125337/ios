// chatRoomContextFromProfileController: @ 0109d80c

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageBlockSupport::chatRoomContextFromProfileController_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  int iVar5;
  cfstringStruct *local_b8 [2];
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88 [2];
  cfstringStruct *local_78;
  cfstringStruct *local_70 [4];
  cfstringStruct *local_50;
  uint local_44;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
    local_44 = 1;
  }
  else {
    local_50 = (cfstringStruct *)0x0;
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_valueForKey__0269d128,&cf_m_chatRoomContact);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_50;
    local_50 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_50;
    FUN_0109cee4(local_50,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar3;
    FUN_0109e0cc();
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_70[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_length_0269cca0);
    pcVar3 = local_70[0];
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_78 = (cfstringStruct *)0x0;
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_78;
      local_78 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = local_78;
      FUN_0109cee4(local_78,&cf_m_nsChatRoomUserName);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      FUN_0109e0cc();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_70[0];
      local_70[0] = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_length_0269cca0);
      pcVar3 = local_70[0];
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_88[0] = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_parentViewController_0269e500);
          _objc_retainAutoreleasedReturnValue();
          local_90 = pcVar3;
          while (local_90 != (cfstringStruct *)0x0 && local_88[0] == (cfstringStruct *)0x0) {
            pcVar2 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_88[0];
            local_88[0] = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar2 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_parentViewController_0269e500);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_90;
            local_90 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          _objc_storeStrong(&local_90,0);
        }
        if (local_88[0] == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &::cf___;
          iVar5 = 1;
          local_44 = 1;
        }
        else {
          pcVar3 = local_88[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_98 = pcVar2;
          do {
            local_98 = (cfstringStruct *)((long)&local_98[-1].field3_0x18 + 7);
            if ((long)local_98 < 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &::cf___;
              iVar5 = 1;
              local_44 = 1;
              break;
            }
            pcVar3 = local_88[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_viewControllers_0269e348);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_a0 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            if (local_a0 == local_40) {
              local_44 = 8;
            }
            else {
              local_a8 = (cfstringStruct *)0x0;
              pcVar2 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_valueForKey__0269d128,&cf_m_chatRoomContact);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_a8;
              local_a8 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              pcVar2 = local_a8;
              FUN_0109cee4(local_a8,&cf_m_nsUsrName);
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = pcVar2;
              FUN_0109e0cc();
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_70[0];
              local_70[0] = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              pcVar2 = local_70[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_length_0269cca0);
              pcVar3 = local_70[0];
              if (pcVar2 == (cfstringStruct *)0x0) {
                local_b8[0] = (cfstringStruct *)0x0;
                pcVar3 = local_a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630
                          );
                if (((ulong)pcVar3 & 1) != 0) {
                  pcVar2 = local_a0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_getChatContact_0269d630);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_b8[0];
                  local_b8[0] = pcVar2;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
                if ((local_b8[0] == (cfstringStruct *)0x0) &&
                   (pcVar3 = local_a0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0)
                   , ((ulong)pcVar3 & 1) != 0)) {
                  pcVar2 = local_a0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_GetContact_0269d2c0);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_b8[0];
                  local_b8[0] = pcVar2;
                  (*(code *)PTR__objc_release_02578630)(pcVar3);
                }
                pcVar2 = local_b8[0];
                FUN_0109cee4(local_b8[0],&cf_m_nsUsrName);
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = pcVar2;
                FUN_0109e0cc();
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_70[0];
                local_70[0] = pcVar4;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                pcVar2 = local_70[0];
                (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_length_0269cca0);
                pcVar3 = local_70[0];
                bVar1 = pcVar2 != (cfstringStruct *)0x0;
                if (bVar1) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = pcVar3;
                }
                local_44 = (uint)bVar1;
                _objc_storeStrong(bVar1,local_b8,0);
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar3;
                local_44 = 1;
              }
              _objc_storeStrong(&local_a8,0);
            }
            _objc_storeStrong(&local_a0,0);
          } while ((local_44 == 0) || (iVar5 = local_44 - 8, iVar5 == 0));
        }
        _objc_storeStrong(iVar5,local_88,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
        local_44 = 1;
      }
      _objc_storeStrong(&local_78,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
      local_44 = 1;
    }
    _objc_storeStrong(local_70);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

