// FUN_01854500 @ 01854500

void FUN_01854500(long param_1)

{
  ulong uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  FUN_0185401c(*(undefined8 *)(param_1 + 0x20),&cf_title,&cf_Nub_YS);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_beginMultiSelect_026af6f8);
  if ((uVar1 & 1) == 0) {
    local_68 = &cf_onShowMultiSelect_;
    _NSSelectorFromString();
  }
  else {
    local_68 = (cfstringStruct *)PTR_s_beginMultiSelect_026af6f8;
  }
  local_28 = local_68;
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_respondsToSelector__026ca818,local_68);
  if ((uVar1 & 1) != 0) {
    if (local_28 == (cfstringStruct *)PTR_s_beginMultiSelect_026af6f8) {
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),local_28);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),local_28,0);
    }
  }
  dVar2 = _dispatch_time(0,250000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01854718;
  local_40 = &DAT_0257a7a0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  local_38 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar5;
  _dispatch_after(dVar2,puVar3,&local_58);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  return;
}

