// FUN_0003d398 @ 0003d398

void FUN_0003d398(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  dispatch_time_t dVar8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined **local_a0;
  byte local_98;
  byte local_97;
  undefined **local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  undefined1 local_58;
  undefined **local_50;
  byte local_43;
  byte local_42;
  byte local_41;
  ulong local_40;
  uint local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_fixedInviteRule);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_38 = 1;
    }
    else {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_inviteChatRoom);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_000370d0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_40;
      local_41 = uVar5 != 0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_replyText);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_000370d0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_40;
      local_42 = uVar5 != 0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_000370d0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar5 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_28;
      puVar2 = PTR___NSConcreteStackBlock_02578660;
      local_43 = bVar1;
      if ((((local_41 & 1) != 0) || ((local_42 & 1) != 0)) || (bVar1)) {
        ppuVar6 = &local_88;
        local_88 = PTR___NSConcreteStackBlock_02578660;
        local_80 = 0xc2000000;
        local_7c = 0;
        local_78 = FUN_00042384;
        local_70 = &DAT_02579420;
        local_58 = bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        uVar4 = local_40;
        local_68 = uVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = uVar4;
        _objc_retainBlock();
        uVar4 = local_28;
        ppuVar7 = &local_d0;
        local_d0 = puVar2;
        local_c8 = 0xc2000000;
        local_c4 = 0;
        local_c0 = FUN_00042e70;
        local_b8 = &DAT_02579450;
        local_98 = local_42 & 1;
        local_50 = ppuVar6;
        (*(code *)PTR__objc_retain_02578638)();
        uVar3 = local_40;
        local_b0 = uVar4;
        (*(code *)PTR__objc_retain_02578638)();
        ppuVar6 = local_50;
        local_a8 = uVar3;
        local_97 = local_43 & 1;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = ppuVar6;
        _objc_retainBlock();
        bVar1 = (local_41 & 1) == 0;
        local_90 = ppuVar7;
        if (bVar1) {
          (*(code *)ppuVar7[2])();
        }
        else {
          FUN_00043380(local_28,local_40);
          dVar8 = _dispatch_time(0,200000000);
          puVar2 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_after(dVar8,puVar2,local_90);
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        local_38 = (uint)!bVar1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_a8,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_50,0);
        _objc_storeStrong(&local_60,0);
        _objc_storeStrong(&local_68,0);
      }
      else {
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

