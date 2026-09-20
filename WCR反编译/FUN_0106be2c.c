// FUN_0106be2c @ 0106be2c

void FUN_0106be2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_b0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  bool local_51;
  undefined *local_50;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_30;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_51 = false;
  if (lVar1 == 0) {
    local_b0 = (undefined *)0x0;
  }
  else {
    local_b0 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = local_b0;
  }
  local_51 = lVar1 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b0;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_extractPipixiaFromHTML_sourceURL_026ae118,local_48,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___dispatch_main_q_02578680;
  local_60 = uVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_0106c0cc;
  local_80 = &DAT_0257cb48;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = uVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_60;
  local_68 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar2;
  _dispatch_async(puVar3,&local_98);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

