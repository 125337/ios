// FUN_00820410 @ 00820410

void FUN_00820410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  dispatch_queue_t pdVar4;
  undefined8 uVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_44;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_1;
  if ((local_30 == 0) || (local_38 != 0)) {
    local_44 = 1;
  }
  else if (*(long *)(param_1 + 0x30) == DAT_028cd1c8) {
    uVar2 = DAT_028cd0a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cd0a0,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20));
    if ((uVar2 & 1) == 0) {
      local_44 = 1;
    }
    else {
      _objc_storeStrong(&DAT_028cd0a8,local_30);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_copy_0269d150);
      uVar5 = DAT_028cd0b0;
      DAT_028cd0b0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      pdVar4 = _dispatch_get_global_queue(0x11,0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_00820684;
      local_88 = &DAT_02580660;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = lVar1;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      uStack_68 = *(undefined8 *)(param_1 + 0x40);
      local_70 = *(undefined8 *)(param_1 + 0x38);
      local_60 = *(undefined8 *)(param_1 + 0x48);
      local_78 = uVar5;
      _dispatch_async(pdVar4,&local_a0);
      (*(code *)PTR__objc_release_02578630)(pdVar4);
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_80,0);
      local_44 = 0;
    }
  }
  else {
    local_44 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

