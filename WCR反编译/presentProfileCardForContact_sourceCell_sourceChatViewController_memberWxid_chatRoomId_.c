// presentProfileCardForContact:sourceCell:sourceChatViewController:memberWxid:chatRoomId: @ 0153a85c

/* Function Stack Size: 0x38 bytes */

void __thiscall
WCRefineTopBarProfileCardPresenter::
presentProfileCardForContact_sourceCell_sourceChatViewController_memberWxid_chatRoomId_
          (WCRefineTopBarProfileCardPresenter *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          ID param_5,ID param_6,ID param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98 [2];
  ID local_88;
  undefined **local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  if (local_38 == 0) {
    local_5c = 1;
  }
  else {
    uVar2 = local_50;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_58;
    local_68 = uVar2;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar3;
    FUN_01539224();
    uVar3 = local_40;
    ppuVar4 = &local_d8;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_0153ab64;
    local_c0 = &DAT_02586650;
    local_88 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_48;
    local_b8 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_68;
    local_b0 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_70;
    local_a8 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_38;
    local_a0 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_98[0] = lVar1;
    _objc_retainBlock();
    puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_80[0] = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar6 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar5 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      (*(code *)local_80[0][2])();
    }
    _objc_storeStrong(local_80);
    _objc_storeStrong(local_98,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

