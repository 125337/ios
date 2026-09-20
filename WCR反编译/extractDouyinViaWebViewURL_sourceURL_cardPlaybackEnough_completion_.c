// extractDouyinViaWebViewURL:sourceURL:cardPlaybackEnough:completion: @ 0103c1bc

/* Function Stack Size: 0x2c bytes */

void WCRefineLinkParser::extractDouyinViaWebViewURL_sourceURL_cardPlaybackEnough_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ID local_138;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined8 local_b8;
  byte local_b0;
  undefined8 local_a8;
  ID local_a0;
  byte local_91;
  ID local_90;
  ID local_88;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_41;
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
  local_41 = (byte)param_5;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  puVar5 = PTR___dispatch_main_q_02578680;
  if (lVar2 == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_50;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_0103c5e0;
    local_60 = &DAT_025814c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar4;
    _dispatch_async(puVar5,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_7c = 1;
    _objc_storeStrong(&local_58,0);
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_douyinAwemeIDFromURL__026adf78,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 0;
    local_138 = IVar3;
    if (IVar3 == 0) {
      local_138 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_douyinAwemeIDFromURL__026adf78,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_138;
    }
    local_91 = IVar3 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_138;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_douyinHydratePageURLWithAwemeID__026adfa8,local_88,local_40,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
    if (IVar3 == 0) {
      _objc_storeStrong(&local_a0,local_38);
    }
    uVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
    puVar5 = PTR___dispatch_main_q_02578680;
    local_a8 = uVar4;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_a8;
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_0103c704;
    local_d0 = &DAT_02582ee8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_40;
    local_b8 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_a0;
    local_c8 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = IVar3;
    local_b0 = local_41 & 1;
    _dispatch_async(puVar5,&local_e8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_88,0);
    local_7c = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

