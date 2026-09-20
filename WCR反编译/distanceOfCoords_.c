// distanceOfCoords: @ 00f5a870

/* Function Stack Size: 0x18 bytes */

double WCRefineFakeLocationEngine::distanceOfCoords_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double in_d1;
  undefined *local_78;
  undefined *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulong local_48;
  double local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (uVar1 < 2) {
    local_18 = 0.0;
  }
  else {
    dVar5 = 0.0;
    local_40 = 0.0;
    local_48 = 1;
    while( true ) {
      uVar1 = local_48;
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      if (uVar2 <= uVar1) break;
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_48 - 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = dVar5;
      local_50 = in_d1;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = dVar5;
      local_60 = in_d1;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = PTR__OBJC_CLASS___CLLocation_026ceb88;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_50);
      puVar4 = PTR__OBJC_CLASS___CLLocation_026ceb88;
      local_70 = puVar3;
      _objc_alloc();
      in_d1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,local_60);
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_distanceFromLocation__026ac620,puVar4);
      dVar5 = local_40 + in_d1;
      local_40 = dVar5;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      local_48 = local_48 + 1;
    }
    local_18 = local_40;
  }
  local_34 = 1;
  _objc_storeStrong(&local_30,0);
  return local_18;
}

