// FUN_00f4e110 @ 00f4e110

void FUN_00f4e110(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 local_90;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  bool local_39;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x38);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar2,PTR_s_loadOAImageDataWithUrl_base64__026ac498,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  local_39 = false;
  if (lVar2 == 0) {
    local_90 = 0;
  }
  else {
    local_90 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_prepareImageDataForEmoticon__026ac1b8,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_90;
  }
  local_39 = lVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_90;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_00f4e360;
  local_68 = &DAT_02583088;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_30;
  local_60 = lVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar1;
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  local_48 = *(undefined8 *)(param_1 + 0x38);
  _dispatch_async(puVar3,&local_80);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

