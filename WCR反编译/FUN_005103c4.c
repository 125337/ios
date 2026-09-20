// FUN_005103c4 @ 005103c4

void FUN_005103c4(double param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined1 auStack_148 [8];
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined **local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined **local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined **local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78;
  undefined **local_70;
  int local_64;
  undefined1 auStack_60 [12];
  uint local_54;
  cfstringStruct *local_50 [3];
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = &cf_WCActionSheet;
  _NSClassFromString();
  local_38 = pcVar2;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,&cf_beVNS_MR_R_);
  local_50[0] = pcVar2;
  if (pcVar2 != (cfstringStruct *)0x0) {
    _objc_initWeak(auStack_60,local_28);
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar5 = local_30;
    puVar3 = PTR___NSConcreteStackBlock_02578660;
    ppuVar4 = &local_a0;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_00512c70;
    local_88 = &DAT_0257d928;
    local_78 = (int)param_1;
    local_64 = (int)param_1;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = uVar5;
    _objc_retainBlock();
    uVar5 = local_30;
    pcVar1 = local_50[0];
    local_c8 = puVar3;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_00512d34;
    local_b0 = &DAT_02579910;
    local_70 = ppuVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_S_MR_R_hQ,&local_c8);
    pcVar1 = local_50[0];
    ppuVar4 = local_70;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_00512d88;
    local_d8 = &DAT_02579910;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf___,&local_f0);
    pcVar1 = local_50[0];
    ppuVar4 = local_70;
    local_118 = PTR___NSConcreteStackBlock_02578660;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = FUN_00512dc0;
    local_100 = &DAT_02579910;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf___,&local_118);
    pcVar1 = local_50[0];
    ppuVar4 = local_70;
    local_140 = PTR___NSConcreteStackBlock_02578660;
    local_138 = 0xc2000000;
    local_134 = 0;
    local_130 = FUN_00512df8;
    local_128 = &DAT_02579910;
    (*(code *)PTR__objc_retain_02578638)();
    local_120 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf___,&local_140);
    pcVar1 = local_50[0];
    local_170 = PTR___NSConcreteStackBlock_02578660;
    local_168 = 0xc2000000;
    local_164 = 0;
    local_160 = FUN_00512e30;
    local_158 = &DAT_0257c218;
    _objc_copyWeak(auStack_148,auStack_60);
    uVar5 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf__INeV,&local_170);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50[0],PTR_s_setCancelButtonTitle_eventAction_026a0f68,&cf_Sm,0);
    pcVar1 = local_50[0];
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    _objc_storeStrong(&local_150);
    _objc_destroyWeak(auStack_148);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_80,0);
    _objc_destroyWeak(auStack_60);
  }
  local_54 = (uint)(pcVar2 == (cfstringStruct *)0x0);
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

