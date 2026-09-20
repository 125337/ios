// FUN_01066e50 @ 01066e50

void FUN_01066e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  ulong local_a8;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  undefined8 local_58;
  byte local_49;
  ulong local_48;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_30;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasMedia_026ada58);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  }
  else {
    local_a8 = *(ulong *)(param_1 + 0x20);
    local_49 = 0;
    bVar1 = local_a8 == 0;
    if (bVar1) {
      local_a8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sourceURL_026ad980);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_a8;
    }
    local_49 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSourceURL__026addf0,local_a8);
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resolvedURL_026ad978);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (uVar3 == 0) {
      local_c8 = *(cfstringStruct **)(param_1 + 0x28);
      if (local_c8 == (cfstringStruct *)0x0) {
        local_d8 = *(cfstringStruct **)(param_1 + 0x20);
        if (local_d8 == (cfstringStruct *)0x0) {
          local_d8 = &cf___;
        }
        local_c8 = local_d8;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setResolvedURL__026addf8,local_c8);
    }
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_0106717c;
    local_68 = &DAT_0257ca68;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_30;
    local_58 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar2;
    _dispatch_async(puVar4,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

