// FUN_00f3b210 @ 00f3b210

void FUN_00f3b210(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_90;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  bool local_39;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x30);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_emoticonFilePathForMD5__026ac000,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_39 = false;
  local_28 = lVar1;
  if (lVar1 == 0) {
    local_90 = 0;
  }
  else {
    local_90 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (0,*(undefined8 *)PTR__CGSizeZero_025782f8,
               *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8),*(undefined8 *)(param_1 + 0x38),
               local_90,PTR_s_processGIFAtPath_scale_targetSiz_026ac198,lVar1);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_90;
  }
  local_39 = lVar1 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_90;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_00f3b43c;
  local_68 = &DAT_02582b88;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = uVar3;
  local_50 = *(undefined8 *)(param_1 + 0x38);
  local_48 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar3;
  _dispatch_async(puVar2,&local_80);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

