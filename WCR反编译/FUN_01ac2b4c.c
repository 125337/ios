// FUN_01ac2b4c @ 01ac2b4c

void FUN_01ac2b4c(long param_1)

{
  long lVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *local_68;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_68 = &cf_bT_N_;
  }
  else {
    local_68 = *(cfstringStruct **)(param_1 + 0x28);
  }
  FUN_01a9c680(uVar7,&cf_title,local_68);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_beginMultiSelect_026af6f8);
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    pcVar3 = &cf_onShowMultiSelect_;
    _NSSelectorFromString(&cf_onShowMultiSelect_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((uVar2 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      pcVar3 = &cf_onShowMultiSelect_;
      _NSSelectorFromString(&cf_onShowMultiSelect_);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,pcVar3,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_beginMultiSelect_026af6f8);
  }
  dVar4 = _dispatch_time(0,350000000);
  puVar5 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01ac2d90;
  local_38 = &DAT_0257a7a0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  local_30 = uVar7;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar6;
  _dispatch_after(dVar4,puVar5,&local_50);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  return;
}

