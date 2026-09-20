// FUN_016a6fa4 @ 016a6fa4

void FUN_016a6fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar4;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined **ppuVar3;
  
  ppuVar3 = &local_28;
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(ppuVar3,param_3);
  uVar2 = (uint)ppuVar3;
  _WCRLongPressMenuCustomizeActive();
  if ((uVar2 & 1) != 0) {
    puVar4 = PTR_WCRefinePluginIconCatalog_026ce4e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_applyLongPressOrderToMenuItems__026a9ac0
               ,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_28 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  (*DAT_028e3de0)(local_18,local_20,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

