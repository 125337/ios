// FUN_0007ab3c @ 0007ab3c

void FUN_0007ab3c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8,byte param_9,
                 byte param_10)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  double dVar6;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  undefined1 local_51;
  undefined4 local_50;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  uVar2 = local_28;
  local_3b = param_10;
  local_3a = param_9;
  local_39 = param_8;
  FUN_00078a1c();
  local_3c = (byte)uVar2;
  if (((local_39 & 1) == 0) || ((local_3a & 1) != 0)) {
    if (((local_39 & 1) != 0) && ((local_3a & 1) != 0)) {
      local_51 = true;
      if (local_30 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        local_51 = true;
        local_78 = param_1;
        local_70 = param_2;
        local_68 = param_3;
        local_60 = param_4;
        if (0.0 < param_3) {
          dVar6 = param_3;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          local_51 = param_1 <= 0.0;
          local_98 = param_3;
          local_90 = dVar6;
          local_88 = param_2;
          local_80 = param_1;
        }
      }
      if ((bool)local_51 == false) {
        _objc_setAssociatedObject(local_28,DAT_026df760,0,1);
      }
      else {
        uVar2 = local_28;
        _objc_getAssociatedObject(local_28,DAT_026df760);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_28;
        uVar1 = DAT_026df760;
        local_a0 = uVar3;
        if ((long)uVar3 < 8) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,uVar3 + 1
                    );
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          FUN_00078cbc(DAT_02323c88 * (double)(long)(local_a0 + 1),local_28);
          local_50 = 1;
          goto LAB_0007b118;
        }
      }
    }
    if ((local_3c & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f6e4);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = uVar2;
      if (uVar2 == 0) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = uVar2;
        while (bVar5 = local_b0 != 0 && local_a8 == 0, local_b0 != 0 && local_a8 == 0) {
          uVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_viewWithTag__026cabe0,0x24f6e4);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_a8;
          local_a8 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tag_026cab98);
          if (uVar2 == 0x7f199) {
            bVar5 = false;
            break;
          }
          uVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_b0;
          local_b0 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        _objc_storeStrong(bVar5,&local_b0,0);
      }
      _objc_storeStrong(&local_a8,0);
    }
    FUN_00082894(local_28);
    FUN_000799f0(local_30,local_38);
    local_50 = 0;
  }
  else if ((local_3b & 1) == 0) {
    FUN_0008282c(local_28);
    local_50 = 1;
  }
  else {
    local_50 = 1;
  }
LAB_0007b118:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

