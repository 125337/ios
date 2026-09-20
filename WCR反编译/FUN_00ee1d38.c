// FUN_00ee1d38 @ 00ee1d38

void FUN_00ee1d38(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  if (uVar6 < uVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_objectAtIndexedSubscript__0269cc78,
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    local_30 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_count_0269cfe0);
    lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
    uVar1 = *(ulong *)(param_1 + 0x48);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_applyAction_toUserName_sync__026ab7d8,*(undefined8 *)(param_1 + 0x50),
               local_30,lVar7 + 1 == lVar2);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
    }
    dVar4 = _dispatch_time(0,350000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar4,puVar5,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_30,0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    _objc_retainBlock();
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar3 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_28 != 0) {
      (**(code **)(local_28 + 0x10))
                (local_28,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18));
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

