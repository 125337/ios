// FUN_01f6e42c @ 01f6e42c

void FUN_01f6e42c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long local_108;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_59;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar2 = param_1 + 0x30;
  local_48 = param_1;
  local_40 = param_1;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  FUN_01f6d4bc();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  local_108 = local_50;
  local_59 = 0;
  bVar1 = local_50 == 0;
  if (bVar1) {
    local_108 = param_1 + 0x30;
    _objc_loadWeakRetained();
    local_58 = local_108;
  }
  puVar6 = PTR_WCRVPSheetAction_026cf7b8;
  puVar8 = PTR___NSConcreteStackBlock_02578660;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_01f6ee64;
  local_78 = &DAT_0257ca68;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  local_59 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  local_68 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_actionWithTitle_handler__026b9738,&cf__J_Y_eQ,&local_90);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_WCRVPSheetAction_026cf7b8;
  local_d0 = puVar8;
  local_c8 = 0xc2000000;
  local_c4 = 0;
  local_c0 = FUN_01f6ef10;
  local_b8 = &DAT_0258cf90;
  local_38 = puVar6;
  _objc_copyWeak(auStack_a0,param_1 + 0x30);
  local_98 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  local_a8 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_actionWithTitle_handler__026b9738,&cf__,&local_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  FUN_01f6e854(local_108,&cf_OX_0R,puVar8,&cf_Sm);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_destroyWeak(auStack_a0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

