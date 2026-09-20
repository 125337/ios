// FUN_00514c30 @ 00514c30

void FUN_00514c30(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long local_f8;
  long local_68;
  byte local_59;
  long local_58 [3];
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  lVar7 = param_1 + 0x58;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar7;
  if ((DAT_028cb058 & 1) == 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_3c = 1;
  }
  else if (lVar7 == 0) {
    DAT_028cb058 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,DAT_028caff0);
    _objc_storeStrong(&DAT_028caff0,0);
    lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_3c = 1;
  }
  else {
    uVar9 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18);
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
    lVar7 = local_38;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (uVar9 < uVar3) {
      lVar7 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar7,PTR_s_objectAtIndexedSubscript__0269cc78,
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18));
      _objc_retainAutoreleasedReturnValue();
      local_59 = 0;
      local_68 = 0;
      lVar8 = *(long *)(param_1 + 0x60);
      local_58[0] = lVar7;
      if (lVar8 == 1) {
        FUN_00515540(0);
        local_59 = (byte)lVar7;
      }
      else if (lVar8 == 2) {
        FUN_005159dc(0);
        local_59 = (byte)lVar7;
      }
      else if (lVar8 == 3) {
        FUN_00515c9c(lVar7,*(undefined8 *)(param_1 + 0x28));
        local_59 = (byte)lVar7;
      }
      else if (lVar8 == 4) {
        FUN_00516074(lVar7,*(undefined8 *)(param_1 + 0x30));
        local_59 = lVar7 != 0;
        local_68 = lVar7;
      }
      else if (lVar8 == 5) {
        FUN_0051668c(0);
        local_59 = (byte)lVar7;
      }
      else if (lVar8 == 6) {
        FUN_005168ac(0);
        local_59 = (byte)lVar7;
      }
      else if ((lVar8 != 7) && (lVar8 == 8)) {
        FUN_00516a68(lVar7,*(undefined8 *)(param_1 + 0x38));
        local_59 = (byte)lVar7;
      }
      if (*(long *)(param_1 + 0x60) == 7) {
        local_59 = 1;
      }
      if ((local_59 & 1) != 0) {
        if (*(long *)(param_1 + 0x60) == 4) {
          local_f8 = local_68;
        }
        else {
          local_f8 = 1;
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 8);
        *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + local_f8;
      }
      lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 8);
      *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
      if (DAT_028caff0 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,DAT_028caff0);
      }
      puVar5 = PTR_WCRefineHelper_026ce000;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      FUN_00513cfc();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf____lu__lu);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showWeToastLoadingWithText__0269cea8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = DAT_028caff0;
      DAT_028caff0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      dVar6 = _dispatch_time(0,(long)(*(double *)(param_1 + 0x68) * 1000000000.0));
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar6,puVar4,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28))
      ;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(local_58,0);
      local_3c = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      FUN_00513cfc();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      FUN_00515398(lVar7);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar2 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = 0;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

