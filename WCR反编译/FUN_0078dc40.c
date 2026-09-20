// FUN_0078dc40 @ 0078dc40

byte FUN_0078dc40(undefined8 param_1,ulong param_2,ulong *param_3,ulong *param_4,undefined1 *param_5
                 )

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70 [3];
  int local_54;
  undefined1 *local_50;
  ulong *local_48;
  ulong *local_40;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  local_50 = param_5;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  if ((local_30 == 0) || (param_2 == 0)) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_operationMenuItems_026a1618);
    if ((uVar1 & 1) == 0) {
      local_21 = 0;
      local_54 = 1;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_operationMenuItems_026a1618);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_70[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar1 = local_70[0];
      if ((uVar2 & 1) == 0) {
        local_21 = 0;
        local_54 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = uVar1;
        if (local_50 != (undefined1 *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
          *local_50 = uVar1 != 0;
        }
        for (local_80 = 0; uVar1 = local_80, uVar2 = local_78,
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0), uVar1 < uVar2;
            local_80 = local_80 + 1) {
          uVar1 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
          _objc_retainAutoreleasedReturnValue();
          local_90 = 0;
          local_88 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_action_026a4358);
          if ((uVar1 & 1) != 0) {
            uVar1 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_action_026a4358);
            local_90 = uVar1;
          }
          local_98 = 0;
          uVar1 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
          if ((uVar1 & 1) != 0) {
            uVar2 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_98;
            local_98 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          if (local_90 == local_38) {
            local_a0 = 0;
            uVar1 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_target_026a0dc8);
            if ((uVar1 & 1) != 0) {
              uVar2 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_target_026a0dc8);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = local_a0;
              local_a0 = uVar2;
              (*(code *)PTR__objc_release_02578630)(uVar1);
            }
            if (local_a0 == 0) {
              _objc_storeStrong(&local_a0,local_30);
            }
            uVar2 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_respondsToSelector__026ca818,local_38);
            uVar1 = local_a0;
            if ((uVar2 & 1) == 0) {
              local_54 = 4;
            }
            else {
              if (local_40 != (ulong *)0x0) {
                _objc_retainAutorelease();
                *local_40 = uVar1;
              }
              uVar1 = local_88;
              if (local_48 != (ulong *)0x0) {
                _objc_retainAutorelease();
                *local_48 = uVar1;
              }
              local_21 = 1;
              local_54 = 1;
            }
            _objc_storeStrong(&local_a0,0);
          }
          else {
            local_54 = 4;
          }
          _objc_storeStrong(&local_98);
          _objc_storeStrong(&local_88,0);
          iVar4 = local_54 + -4;
          if (iVar4 != 0) goto LAB_0078e21c;
        }
        iVar4 = 1;
        local_21 = 0;
        local_54 = 1;
LAB_0078e21c:
        _objc_storeStrong(iVar4,&local_78,0);
      }
      _objc_storeStrong(local_70,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

