// FUN_0171bf60 @ 0171bf60

void FUN_0171bf60(long param_1,byte param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  ulong local_60 [3];
  undefined4 local_44;
  ulong local_40;
  long local_38;
  byte local_29;
  long local_28;
  
  uVar2 = param_1 + 0x50;
  local_38 = param_1;
  local_29 = param_2;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_40 = uVar2;
  if (uVar2 == 0) {
    local_44 = 1;
  }
  else {
    if ((local_29 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_notifyFileHelperRedeemSuccessFor_026b39e8,
                 *(undefined8 *)(param_1 + 0x20));
    }
    uVar2 = local_40;
    _objc_getAssociatedObject(local_40,&DAT_028e3f78);
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = uVar2;
    if ((uVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_isEqualToNumber__026a7b80,*(undefined8 *)(param_1 + 0x28)),
       (uVar2 & 1) == 0)) {
      local_44 = 1;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x58) + 1;
      lVar3 = *(long *)(param_1 + 0x30);
      local_68 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_count_0269cfe0);
      if (lVar1 < lVar3) {
        dVar4 = _dispatch_time(0,5000000000);
        puVar5 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_40;
        local_c0 = PTR___NSConcreteStackBlock_02578660;
        local_b8 = 0xc2000000;
        local_b4 = 0;
        local_b0 = FUN_0171c324;
        local_a8 = &DAT_02588610;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = uVar2;
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_retain_02578638)();
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        local_98 = uVar6;
        (*(code *)PTR__objc_retain_02578638)();
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        local_90 = uVar7;
        (*(code *)PTR__objc_retain_02578638)();
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        local_88 = uVar6;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_68;
        uVar6 = *(undefined8 *)(param_1 + 0x48);
        local_80 = uVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = uVar6;
        _dispatch_after(dVar4,puVar5,&local_c0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_a0,0);
        local_44 = 0;
      }
      else {
        _objc_setAssociatedObject(lVar1 - lVar3,local_40,&DAT_028e3f78,0,1);
        local_44 = 1;
      }
    }
    _objc_storeStrong(local_60,0);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

