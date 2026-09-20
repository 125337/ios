// FUN_011323c4 @ 011323c4

void FUN_011323c4(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  byte local_38;
  byte local_37;
  byte local_31;
  undefined *local_30;
  undefined *local_28;
  byte local_19;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatToolbarQuickReplySortMode_026af370);
  puVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatToolbarQuickReplySortAscendi_026af378);
  local_31 = (byte)puVar2;
  local_60 = PTR___NSConcreteGlobalBlock_02578658;
  local_58 = 0xd0800000;
  local_54 = 0;
  local_50 = FUN_01136298;
  local_48 = &DAT_02585a00;
  local_40 = local_30;
  local_38 = local_19 & 1;
  local_37 = local_31 & 1;
  uVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_sortedArrayUsingComparator__0269fae8,&local_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

