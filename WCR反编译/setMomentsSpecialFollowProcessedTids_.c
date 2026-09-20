// setMomentsSpecialFollowProcessedTids: @ 02166620

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setMomentsSpecialFollowProcessedTids_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  ulong uVar3;
  SEL SVar4;
  ulong local_58;
  ID local_50;
  ulong local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  local_50 = IVar1;
  FUN_01fd1d24(local_48,1000);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
  uVar3 = local_58;
  if (1000 < uVar2) {
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    local_28 = uVar2 - 1000;
    local_30 = 1000;
    local_18 = 1000;
    local_20 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_subarrayWithRange__0269d848,local_28,1000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_58;
    local_58 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  IVar1 = local_50;
  uVar3 = local_58;
  SVar4 = local_40;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,uVar3);
  (*(code *)PTR__objc_release_02578630)(SVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return;
}

