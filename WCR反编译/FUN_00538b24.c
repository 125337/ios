// FUN_00538b24 @ 00538b24

void FUN_00538b24(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **local_d8;
  undefined **local_c8;
  uint local_74;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  byte local_49;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  long local_28;
  undefined8 local_20;
  long *local_18;
  long *plVar2;
  
  plVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  local_41 = 0;
  local_74 = 1;
  if (local_28 != 0) {
    FUN_005384f8();
    local_74 = 1;
    if ((uVar1 & 1) != 0) {
      puVar7 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_74 = (uint)puVar7 ^ 1;
    }
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_74 & 1) == 0) {
    local_18 = &DAT_028cb290;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257dd18);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    local_49 = 0;
    if ((DAT_028cb280 == 0) ||
       (uVar3 = DAT_028cb280,
       (*(code *)PTR__objc_msgSend_02578628)
                 (DAT_028cb280,PTR_s_respondsToSelector__026ca818,DAT_028cb288), (uVar3 & 1) == 0))
    {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_49 = lVar5 == 2;
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    else {
      uVar3 = DAT_028cb280;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb280,DAT_028cb288);
      local_49 = (byte)uVar3;
    }
    puVar7 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_momentsDetailedTimeColorLight_026a4c58);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_58;
    local_60 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsDetailedTimeColorDark_026a4c60);
    _objc_retainAutoreleasedReturnValue();
    if ((local_49 & 1) == 0) {
      local_c8 = &local_60;
    }
    else {
      local_c8 = &local_68;
    }
    puVar7 = *local_c8;
    local_68 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      if ((local_49 & 1) == 0) {
        local_d8 = &local_68;
      }
      else {
        local_d8 = &local_60;
      }
      _objc_storeStrong(&local_70,*local_d8);
    }
    if (local_70 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTextColor__026caa98,local_70);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_48 = 0;
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

