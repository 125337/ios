// wcr_sendFileAtPathToFileHelper:displayName: @ 00fafae4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

bool WCRefineHelper::wcr_sendFileAtPathToFileHelper_displayName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  uint local_c8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  undefined8 local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_51 = 0;
  local_c8 = 1;
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = (uint)puVar2 ^ 1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_c8 & 1) == 0) {
    local_78 = 0;
    local_68 = 0x20000000;
    local_64 = 0x20;
    local_60 = 0;
    ppuVar4 = &local_b8;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_00fafe18;
    local_a0 = &DAT_025839e0;
    lVar3 = local_40;
    local_70 = &local_78;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_48;
    local_98 = lVar3;
    local_88 = &local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = uVar1;
    _objc_retainBlock();
    puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_80 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar2 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar5 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_sync();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      (*(code *)local_80[2])();
    }
    local_21 = *(byte *)(local_70 + 3) & 1;
    local_58 = 1;
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_98,0);
    __Block_object_dispose(&local_78,8);
  }
  else {
    local_21 = 0;
    local_58 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

