// wcr_sendVideoAtPath:toContact:completion: @ 00fb5dc4

/* Function Stack Size: 0x28 bytes */

void WCRefineHelper::wcr_sendVideoAtPath_toContact_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  dispatch_queue_t pdVar6;
  uint local_c4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  undefined **local_90;
  uint local_88;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  uVar2 = local_48;
  ppuVar3 = &local_78;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_00fb60f4;
  local_60 = &DAT_0257ca98;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar2;
  _objc_retainBlock();
  lVar4 = local_38;
  local_50 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_81 = 0;
  local_c4 = 1;
  if ((lVar4 != 0) && (local_c4 = 1, local_40 != 0)) {
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c4 = (uint)puVar5 ^ 1;
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  bVar1 = (local_c4 & 1) == 0;
  if (bVar1) {
    pdVar6 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_38;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_00fb622c;
    local_a8 = &DAT_0257cb48;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar3 = local_50;
    local_a0 = lVar4;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = local_40;
    local_90 = ppuVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar4;
    _dispatch_async(pdVar6,&local_c0);
    (*(code *)PTR__objc_release_02578630)(pdVar6);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_a0,0);
  }
  else {
    (*(code *)local_50[2])(local_50,0);
  }
  local_88 = (uint)!bVar1;
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

