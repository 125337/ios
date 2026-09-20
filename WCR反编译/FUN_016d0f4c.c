// FUN_016d0f4c @ 016d0f4c

void FUN_016d0f4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar3;
  uVar2 = local_20;
  FUN_016aa360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_38 = uVar2;
  if (uVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
  }
  else {
    uVar2 = local_20;
    FUN_016bc52c();
    FUN_016bca74(uVar3,uVar2 & 0xffffffff,&cf_lp_message_repo,&cf_OSVY,&cf_icons_outlined_chats,
                 PTR_s_WCRefine_onLongPressSaveToMessag_026b2b10);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar3 = local_30;
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_016bca74(uVar3,(ulong)puVar5 & 0xffffffff,&cf_lp_repeat,&cf_Y,&cf_icons_filled_nearby_hot,
                 PTR_s_WCRefine_onLongPressRepeat__026b2af0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar3 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

