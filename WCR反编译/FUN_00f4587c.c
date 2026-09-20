// FUN_00f4587c @ 00f4587c

void FUN_00f4587c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x38);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_preparedVideoEmoticonData__026ac2c8,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_gifDataFromVideoAtPath__026ac2d0,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x38);
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_preparedVideoEmoticonData__026ac2c8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_30,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  _NSLog(&cf__wcr__emoticon_videosenddataofficial__luprepared__lu);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_28;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_00f45acc;
  local_50 = &DAT_0257a740;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = lVar1;
  local_38 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar2;
  _dispatch_async(puVar4,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_28,0);
  return;
}

