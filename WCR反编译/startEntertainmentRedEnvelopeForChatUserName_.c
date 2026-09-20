// startEntertainmentRedEnvelopeForChatUserName: @ 0153516c

/* Function Stack Size: 0x18 bytes */

bool WCRefineTopBarProfileCardPresenter::startEntertainmentRedEnvelopeForChatUserName_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  dispatch_time_t dVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  long local_60;
  ID local_58;
  ID local_50;
  long local_48;
  long local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEntertainmentRedEnvelopeFeatur_026b0408);
  if ((IVar2 & 1) == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_HQ);
      local_11 = 0;
      local_34 = 1;
    }
    else {
      lVar5 = local_30;
      FUN_01528c84();
      _objc_retainAutoreleasedReturnValue();
      local_40 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
      lVar1 = local_40;
      if (lVar5 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_1ZPN_SOOo__Nzz);
        local_11 = 0;
        local_34 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = lVar1;
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_entertainmentFunRoomUserNameFrom_026b0418,lVar1);
        _objc_retainAutoreleasedReturnValue();
        local_50 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
        if ((IVar2 == 0) ||
           (IVar2 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,&cf__chatroom_),
           (IVar2 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_1ZPN_SN_ec_J);
          local_11 = 0;
          local_34 = 1;
        }
        else {
          IVar2 = local_50;
          FUN_01535548();
          _objc_retainAutoreleasedReturnValue();
          local_58 = IVar2;
          if (IVar2 != 0) {
            DAT_028e3950 = 1;
            DAT_028e3958 = DAT_028e3958 + 1;
            local_60 = DAT_028e3958;
            dVar6 = _dispatch_time(0,8000000000);
            puVar3 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_88 = PTR___NSConcreteStackBlock_02578660;
            local_80 = 0xc0000000;
            local_7c = 0;
            local_78 = FUN_015357b8;
            local_70 = &DAT_02578c00;
            local_68 = local_60;
            _dispatch_after(dVar6,puVar3,&local_88);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            FUN_01535828(local_58,local_60);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_1ZPN_SelgT_N)
            ;
          }
          local_34 = 1;
          local_11 = IVar2 != 0;
          _objc_storeStrong(&local_58,0);
        }
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

