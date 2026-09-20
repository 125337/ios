// sortList: @ 01989050

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::sortList_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  byte local_38;
  byte local_31;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_31 = (byte)puVar2;
  local_60 = PTR___NSConcreteGlobalBlock_02578658;
  local_58 = 0xd0800000;
  local_54 = 0;
  local_50 = FUN_019891bc;
  local_48 = &DAT_0258a588;
  local_40 = local_30;
  local_38 = local_31 & 1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sortUsingComparator__0269d168,&local_60);
  _objc_storeStrong(&local_28,0);
  return;
}

