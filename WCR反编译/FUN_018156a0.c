// FUN_018156a0 @ 018156a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018156a0(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  double local_1f0;
  long local_168;
  double local_160;
  undefined8 uStack_158;
  double local_150;
  undefined8 uStack_148;
  double local_140;
  undefined8 uStack_138;
  double local_130;
  undefined8 uStack_128;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 uStack_100;
  long local_f8;
  double local_f0;
  undefined8 uStack_e8;
  double local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  double local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  int local_44;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_5;
  _objc_storeStrong(&local_30);
  lVar1 = *(long *)(param_5 + 0x20);
  local_38 = param_5;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = lVar1;
  if (lVar1 == 0) {
    lVar1 = 1;
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    local_78 = 25.0;
    local_80 = 14.0;
    local_88 = param_3 - 50.0;
    local_90 = (double)(long)((local_88 - 28.0) / 3.0);
    local_98 = 0;
    local_70 = param_1;
    local_68 = param_2;
    local_60 = param_3;
    local_58 = param_4;
    local_50 = param_3;
    for (local_a0 = 0; lVar1 = local_a0 + -3, local_a0 < 3; local_a0 = local_a0 + 1) {
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_viewWithTag__026cabe0,
                 "/System/Library/Frameworks/CoreText.framework/CoreText" + local_a0 + 0x2c);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = lVar1;
      if (lVar1 == 0) {
        local_44 = 4;
      }
      else {
        local_1f0 = local_78 + (double)local_a0 * (local_90 + local_80);
        uVar4 = *(undefined8 *)(param_5 + 0x28);
        uVar2 = local_98;
        dVar3 = local_90;
        local_b0 = local_1f0;
        FUN_01815654();
        local_f0 = local_1f0;
        uStack_e8 = uVar2;
        local_e0 = dVar3;
        uStack_d8 = uVar4;
        local_d0 = local_1f0;
        uStack_c8 = uVar2;
        local_c0 = dVar3;
        uStack_b8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setFrame__026ca960);
        lVar1 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_viewWithTag__026cabe0,
                   "/System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore" +
                   local_a0 + 0x40);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = lVar1;
        if (lVar1 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_frame_026ca640);
          local_1f0 = (double)(long)((local_90 - dVar3) / 2.0);
          uStack_110 = 0x4000000000000000;
          uVar2 = 0x4000000000000000;
          local_160 = local_1f0;
          uStack_158 = uVar2;
          local_150 = dVar3;
          uStack_148 = uVar4;
          local_140 = local_1f0;
          uStack_138 = uVar2;
          local_130 = dVar3;
          uStack_128 = uVar4;
          local_118 = local_1f0;
          local_108 = dVar3;
          uStack_100 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setFrame__026ca960);
        }
        lVar1 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_viewWithTag__026cabe0,
                   "/System/Library/Frameworks/Security.framework/Security" + local_a0 + 0x14);
        _objc_retainAutoreleasedReturnValue();
        local_168 = lVar1;
        if (lVar1 != 0) {
          if (local_f8 == 0) {
            local_1f0 = 76.0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_frame_026ca640);
            _CGRectGetMaxY(local_1f0,uVar2,dVar3,uVar4);
            local_1f0 = local_1f0 + 4.0;
          }
          uVar2 = 0;
          uVar4 = 0x4032000000000000;
          dVar3 = local_90;
          FUN_01815654();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,local_1f0,dVar3,uVar4,local_168,PTR_s_setFrame__026ca960);
        }
        _objc_storeStrong(&local_168);
        _objc_storeStrong(&local_f8,0);
        local_44 = 0;
      }
      _objc_storeStrong(&local_a8,0);
    }
    local_44 = 0;
  }
  _objc_storeStrong(lVar1,&local_40,0);
  if (local_44 == 0) {
    local_44 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

