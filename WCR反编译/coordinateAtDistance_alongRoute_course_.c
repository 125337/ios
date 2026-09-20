// coordinateAtDistance:alongRoute:course: @ 00f5aac4

/* Function Stack Size: 0x28 bytes */

CLLocationCoordinate2D __thiscall
WCRefineFakeLocationEngine::coordinateAtDistance_alongRoute_course_
          (WCRefineFakeLocationEngine *this,ID param_1,SEL param_2,double param_3,ID param_4,
          double *param_5)

{
  CLLocationCoordinate2D CVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double in_d1;
  double dVar10;
  undefined *local_a0;
  undefined *local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulong local_70;
  double local_68;
  int local_5c;
  double *local_58;
  ulong local_50;
  double local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double dStack_28;
  
  local_50 = 0;
  local_48 = param_3;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_50,param_4);
  uVar3 = local_50;
  local_58 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  if (uVar3 == 0) {
    dStack_28 = *(double *)(PTR__kCLLocationCoordinate2DInvalid_025785c0 + 8);
    local_30 = *(double *)PTR__kCLLocationCoordinate2DInvalid_025785c0;
    iVar7 = 1;
    local_5c = 1;
  }
  else {
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    if ((uVar3 == 1) || (param_3 = local_48, local_48 <= 0.0)) {
      if (local_58 != (double *)0x0) {
        param_3 = -1.0;
        *local_58 = -1.0;
      }
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_30 = param_3;
      dStack_28 = in_d1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      iVar7 = 1;
      local_5c = 1;
    }
    else {
      local_68 = local_48;
      dVar8 = local_48;
      for (local_70 = 1; uVar3 = local_70, uVar4 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0), uVar3 < uVar4;
          local_70 = local_70 + 1) {
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_70 - 1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_80 = dVar8;
        local_78 = in_d1;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_90 = dVar8;
        local_88 = in_d1;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar5 = PTR__OBJC_CLASS___CLLocation_026ceb88;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(local_80,local_78);
        puVar6 = PTR__OBJC_CLASS___CLLocation_026ceb88;
        local_98 = puVar5;
        _objc_alloc();
        in_d1 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,local_88);
        local_a0 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_distanceFromLocation__026ac620,puVar6);
        if (DAT_02323db0 <= in_d1) {
          if (in_d1 < local_68) {
            dVar8 = local_68 - in_d1;
            local_5c = 0;
            local_68 = dVar8;
          }
          else {
            dVar8 = local_80 + (local_68 / in_d1) * (local_90 - local_80);
            in_d1 = local_78 + (local_68 / in_d1) * (local_88 - local_78);
            _CLLocationCoordinate2DMake();
            local_30 = dVar8;
            dStack_28 = in_d1;
            if (local_58 != (double *)0x0) {
              dVar8 = local_80;
              in_d1 = local_78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_80,local_78,local_90,local_88,local_38,PTR_s_bearingFrom_to__026ac628
                        );
              *local_58 = dVar8;
            }
            local_5c = 1;
          }
        }
        else {
          local_5c = 4;
          dVar8 = in_d1;
          in_d1 = DAT_02323db0;
        }
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_98,0);
        if ((local_5c != 0) && (iVar7 = local_5c + -4, iVar7 != 0)) goto LAB_00f5b02c;
      }
      if ((local_58 != (double *)0x0) &&
         (uVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
         IVar2 = local_38, uVar3 = local_50, 1 < uVar4)) {
        uVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_objectAtIndexedSubscript__0269cc78,uVar4 - 2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar4 = local_50;
        dVar9 = dVar8;
        dVar10 = in_d1;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar8,in_d1,dVar9,dVar10,IVar2,PTR_s_bearingFrom_to__026ac628);
        *local_58 = dVar8;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_30 = dVar8;
      dStack_28 = in_d1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      iVar7 = 1;
      local_5c = 1;
    }
  }
LAB_00f5b02c:
  _objc_storeStrong(iVar7,&local_50,0);
  CVar1.field1_0x8 = dStack_28;
  CVar1.field0_0x0 = local_30;
  return CVar1;
}

