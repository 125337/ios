// FUN_01ef1524 @ 01ef1524

void FUN_01ef1524(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_textFields_026ac830);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = *(cfstringStruct **)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_88 = &cf__g_TTNx;
  }
  pcVar4 = *(cfstringStruct **)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_a0 = &cf_WCR;
  }
  uVar1 = uVar2;
  FUN_01ef17c0(uVar2,local_88,local_a0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = local_38;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01ef1d1c;
  local_48 = &DAT_0258cad0;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_updateItem_mutate__026c7f08,uVar1,&local_60);
  (*(code *)PTR__objc_release_02578630)(lVar5);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

