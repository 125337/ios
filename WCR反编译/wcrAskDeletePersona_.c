// wcrAskDeletePersona: @ 017ccc64

/* Function Stack Size: 0x18 bytes */

void WCRefineAIPersonaLibraryViewController::wcrAskDeletePersona_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  ID local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingDeleteName__026b5048,local_28);
  _objc_initWeak(auStack_30,local_18);
  dVar3 = _dispatch_time(0,350000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,auStack_30);
  IVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_28;
  local_48 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar1;
  _dispatch_after(dVar3,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

