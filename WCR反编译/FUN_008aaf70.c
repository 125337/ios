// FUN_008aaf70 @ 008aaf70

void FUN_008aaf70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  uint local_d4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  char *local_58;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if ((local_28 == 0) || (local_30 == 0)) {
    local_34 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_voiceAutoTranslateEnabled_026a9938);
    if (((ulong)puVar1 & 1) == 0) {
      local_34 = 1;
    }
    else {
      pcVar2 = "CMessageWrap";
      _objc_getClass();
      local_58 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558);
      if ((((ulong)pcVar2 & 1) == 0) ||
         (pcVar2 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_58,PTR_s_isSenderFromMsgWrap__0269d558,local_30), ((ulong)pcVar2 & 1) == 0
         )) {
        uVar3 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028cde78);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_d4 = 0;
        if ((uVar4 & 1) != 0) {
          puVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_voiceAutoTranslateGroupChatEnabl_026a9948);
          local_d4 = (uint)puVar1 ^ 1;
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if ((local_d4 & 1) == 0) {
          uVar3 = local_30;
          FUN_008aa9f0();
          if (((uVar3 & 1) == 0) || (uVar3 = local_30, FUN_008aab60(), (uVar3 & 1) == 0)) {
            local_34 = 1;
          }
          else {
            uVar3 = local_28;
            FUN_008ab75c();
            if ((uVar3 & 1) == 0) {
              uVar4 = local_28;
              _objc_getAssociatedObject(local_28,&DAT_028cde79);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              uVar3 = local_28;
              if (uVar4 == 0) {
                puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                _objc_setAssociatedObject(uVar3,&DAT_028cde79,puVar1,1);
                (*(code *)PTR__objc_release_02578630)(puVar1);
                uVar3 = local_28;
                (*(code *)PTR__objc_retain_02578638)();
                local_60 = uVar3;
                dVar5 = _dispatch_time(0,300000000);
                puVar1 = PTR___dispatch_main_q_02578680;
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = local_60;
                local_88 = PTR___NSConcreteStackBlock_02578660;
                local_80 = 0xc2000000;
                local_7c = 0;
                local_78 = FUN_008aba40;
                local_70 = &DAT_02578c20;
                (*(code *)PTR__objc_retain_02578638)();
                local_68 = uVar3;
                _dispatch_after(dVar5,puVar1,&local_88);
                (*(code *)PTR__objc_release_02578630)(puVar1);
                _objc_storeStrong(&local_68);
                _objc_storeStrong(&local_60,0);
                local_34 = 0;
              }
              else {
                local_34 = 1;
              }
            }
            else {
              local_34 = 1;
            }
          }
        }
        else {
          local_34 = 1;
        }
      }
      else {
        local_34 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

