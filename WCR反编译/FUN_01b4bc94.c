// FUN_01b4bc94 @ 01b4bc94

void FUN_01b4bc94(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  dVar1 = _dispatch_time(0,300000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01b4bf8c;
  local_48 = &DAT_0257a7a0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  local_40 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar4;
  _dispatch_after(dVar1,puVar2,&local_60);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar5 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_beginMultiSelect_026af6f8);
  if ((uVar5 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_onShowMultiSelect__026af700);
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_onShowMultiSelect__026af700,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_beginMultiSelect_026af6f8);
  }
  dVar1 = _dispatch_time(0,500000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_01b4bfcc;
  local_80 = &DAT_025839b0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  local_78 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_70 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar3;
  _dispatch_after(dVar1,puVar2,&local_98);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_40,0);
  return;
}

