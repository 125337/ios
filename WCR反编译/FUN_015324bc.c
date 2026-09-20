// FUN_015324bc @ 015324bc

byte FUN_015324bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined8 **local_180;
  undefined8 **local_158;
  undefined8 **local_128;
  undefined8 **local_110;
  undefined8 **local_d8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined8 **local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 **local_98;
  byte local_89;
  undefined8 **local_88;
  undefined8 **local_80;
  byte local_71;
  undefined8 **local_70;
  undefined8 **local_68;
  byte local_59;
  undefined8 **local_58;
  undefined8 **local_50;
  undefined4 local_44;
  undefined8 **local_40;
  undefined8 local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_110 = &local_40;
  local_40 = (undefined8 ***)0x0;
  _objc_storeStrong(local_110,param_3);
  if (local_30 == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    FUN_01559d40();
    local_59 = 0;
    bVar1 = (undefined8 ***)local_40 == (undefined8 ***)0x0;
    if (bVar1) {
      FUN_01563370();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_110;
    }
    else {
      local_110 = local_40;
    }
    local_59 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_110;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    pppuVar4 = (undefined8 ***)local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    local_128 = pppuVar4;
    if (pppuVar4 == (undefined8 ***)0x0) {
      FUN_015611fc();
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_128;
    }
    local_71 = pppuVar4 == (undefined8 ***)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_128;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(pppuVar4);
    ppuVar3 = local_50;
    if (((undefined8 ***)local_50 == (undefined8 ***)0x0) ||
       ((undefined8 ***)local_68 == (undefined8 ***)0x0)) {
      local_21 = 0;
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = ppuVar3;
      pppuVar4 = (undefined8 ***)local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pppuVar4);
      if (((ulong)pppuVar5 & 1) == 0) {
        pppuVar4 = (undefined8 ***)local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 0;
        local_158 = pppuVar4;
        if (pppuVar4 == (undefined8 ***)0x0) {
          local_158 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_topViewController_0269e588);
          _objc_retainAutoreleasedReturnValue();
          local_88 = local_158;
        }
        local_89 = pppuVar4 == (undefined8 ***)0x0;
        _objc_storeStrong(&local_80,local_158);
        if ((local_89 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        (*(code *)PTR__objc_release_02578630)(pppuVar4);
      }
      if ((undefined8 ***)local_80 == (undefined8 ***)0x0) {
        local_21 = 0;
        local_44 = 1;
      }
      else {
        local_98 = (undefined8 ***)0x0;
        local_a0 = PTR_s_getChatContactForSpecialMsg_026b03f0;
        local_a8 = PTR_s_getChatContact_0269d630;
        pppuVar4 = (undefined8 ***)local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,
                   PTR_s_getChatContactForSpecialMsg_026b03f0);
        if (((ulong)pppuVar4 & 1) != 0) {
          pppuVar4 = (undefined8 ***)local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,local_a0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = local_98;
          local_98 = pppuVar4;
          (*(code *)PTR__objc_release_02578630)(ppuVar3);
        }
        if (((undefined8 ***)local_98 == (undefined8 ***)0x0) &&
           (pppuVar4 = (undefined8 ***)local_50,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50,PTR_s_respondsToSelector__026ca818,local_a8),
           ((ulong)pppuVar4 & 1) != 0)) {
          pppuVar4 = (undefined8 ***)local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,local_a8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = local_98;
          local_98 = pppuVar4;
          (*(code *)PTR__objc_release_02578630)(ppuVar3);
        }
        if ((undefined8 ***)local_98 == (undefined8 ***)0x0) {
          _objc_storeStrong(&local_98,local_30);
        }
        pppuVar4 = (undefined8 ***)local_98;
        FUN_01528d34();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pppuVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pppuVar4,PTR_s_hasPrefix__0269d320,&cf_gh_);
        if (((((ulong)pppuVar4 & 1) == 0) &&
            (pppuVar4 = (undefined8 ***)local_b0,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_isEqualToString__0269ccc8,&cf_weixin),
            ((ulong)pppuVar4 & 1) == 0)) &&
           (pppuVar4 = (undefined8 ***)local_b0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_b0,PTR_s_isEqualToString__0269ccc8,&cf_filehelper),
           ((ulong)pppuVar4 & 1) == 0)) {
          pcVar6 = &cf_AddContactToChatRoomViewController;
          _NSClassFromString();
          local_b8 = pcVar6;
          if (pcVar6 == (cfstringStruct *)0x0) {
            local_21 = 0;
            local_44 = 1;
          }
          else {
            _objc_alloc_init();
            uVar2 = DAT_028c5de8;
            local_c0 = pcVar6;
            if (pcVar6 == (cfstringStruct *)0x0) {
              local_21 = 0;
            }
            else {
              puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(pcVar6,uVar2,puVar7,1);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              puVar7 = PTR_s_setM_contact__0269fff0;
              pcVar6 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_setM_contact__0269fff0);
              if (((ulong)pcVar6 & 1) == 0) {
                FUN_01563e1c(local_c0,&cf_m_contact,local_98);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,puVar7,local_98);
              }
              puVar7 = PTR_s_initMsgSearchHelper__0269ea40;
              pcVar6 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_respondsToSelector__026ca818,
                         PTR_s_initMsgSearchHelper__0269ea40);
              if (((ulong)pcVar6 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,puVar7,0);
              }
              DAT_028e39a8 = DAT_028e39a8 + 1;
              DAT_028e39a0 = 1;
              DAT_028e39b0 = 0;
              _objc_storeStrong(&DAT_028e38b8,local_38);
              _objc_storeWeak(&DAT_028e38c0,local_80);
              _objc_storeWeak(&DAT_028e38c8,0);
              DAT_028e39a1 = 0;
              pppuVar4 = (undefined8 ***)local_68;
              (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
              _objc_retainAutoreleasedReturnValue();
              local_180 = pppuVar4;
              if (pppuVar4 == (undefined8 ***)0x0) {
                local_d8 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
                _objc_retainAutoreleasedReturnValue();
                local_180 = local_d8;
              }
              FUN_01563f9c();
              _objc_retainAutoreleasedReturnValue();
              pppuVar5 = DAT_028e38d0;
              DAT_028e38d0 = (undefined8 ***)local_180;
              (*(code *)PTR__objc_release_02578630)(pppuVar5);
              if (pppuVar4 == (undefined8 ***)0x0) {
                (*(code *)PTR__objc_release_02578630)(local_d8);
              }
              (*(code *)PTR__objc_release_02578630)(pppuVar4);
              FUN_015641e4(local_68,DAT_028e38d0);
              pcVar6 = &cf_PushViewController_animated_;
              _NSSelectorFromString();
              pppuVar4 = (undefined8 ***)local_68;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68,PTR_s_respondsToSelector__026ca818,pcVar6);
              if (((ulong)pppuVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_68,PTR_s_pushViewController_animated__0269d590,local_c0,0);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_68,pcVar6,local_c0,0);
              }
              local_21 = 1;
            }
            local_44 = 1;
            _objc_storeStrong(&local_c0,0);
          }
        }
        else {
          local_21 = 0;
          local_44 = 1;
        }
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

