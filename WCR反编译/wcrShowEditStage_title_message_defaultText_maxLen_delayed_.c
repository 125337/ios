// wcrShowEditStage:title:message:defaultText:maxLen:delayed: @ 017cb734

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x38 bytes */

void WCRefineAIPersonaLibraryViewController::
     wcrShowEditStage_title_message_defaultText_maxLen_delayed_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5,ID param_6,
               unsigned_int param_7,bool param_8)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [8];
  long_long local_80;
  unsigned_int local_78;
  undefined **local_70;
  undefined1 auStack_68 [12];
  uint local_5c;
  byte local_55;
  unsigned_int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_55 = (byte)param_8;
  local_54 = param_7;
  if (local_38 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcrPresentPromptEditorTitle_mess_026b4fd8,local_40,local_48,local_50,
               param_8 & 1);
    local_5c = 1;
  }
  else {
    _objc_initWeak(auStack_68,local_28);
    ppuVar4 = &local_c0;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_017cba34;
    local_a8 = &DAT_025890d0;
    _objc_copyWeak(auStack_88,auStack_68);
    uVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_48;
    local_a0 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_50;
    local_80 = local_38;
    local_78 = local_54;
    local_98 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = uVar2;
    _objc_retainBlock();
    bVar1 = (local_55 & 1) != 0;
    local_70 = ppuVar4;
    if (bVar1) {
      dVar5 = _dispatch_time(0,350000000);
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar5,puVar6,local_70);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      (*(code *)ppuVar4[2])();
    }
    local_5c = (uint)!bVar1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_a0,0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_68);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

