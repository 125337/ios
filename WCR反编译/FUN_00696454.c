// FUN_00696454 @ 00696454

void FUN_00696454(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  dispatch_time_t dVar5;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  ulong local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_38 = 1;
  }
  else {
    FUN_0069687c();
    if ((uVar1 & 1) == 0) {
      local_38 = 1;
    }
    else {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        puVar3 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        local_48 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_40;
        local_40 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&local_48,0);
      }
      if (local_40 == (undefined *)0x0) {
        local_38 = 1;
      }
      else {
        pcVar4 = &cf_AddFriendEntryViewController;
        _NSClassFromString();
        local_50 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_38 = 1;
        }
        else {
          _objc_alloc_init();
          local_58 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_38 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
            puVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_respondsToSelector__026ca818,
                       PTR_s_PushViewController_animated__0269cd40);
            if (((ulong)puVar2 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_pushViewController_animated__0269d590,local_58,1);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_PushViewController_animated__0269cd40,local_58,1);
            }
            dVar5 = _dispatch_time(0,350000000);
            puVar2 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_58;
            local_88 = PTR___NSConcreteStackBlock_02578660;
            local_80 = 0xc2000000;
            local_7c = 0;
            local_78 = FUN_00696918;
            local_70 = &DAT_02578e60;
            (*(code *)PTR__objc_retain_02578638)();
            uVar1 = local_28;
            local_68 = pcVar4;
            (*(code *)PTR__objc_retain_02578638)();
            local_60 = uVar1;
            _dispatch_after(dVar5,puVar2,&local_88);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _objc_storeStrong(&local_60);
            _objc_storeStrong(&local_68,0);
            local_38 = 0;
          }
          _objc_storeStrong(&local_58,0);
        }
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

