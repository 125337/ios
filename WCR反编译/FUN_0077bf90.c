// FUN_0077bf90 @ 0077bf90

byte FUN_0077bf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  byte local_14c;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_61;
  undefined8 local_60 [3];
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_7);
  if ((local_30 == 0) || (local_38 == 0)) {
    local_21 = 1;
    local_44 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      uVar3 = local_30;
      FUN_00784350(0);
      if ((uVar3 & 1) == 0) {
        local_60[0] = 0;
        local_61 = 0;
        local_90 = 0;
        FUN_007845d4(local_30,&local_90,&local_61);
        _objc_storeStrong(local_60,local_90);
        lVar4 = local_38;
        local_88 = param_1;
        uStack_80 = param_2;
        local_78 = param_3;
        uStack_70 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,local_30);
        local_14c = (byte)lVar4;
        if ((local_61 & 1) == 0) {
          _CGRectContainsPoint(local_88,uStack_80,local_78,uStack_70,param_4,param_3);
        }
        else {
          local_14c = 1;
        }
        local_21 = local_14c & 1;
        local_44 = 1;
        _objc_storeStrong(local_60,0);
      }
      else {
        local_21 = 1;
        local_44 = 1;
      }
    }
    else {
      local_21 = 1;
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

