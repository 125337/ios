// FUN_00179210 @ 00179210

void FUN_00179210(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  int local_44;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar4 = local_28;
  FUN_0017972c();
  if ((uVar4 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      local_38 = 1;
    }
    else {
      uVar4 = local_28;
      FUN_00179bbc();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar4;
      if (uVar4 == 0) {
        local_38 = 1;
      }
      else {
        FUN_00179ec8();
        if ((uVar4 & 1) == 0) {
          uVar4 = local_28;
          FUN_0017a038();
          local_44 = (int)uVar4;
          if (local_44 == 0) {
            local_38 = 1;
          }
          else {
            uVar3 = local_40;
            FUN_0017abd0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar4 & 0xffffffff;
            FUN_0017a184();
            _objc_retainAutoreleasedReturnValue();
            local_50 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar4 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
            if (uVar4 == 0) {
              local_38 = 1;
            }
            else {
              FUN_0017adbc(local_40);
              uVar4 = local_28;
              FUN_0017b118();
              _objc_retainAutoreleasedReturnValue();
              local_58 = uVar4;
              FUN_0017b278(uVar4,&cf_text);
              _objc_retainAutoreleasedReturnValue();
              local_60 = uVar4;
              FUN_0017b4e0(uVar4,local_50);
              _objc_retainAutoreleasedReturnValue();
              local_68 = uVar4;
              FUN_0017b8cc();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar4);
              if (uVar3 == 0) {
                uVar3 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_initDescLabel__0269f980
                          );
                uVar4 = local_28;
                if ((uVar3 & 1) != 0) {
                  FUN_0017ba68();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_initDescLabel__0269f980);
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                }
                local_38 = 0;
              }
              else {
                local_38 = 1;
              }
              _objc_storeStrong(&local_68);
              _objc_storeStrong(&local_60,0);
              _objc_storeStrong(&local_58,0);
            }
            _objc_storeStrong(&local_50,0);
          }
        }
        else {
          local_38 = 1;
        }
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

