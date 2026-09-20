// applyMKRoute:start:destination:transportType:completion: @ 00f5cdd8

/* Function Stack Size: 0x48 bytes */

void __thiscall
WCRefineFakeLocationEngine::applyMKRoute_start_destination_transportType_completion_
          (WCRefineFakeLocationEngine *this,ID param_1,SEL param_2,ID param_3,
          CLLocationCoordinate2D param_4,CLLocationCoordinate2D param_5,long_long param_6,ID param_7
          ,undefined4 param_8)

{
  bool bVar1;
  double *pdVar2;
  double dVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  undefined8 in_d0;
  double dVar10;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_180;
  ID local_160;
  byte local_151;
  undefined *local_150;
  undefined *local_148;
  double local_140;
  double dStack_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  undefined8 local_118;
  ulong local_110;
  undefined8 local_108;
  ulong local_100;
  void *local_f8;
  undefined4 local_ec;
  ulong local_e8;
  ulong local_e0;
  undefined *local_d8;
  long local_d0;
  double local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar3 = DAT_0232c3b0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a8 = in_d2;
  local_a0 = in_d3;
  local_98 = in_d0;
  local_90 = in_d1;
  _objc_storeStrong(&local_c0,param_3);
  local_d0 = 0;
  local_c8 = param_4.field0_0x0;
  _objc_storeStrong(&local_d0,param_4.field1_0x8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_c0;
  local_d8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_polyline_026ac6e0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_pointCount_026ac6e8);
  local_e8 = uVar5;
  if (uVar5 == 0) {
    if (local_d0 != 0) {
      (**(code **)(local_d0 + 0x10))(local_d0,0,&cf___Nzz);
    }
    local_ec = 1;
  }
  else {
    local_f8 = _malloc(uVar5 * 0x10);
    local_80 = 0;
    local_88 = local_e8;
    local_78 = 0;
    local_70 = local_e8;
    local_108 = 0;
    local_100 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_getCoordinates_range__026ac6f0,local_f8,0,local_e8);
    local_118 = 1;
    local_120 = local_e8 / 200;
    local_180 = local_120;
    if (local_120 < 2) {
      local_180 = 1;
    }
    local_128 = local_180;
    local_110 = local_180;
    for (local_130 = 0; puVar4 = local_d8, local_130 < local_e8; local_130 = local_130 + local_110)
    {
      local_48 = &cf_lat;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)((long)local_f8 + local_130 * 0x10),
                 PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = &cf_lng;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)((long)local_f8 + local_130 * 0x10 + 8),
                 PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    pdVar2 = (double *)((long)local_f8 + (local_e8 - 1) * 0x10);
    dStack_138 = pdVar2[1];
    dVar10 = *pdVar2;
    local_140 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_lat);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar10 = ABS(dVar10 - local_140);
    local_151 = 0;
    bVar1 = true;
    if (dVar10 <= dVar3) {
      puVar6 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_lng);
      _objc_retainAutoreleasedReturnValue();
      local_151 = 1;
      local_150 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar10 = ABS(dVar10 - dStack_138);
      bVar1 = dVar3 < dVar10;
    }
    if ((local_151 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_d8;
    if (bVar1) {
      local_68 = &cf_lat;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = &cf_lng;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      dVar10 = dStack_138;
      local_58 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (dStack_138,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_50 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_68,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    _free(local_f8);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_applyRouteDicts__026ac6d8,local_d8);
    if (local_d0 != 0) {
      IVar9 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
      dVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_distance_026ac6f8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,local_90,local_a8,local_a0,dVar10,IVar9,
                 PTR_s_etaPreviewFrom_to_transportType__026ac700,dVar3);
      _objc_retainAutoreleasedReturnValue();
      local_160 = IVar9;
      (**(code **)(local_d0 + 0x10))(local_d0,1,IVar9);
      _objc_storeStrong(&local_160,0);
    }
    _objc_storeStrong(&local_148,0);
    local_ec = 0;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

