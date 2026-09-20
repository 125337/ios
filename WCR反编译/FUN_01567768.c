// FUN_01567768 @ 01567768

void FUN_01567768(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_38 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_performWithoutChatAvatarProfileC_026a5f80);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  return;
}

