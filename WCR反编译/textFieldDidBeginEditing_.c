// textFieldDidBeginEditing: @ 01d5ccdc

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameEditorViewController::textFieldDidBeginEditing_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined1 uVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  uint local_38;
  undefined1 local_31;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar5 = local_28;
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nameField_026bdbf0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  local_31 = 0;
  uVar2 = IVar5 != IVar4;
  bVar3 = false;
  if ((bool)uVar2) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_authorField_026c47f0);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = IVar1 != IVar5;
    local_31 = uVar2;
    local_30 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    uVar2 = local_31;
  }
  local_31 = uVar2;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar6 = PTR___dispatch_main_q_02578680;
  if (!bVar3) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01d5cebc;
    local_48 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = IVar5;
    _dispatch_async(puVar6,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_40,0);
  }
  local_38 = (uint)bVar3;
  _objc_storeStrong(&local_28,0);
  return;
}

