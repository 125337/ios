// FUN_000ce9a4 @ 000ce9a4

dword * FUN_000ce9a4(undefined8 param_1)

{
  dword *pdVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  dword *local_150;
  dword *local_c8;
  dword *local_90;
  ulong local_88;
  dword *local_80;
  bool local_69;
  dword *local_68;
  dword *local_60;
  dword *local_58;
  ulong local_50;
  undefined4 local_48;
  dword *local_38;
  ulong local_30;
  dword *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pdVar1 = (dword *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pdVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pdVar1,PTR_s_repeatChatLiftEnabled_0269e7f8);
  if (((ulong)pdVar1 & 1) == 0) {
    local_28 = (dword *)0x0;
    local_48 = 1;
  }
  else {
    uVar2 = local_30;
    FUN_000cf248();
    if ((uVar2 & 1) == 0) {
      local_28 = (dword *)0x0;
      local_48 = 1;
    }
    else {
      uVar2 = local_30;
      FUN_000c8824();
      _objc_retainAutoreleasedReturnValue();
      pdVar1 = local_38;
      local_50 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repeatChatLiftSessionOverrides_0269e848);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_58 = pdVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        local_c8 = (dword *)0x0;
      }
      else {
        local_c8 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_c8;
      }
      local_69 = uVar2 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_c8;
      if (local_69) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      pdVar1 = local_60;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pdVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pdVar1 & 1) == 0) {
        uVar2 = local_50;
        FUN_000d0014();
        if ((uVar2 & 1) == 0) {
          local_28 = (dword *)0x0;
        }
        else {
          local_88 = local_50;
          FUN_000c835c();
          uVar2 = local_30;
          if (local_88 == 0) {
            local_88 = local_30;
            FUN_000cf870();
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                       local_88);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar2,&DAT_028c829c,puVar3,1);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          if (local_88 == 0) {
            local_28 = (dword *)0x0;
          }
          else {
            local_150 = local_38;
            if (local_88 == 2) {
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repeatChatRoomLift_0269e850);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repeatPrivateChatLift_0269e858);
            }
            local_90 = local_150;
            if ((long)local_150 < 0) {
              local_90 = (dword *)0x0;
            }
            if (500 < (long)local_90) {
              local_90 = &section_000001a8.reserved3;
            }
            local_28 = local_90;
          }
        }
      }
      else {
        uVar4 = local_50;
        FUN_000c835c();
        uVar2 = local_30;
        if (uVar4 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_028c829c,puVar3,1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_80 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_integerValue_026ca750);
        if ((long)local_80 < 0) {
          local_80 = (dword *)0x0;
        }
        if (500 < (long)local_80) {
          local_80 = &section_000001a8.reserved3;
        }
        local_28 = local_80;
      }
      local_48 = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

