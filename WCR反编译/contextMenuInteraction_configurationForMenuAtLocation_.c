// contextMenuInteraction:configurationForMenuAtLocation: @ 0177d6a4

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRefinePluginContextMenuDelegate::contextMenuInteraction_configurationForMenuAtLocation_
          (WCRefinePluginContextMenuDelegate *this,ID param_1,SEL param_2,ID param_3,CGPoint param_4
          )

{
  ID IVar1;
  undefined *puVar2;
  ID local_48;
  ID local_40 [2];
  SEL local_30;
  ID local_28;
  
  local_40[1] = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_actions_0269f150);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIContextMenuConfiguration_026ce380;
  local_40[0] = IVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_configurationWithIdentifier_prev_0269fb30,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(local_40 + 1,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

