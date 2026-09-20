// step: @ 00067c78

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRAutoScrollDriver::step_(WCRAutoScrollDriver *this,ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  bool bVar2;
  ID IVar3;
  double in_d0;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_a0;
  double local_70;
  double local_48;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  bVar1 = 1;
  local_30 = IVar3;
  if (IVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    bVar1 = 1;
    local_38 = IVar3;
    if (IVar3 != 0) {
      bVar1 = DAT_028c7c80 ^ 1;
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((bVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_targetTimestamp_0269dd60);
    local_70 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timestamp_0269dd68);
    local_a0 = in_d0 - local_70;
    if ((local_a0 <= 0.0) || (local_70 = DAT_02323c68, local_48 = local_a0, DAT_02323c68 < local_a0)
       ) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_duration_0269dd70);
      if (local_a0 <= 0.0) {
        local_a0 = 0.016666666666666666;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_duration_0269dd70);
      }
      local_48 = local_a0;
    }
    dVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_minimumOffsetY_0269dcd8);
    dVar5 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_maximumOffsetY_0269dcf0);
    dVar6 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentOffset_0269dd18);
    dVar7 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_speed_0269dd78);
    local_70 = local_70 + local_48 * dVar7;
    bVar2 = false;
    dVar7 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_speed_0269dd78);
    if ((0.0 < dVar7) && (dVar7 = local_70, dVar5 <= local_70)) {
      bVar2 = true;
      dVar7 = dVar5;
      local_70 = dVar5;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_speed_0269dd78);
    IVar3 = local_30;
    if ((dVar7 < 0.0) && (local_70 <= dVar4)) {
      bVar2 = true;
      local_70 = dVar4;
    }
    FUN_00068014();
    FUN_00067a38(dVar6,local_70,IVar3);
    if (bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stop_0269dd58);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stop_0269dd58);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

