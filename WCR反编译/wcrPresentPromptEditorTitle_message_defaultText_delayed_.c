// wcrPresentPromptEditorTitle:message:defaultText:delayed: @ 017cbc3c

/* Function Stack Size: 0x2c bytes */

void WCRefineAIPersonaLibraryViewController::
     wcrPresentPromptEditorTitle_message_defaultText_delayed_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined **local_60;
  undefined1 auStack_58 [15];
  byte local_49;
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
  local_49 = (byte)param_6;
  _objc_initWeak(auStack_58,local_28);
  ppuVar3 = &local_a0;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_017cbe8c;
  local_88 = &DAT_02588b00;
  _objc_copyWeak(auStack_68,auStack_58);
  uVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_40;
  local_80 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_48;
  local_78 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar1;
  _objc_retainBlock();
  local_60 = ppuVar3;
  if ((local_49 & 1) == 0) {
    (*(code *)ppuVar3[2])();
  }
  else {
    dVar4 = _dispatch_time(0,350000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar4,puVar5,local_60);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

