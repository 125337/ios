// FUN_008bf220 @ 008bf220

/* WARNING: Type propagation algorithm not settling */

byte FUN_008bf220(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_130;
  char *local_a0 [2];
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  long local_60 [4];
  long local_40;
  long local_38;
  char *local_30;
  byte local_21;
  
  local_30 = (char *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar2 = local_38;
  FUN_008bbee0();
  _objc_retainAutoreleasedReturnValue();
  local_60[1] = 0;
  local_68 = 0;
  local_40 = lVar2;
  FUN_008b6dec(lVar2,&local_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_60 + 1,local_68);
  local_60[0] = lVar2;
  if ((local_40 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0), lVar2 == 0)) {
    local_21 = 0;
    local_6c = 1;
  }
  else {
    pcVar3 = "ForwardMessageMgr";
    _objc_getClass();
    pcVar4 = "MMContext";
    local_78 = pcVar3;
    _objc_getClass();
    local_80 = pcVar4;
    if ((local_78 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
      local_21 = 0;
      local_6c = 1;
    }
    else {
      local_88 = (char *)0x0;
      local_90 = (char *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_performSelector__026ca7b8,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_88;
      local_88 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                 local_78);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_90;
      local_90 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (local_90 == (char *)0x0) {
        local_21 = 0;
        local_6c = 1;
      }
      else {
        pcVar3 = local_30;
        FUN_008bcf38();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_s_forwardMessage_fromViewControlle_026a38a8;
        local_a0[0] = pcVar3;
        if (pcVar3 == (char *)0x0) {
          local_21 = 0;
        }
        else {
          pcVar3 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_respondsToSelector__026ca818,
                     PTR_s_forwardMessage_fromViewControlle_026a38a8);
          if (((ulong)pcVar3 & 1) == 0) {
            local_21 = 0;
          }
          else {
            if (local_30 == (char *)0x0) {
              local_130 = local_90;
            }
            else {
              local_130 = local_30;
            }
            _objc_setAssociatedObject(local_130,&DAT_028ce019,local_40,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_90,puVar1,local_40,local_a0[0]);
            local_21 = 1;
          }
        }
        local_6c = 1;
        _objc_storeStrong(local_a0,0);
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
    }
  }
  _objc_storeStrong(local_60);
  _objc_storeStrong(local_60 + 1,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

