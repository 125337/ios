// previewCurrent @ 01c423f4

/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateLibraryViewController::previewCurrent(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  undefined *local_38;
  uint local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar3 = PTR_WCRefineNameplateHelper_026ce5f8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingActionPath_026c1b48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_absolutePathForRelativePath__026ae8d8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (puVar3 != (undefined *)0x0) {
    dVar4 = _dispatch_time(0,300000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01c425b4;
    local_48 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_28;
    local_40 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar1;
    _dispatch_after(dVar4,puVar5,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  local_2c = (uint)(puVar3 == (undefined *)0x0);
  _objc_storeStrong(&local_28,0);
  return;
}

