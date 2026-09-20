// FUN_01718dfc @ 01718dfc

void FUN_01718dfc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  long local_90;
  undefined1 auStack_88 [8];
  long local_80;
  undefined4 local_78;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  uVar4 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e3f78);
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar4;
  if ((uVar4 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToNumber__026a7b80,local_60),
     lVar6 = local_40, (uVar4 & 1) == 0)) {
    local_78 = 1;
  }
  else {
    lVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (lVar6 < lVar5) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isRedeemContextValidWithNavContr_026b39e0,local_50,local_58);
      if ((uVar4 & 1) == 0) {
        _objc_setAssociatedObject(local_28,&DAT_028e3f78,0,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf__y);
        local_78 = 1;
      }
      else {
        lVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_28;
        puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_80 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_stringWithFormat__0269cca8,&cf_ck_WO_kQQbc_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_showToast__026b3a18);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _objc_initWeak(auStack_88,local_28);
        uVar4 = local_28;
        uVar3 = local_48;
        lVar6 = local_80;
        local_e8 = PTR___NSConcreteStackBlock_02578660;
        local_e0 = 0xc2000000;
        local_dc = 0;
        local_d8 = FUN_0171bf60;
        local_d0 = &DAT_02588640;
        _objc_copyWeak(auStack_98,auStack_88);
        lVar5 = local_80;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_60;
        local_c8 = lVar5;
        (*(code *)PTR__objc_retain_02578638)();
        lVar5 = local_38;
        local_c0 = uVar1;
        local_90 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_50;
        local_b8 = lVar5;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_58;
        local_b0 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_48;
        local_a8 = uVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_redeemThemeBoxCode_withWXID_comp_026b3a08,lVar6,uVar3,&local_e8);
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_a8,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_b8,0);
        _objc_storeStrong(&local_c0,0);
        _objc_storeStrong(&local_c8,0);
        _objc_destroyWeak(auStack_98);
        _objc_destroyWeak(auStack_88);
        _objc_storeStrong(&local_80,0);
        local_78 = 0;
      }
    }
    else {
      _objc_setAssociatedObject(lVar6 - lVar5,local_28,&DAT_028e3f78,0,1);
      local_78 = 1;
    }
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

