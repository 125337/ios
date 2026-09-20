// FUN_007b4dec @ 007b4dec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007b4dec(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined *local_198;
  undefined *local_d8;
  undefined *local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  undefined8 local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  uint local_2c;
  undefined *local_28;
  undefined **ppuVar3;
  
  ppuVar3 = &local_28;
  local_28 = (undefined *)0x0;
  _objc_storeStrong(ppuVar3,param_5);
  uVar2 = (uint)ppuVar3;
  if (local_28 == (undefined *)0x0) {
    local_2c = 1;
  }
  else {
    FUN_007ac894();
    if ((uVar2 & 1) == 0) {
      FUN_007b5574(local_28);
      local_2c = 1;
    }
    else {
      local_48 = (undefined *)0x0;
      puVar4 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026f4658);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_28;
      local_50 = puVar4;
      _objc_getAssociatedObject(local_28,DAT_026f4660);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_50;
      local_58 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      if ((puVar4 != (undefined *)0x0) && (bVar1 = false, local_58 != (undefined *)0x0)) {
        puVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_integerValue_026ca750);
        bVar1 = puVar5 == local_48;
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_applyAppearance_026a8238);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_reloadTabs_026a8240);
        FUN_007b56a0(local_50,local_28);
        FUN_007b5940(local_28);
        local_2c = 1;
      }
      else {
        FUN_007b5980(local_28);
        puVar4 = local_28;
        FUN_007b5c08();
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_bounds_026ca548);
        local_88 = param_1;
        local_80 = param_2;
        local_78 = param_3;
        local_70 = param_4;
        _CGRectGetWidth(param_1,param_2);
        uVar7 = 0x3ff0000000000000;
        local_68 = param_1;
        if (param_1 < 1.0) {
          puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_a8 = param_1;
          local_a0 = uVar7;
          local_98 = param_3;
          local_90 = param_4;
          local_68 = param_3;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        local_198 = local_50;
        bVar1 = local_50 == (undefined *)0x0;
        if (bVar1) {
          local_198 = PTR_WCRefineTelegramTabStripView_026ce638;
          _objc_alloc();
          dVar9 = local_68;
          dVar6 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineTelegramTabStripView_026ce638,PTR_s_preferredHeight_026a8248);
          uVar8 = 0;
          uVar7 = 0;
          FUN_007b5da0();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,uVar8,dVar9,dVar6,local_198,PTR_s_initWithFrame__026ca6e8);
          local_d8 = local_198;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_198;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        FUN_007b56a0(local_b0,local_28);
        _objc_setAssociatedObject(local_28,DAT_026f4658,local_b0,1);
        puVar5 = local_28;
        FUN_007b5dec(local_28,local_b0,local_48);
        puVar4 = local_28;
        uVar7 = DAT_026f4660;
        bVar1 = ((ulong)puVar5 & 1) != 0;
        if (bVar1) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_48)
          ;
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar4,uVar7,puVar5,1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_setAssociatedObject(local_28,DAT_026f4668,0,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadTabs_026a8240);
          FUN_007b5940(local_28);
        }
        else {
          FUN_007b6264(local_28);
        }
        local_2c = (uint)!bVar1;
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

