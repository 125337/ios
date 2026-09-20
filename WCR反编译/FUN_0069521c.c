// FUN_0069521c @ 0069521c

void FUN_0069521c(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined8 *local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  code *local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  FUN_0069569c();
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar4 = local_28;
    FUN_0069579c();
    if ((uVar4 & 1) == 0) {
      local_38 = 1;
    }
    else {
      uVar4 = local_28;
      FUN_006959f4(local_28,&cf_Kb_gSmR_YS);
      if ((uVar4 & 1) == 0) {
        local_40 = 0;
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
        if ((uVar4 & 1) != 0) {
          uVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_delegate_0269e808);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_40;
          local_40 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        uVar4 = local_40;
        FUN_00695d60();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
        if (uVar4 == 0) {
          local_38 = 1;
        }
        else {
          local_70 = &local_78;
          local_78 = 0;
          local_68 = 0x32000000;
          local_64 = 0x30;
          local_60 = FUN_006961f4;
          local_58 = FUN_00696248;
          uVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
          uVar4 = local_40;
          local_88 = &local_78;
          ppuVar6 = &local_b0;
          local_b0 = PTR___NSConcreteStackBlock_02578660;
          local_a8 = 0xc2000000;
          local_a4 = 0;
          local_a0 = FUN_00696274;
          local_98 = &DAT_0257dd38;
          local_50 = uVar5;
          (*(code *)PTR__objc_retain_02578638)();
          local_90 = uVar4;
          _objc_retainBlock();
          uVar5 = local_28;
          local_80 = ppuVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,
                     PTR_s_addButtonWithTitle_eventAction__026a0f60);
          uVar4 = local_28;
          puVar1 = PTR_s_addButtonWithTitle_eventAction__026a0f60;
          if ((uVar5 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_respondsToSelector__026ca818,
                       PTR_s_addButtonWithTitle__026a1238);
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_addButtonWithTitle__026a1238,&cf_Kb_gSmR_YS);
            }
          }
          else {
            ppuVar6 = local_80;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,puVar1,&cf_Kb_gSmR_YS);
            (*(code *)PTR__objc_release_02578630)(ppuVar6);
          }
          _objc_storeStrong(&local_80);
          _objc_storeStrong(&local_90,0);
          __Block_object_dispose(&local_78,8);
          _objc_storeStrong(&local_50,0);
          local_38 = 0;
        }
        _objc_storeStrong(&local_48);
        _objc_storeStrong(&local_40,0);
      }
      else {
        local_38 = 1;
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

