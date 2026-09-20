// FUN_017ab33c @ 017ab33c

void FUN_017ab33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  uint local_c4;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  byte local_6d;
  undefined4 local_6c;
  ulong local_68;
  ulong local_60;
  ulong local_58 [3];
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  (*DAT_028e4140)(local_28,local_30,local_38,local_40);
  uVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_58[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_URL_026a1c90);
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_absoluteString_026a1de0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar1;
  if (uVar1 == 0) {
    local_6c = 1;
    goto LAB_017ab660;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_containsString__0269d0b0,&cf_addchatroombyinvite);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_containsString__0269d0b0,&cf_addchatroombyqrcode);
    local_c4 = 0;
    if ((uVar1 & 1) != 0) goto LAB_017ab4d0;
  }
  else {
LAB_017ab4d0:
    uVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,&cf_weixin___);
    local_c4 = (uint)uVar1 ^ 1;
  }
  local_6d = (byte)local_c4 & 1;
  if ((local_c4 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      dVar4 = _dispatch_time(0,300000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc0000000;
      local_8c = 0;
      local_88 = FUN_017b6108;
      local_80 = &DAT_025797b0;
      local_78 = local_28;
      _dispatch_after(dVar4,puVar2,&local_98);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  local_6c = 0;
LAB_017ab660:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

