// presentInputWithTitle:message:defaultText:md5:chatVC:mode: @ 00f49208

/* Function Stack Size: 0x40 bytes */

void WCRefineEmoticonToolsHelper::presentInputWithTitle_message_defaultText_md5_chatVC_mode_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               long_long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  char *local_80;
  undefined *local_78;
  undefined4 local_6c;
  char *local_68;
  long_long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
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
  pcVar4 = "WCUIAlertView";
  local_60 = param_8;
  _objc_getClass();
  local_68 = pcVar4;
  if ((pcVar4 == (char *)0x0) || (local_58 == 0)) {
    local_6c = 1;
  }
  else {
    puVar5 = PTR_WCREmoticonInputProxy_026ceb78;
    _objc_alloc_init();
    local_78 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setChatVC__026ac3a0,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setEmoticonMD5__026ac3a8,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setMode__026ac3b0,local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setSelfRef__0269fb58,local_78);
    dVar6 = _dispatch_time(0,250000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_00f49514;
    local_a8 = &DAT_02582fc8;
    local_80 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_40;
    local_a0 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_78;
    local_98 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_48;
    local_90 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar2;
    _dispatch_after(dVar6,puVar5,&local_c0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_78,0);
    local_6c = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

