// FUN_008b6378 @ 008b6378

void FUN_008b6378(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_70 [2];
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined *local_28;
  undefined **ppuVar2;
  
  ppuVar2 = &local_28;
  local_28 = (undefined *)0x0;
  _objc_storeStrong(ppuVar2,param_1);
  uVar1 = (uint)ppuVar2;
  FUN_008b4e10();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    puVar3 = local_28;
    FUN_008b4eac();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    FUN_008b50d8();
    if (((ulong)puVar3 & 1) == 0) {
      local_38 = 1;
    }
    else {
      puVar3 = local_40;
      FUN_008b69b4();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_008b6b2c(&cf_eN_gN_d>e_);
        local_38 = 1;
      }
      else {
        pcVar4 = "ForwardMessageMgr";
        _objc_getClass();
        pcVar5 = "MMContext";
        local_48 = pcVar4;
        _objc_getClass();
        local_50 = pcVar5;
        if ((local_48 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
          FUN_008b6b2c(&cf_lS1Y_gRNS_u);
          local_38 = 1;
        }
        else {
          local_58 = (char *)0x0;
          local_60 = (char *)0x0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
          if (((ulong)pcVar5 & 1) != 0) {
            pcVar5 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_currentContext_0269d5f8);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_58;
            local_58 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          if ((local_58 != (char *)0x0) &&
             (pcVar4 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
             ((ulong)pcVar4 & 1) != 0)) {
            pcVar5 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getService__0269d170,local_48);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_60;
            local_60 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          if (local_60 == (char *)0x0) {
            FUN_008b6b2c(&cf_lS1Y__thVNS_u);
            local_38 = 1;
          }
          else {
            puVar3 = local_28;
            FUN_008b6c68();
            _objc_retainAutoreleasedReturnValue();
            local_70[0] = puVar3;
            if (puVar3 == (undefined *)0x0) {
              puVar6 = PTR__OBJC_CLASS___UIApplication_026ce010;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = local_70[0];
              local_70[0] = puVar8;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar6);
            }
            puVar3 = PTR_s_forwardMessage_fromViewControlle_026a38a8;
            if (local_70[0] == (undefined *)0x0) {
              FUN_008b6b2c(&cf_lS1Y__bN0RVc6RhV);
              local_38 = 1;
            }
            else {
              pcVar4 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_respondsToSelector__026ca818,
                         PTR_s_forwardMessage_fromViewControlle_026a38a8);
              if (((ulong)pcVar4 & 1) == 0) {
                FUN_008b6b2c(&cf_lS1Y_cSNS_u);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_60,puVar3,local_40,local_70[0]);
              }
              local_38 = 0;
            }
            _objc_storeStrong(local_70,0);
          }
          _objc_storeStrong(&local_60);
          _objc_storeStrong(&local_58,0);
        }
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

