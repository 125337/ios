// loadRouteFromConfig @ 00f5a324

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineFakeLocationEngine::loadRouteFromConfig
          (WCRefineFakeLocationEngine *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  double in_d0;
  double dVar6;
  double dVar7;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadRouteDicts_026ac5c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  IVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_150 != 0) {
    lVar4 = *local_100;
    local_158 = 0;
    do {
      do {
        dVar6 = in_d0;
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,IVar1);
          dVar6 = in_d0;
        }
        uVar5 = *(ulong *)(local_108 + local_158 * 8);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        in_d0 = dVar6;
        if ((uVar5 & 1) != 0) {
          uVar5 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_lat);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          uVar5 = local_d0;
          dVar7 = dVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_lng);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)();
          _CLLocationCoordinate2DMake();
          in_d0 = dVar6;
          _CLLocationCoordinate2DIsValid(dVar6,dVar7);
          puVar2 = local_c8;
          if ((uVar5 & 1) != 0) {
            puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar6,dVar7,PTR__OBJC_CLASS___NSValue_026ce1f0,
                       PTR_s_valueWithMKCoordinate__026ac5d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            in_d0 = dVar6;
          }
        }
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRouteCoords__026ac5d8,local_c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_distanceOfCoords__026ac5e0,local_c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRouteDistanceMeters__026ac5e8);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTraveledMeters__026ac5f8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_traveledMeters_026ac600);
  if (in_d0 < 0.0) {
    in_d0 = 0.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTraveledMeters__026ac5f8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_routeDistanceMeters_026ac608);
  if (0.0 < in_d0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_traveledMeters_026ac600);
    dVar6 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_routeDistanceMeters_026ac608);
    if (dVar6 < in_d0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_traveledMeters_026ac600);
      dVar6 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_routeDistanceMeters_026ac608);
      _fmod(in_d0,dVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTraveledMeters__026ac5f8);
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

