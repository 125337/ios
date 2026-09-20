// ballTapped @ 00904ba4

/* Function Stack Size: 0x10 bytes */

void LogFloatingBall::ballTapped(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentState_026a9fe0);
  local_28 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  if (param_1 == 0) {
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc2000000;
    local_3c = 0;
    local_38 = FUN_00904cf8;
    local_30 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_18;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_00904d6c;
    local_58 = &DAT_02579d00;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc3333333333333,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_48,
               &local_70);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

