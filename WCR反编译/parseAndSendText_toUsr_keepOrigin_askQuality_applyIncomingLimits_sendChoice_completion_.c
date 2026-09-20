// parseAndSendText:toUsr:keepOrigin:askQuality:applyIncomingLimits:sendChoice:completion: @ 0100a014

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x3c bytes */

void WCRefineLinkMediaSender::
     parseAndSendText_toUsr_keepOrigin_askQuality_applyIncomingLimits_sendChoice_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,bool param_6,bool param_7,
               long_long param_8,ID param_9,undefined4 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ID IVar8;
  ID local_1c8;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined8 local_158;
  ID local_150;
  long local_148;
  undefined8 *local_140;
  ID local_138;
  long_long local_130;
  byte local_128;
  byte local_127;
  byte local_126;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined8 *local_100;
  ID local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 *local_d0;
  ID local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  ID local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_70;
  byte local_69;
  ID local_68;
  ID local_60;
  long local_58;
  long_long local_50;
  byte local_43;
  byte local_42;
  byte local_41;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  local_42 = (byte)param_6;
  local_43 = (byte)param_7;
  local_58 = 0;
  local_50 = param_8;
  _objc_storeStrong(&local_58,param_9);
  IVar8 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_69 = 0;
  if (IVar8 == 0) {
    local_1c8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentChatUsername_0269dba0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_1c8;
  }
  else {
    local_1c8 = local_40;
  }
  local_69 = IVar8 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_1c8;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  IVar8 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (IVar8 == 0) {
    if (local_58 != 0) {
      (**(code **)(local_58 + 0x10))(local_58,0,&cf_elnx_J_Y_a);
    }
    local_70 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_startProgressToast_026ad9d8);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c88,local_28,PTR_s_updateProgressToast__026ad910)
    ;
    local_90 = 0;
    local_80 = 0x20000000;
    local_7c = 0x20;
    local_78 = 1;
    local_88 = &local_90;
    dVar3 = _dispatch_time(0,1000000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    puVar4 = puVar5;
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_0100a614;
    local_a8 = &DAT_025841f0;
    local_98 = local_28;
    local_a0 = &local_90;
    _dispatch_after(dVar3,puVar4,&local_c0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    dVar3 = _dispatch_time(0,3000000000);
    _objc_retainAutoreleaseReturnValue(puVar5);
    puVar4 = puVar5;
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar1;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_0100a67c;
    local_d8 = &DAT_025841f0;
    local_c8 = local_28;
    local_d0 = &local_90;
    _dispatch_after(dVar3,puVar4,&local_f0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    dVar3 = _dispatch_time(0,6000000000);
    _objc_retainAutoreleaseReturnValue(puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar1;
    local_118 = 0xc2000000;
    local_114 = 0;
    local_110 = FUN_0100a6e4;
    local_108 = &DAT_025841f0;
    local_f8 = local_28;
    local_100 = &local_90;
    _dispatch_after(dVar3,puVar5,&local_120);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    uVar2 = local_38;
    puVar5 = PTR_WCRefineLinkParser_026ce168;
    local_178 = puVar1;
    local_170 = 0xc2000000;
    local_16c = 0;
    local_168 = FUN_0100a74c;
    local_160 = &DAT_02584280;
    local_138 = local_28;
    lVar6 = local_58;
    local_140 = &local_90;
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = local_41 & 1;
    uVar7 = local_38;
    local_148 = lVar6;
    (*(code *)PTR__objc_retain_02578638)();
    IVar8 = local_60;
    local_158 = uVar7;
    (*(code *)PTR__objc_retain_02578638)();
    local_127 = local_42 & 1;
    local_130 = local_50;
    local_126 = local_43 & 1;
    local_150 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_parseText_completion__026ada70,uVar2,&local_178);
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_148,0);
    __Block_object_dispose(&local_90,8);
    local_70 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

