// FUN_016c1f60 @ 016c1f60

void FUN_016c1f60(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  char *local_a0;
  bool local_49;
  char *local_48;
  char *local_40;
  char *local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_28 = 1;
    goto LAB_016c22d4;
  }
  uVar3 = local_18;
  FUN_016aa360();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar3;
  FUN_016ac0a4();
  if ((uVar3 & 1) == 0) {
    local_28 = 1;
  }
  else {
    uVar3 = local_30;
    FUN_016c2324();
    if ((uVar3 & 1) == 0) {
      FUN_016abf68(&cf_eN_gN_d>e_);
      local_28 = 1;
    }
    else {
      local_a0 = "ForwardMessageLogicController";
      _objc_getClass();
      local_49 = local_a0 == (char *)0x0;
      local_38 = local_a0;
      if (local_49) {
        local_a0 = (char *)0x0;
      }
      else {
        _objc_alloc_init();
        local_48 = local_a0;
      }
      local_49 = !local_49;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = local_a0;
      if (local_49) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      puVar1 = PTR_s_forwardMessage__026a0d68;
      if (local_40 == (char *)0x0) {
LAB_016c229c:
        FUN_016abf68(&cf_lS1Y_lSc6RhVNS_u);
        local_28 = 0;
      }
      else {
        pcVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_forwardMessage__026a0d68);
        if (((ulong)pcVar4 & 1) == 0) goto LAB_016c229c;
        _objc_setAssociatedObject(local_18,&DAT_028e3f00,local_40,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar1,local_30);
        local_28 = 1;
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_30,0);
LAB_016c22d4:
  _objc_storeStrong(&local_18,0);
  return;
}

