// FUN_0029487c @ 0029487c

void FUN_0029487c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_8c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_48;
  byte local_31;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_24 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _WCRefineVoiceDataFromMediaPath(lVar1,&local_24);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_8c = 0;
  if (lVar1 != 0) {
    lVar1 = local_30;
    _WCRefineSendVoiceDataToChat
              (local_30,local_24,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x30));
    local_8c = (byte)lVar1;
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  local_31 = local_8c & 1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_00294a5c;
  local_60 = &DAT_02579420;
  local_48 = local_31 & 1;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_58 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar4;
  _dispatch_async(puVar2,&local_78);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_30,0);
  return;
}

