// FUN_009cff94 @ 009cff94

void FUN_009cff94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  cfstringStruct *local_c0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  long local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_finished_026a15b0);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setFinished__026a15b8,1);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_MIMEType_026aaf40);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_c0 = &cf_image_jpeg;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_c0;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_009d024c;
    local_80 = &DAT_0257cba8;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_30;
    local_60 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar3 = local_58;
    local_78 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_40;
    local_70 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar1;
    _dispatch_async(puVar4,&local_98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

