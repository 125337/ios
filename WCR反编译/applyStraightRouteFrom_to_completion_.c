// applyStraightRouteFrom:to:completion: @ 00f5ca5c

/* Function Stack Size: 0x38 bytes */

void __thiscall
WCRefineFakeLocationEngine::applyStraightRouteFrom_to_completion_
          (WCRefineFakeLocationEngine *this,ID param_1,SEL param_2,CLLocationCoordinate2D param_3,
          CLLocationCoordinate2D param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double in_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  undefined *local_b0;
  undefined *local_a8;
  double local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined *local_88;
  long local_80;
  SEL local_78;
  ID local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  local_78 = param_2;
  local_70 = param_1;
  local_68 = in_d2;
  local_60 = in_d3;
  local_58 = in_d0;
  local_50 = in_d1;
  _objc_storeStrong(&local_80,param_3.field0_0x0,param_3.field0_0x0,param_3.field1_0x8,
                    param_4.field0_0x0,param_4.field1_0x8,param_5,param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_90 = 0x28;
  local_88 = puVar2;
  for (local_98 = 0; puVar2 = local_88, local_98 < 0x29; local_98 = local_98 + 1) {
    local_a0 = (double)NEON_ucvtf(local_98);
    local_a0 = local_a0 / 40.0;
    local_48 = &cf_lat;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58 + local_a0 * (local_68 - local_58),PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = &cf_lng;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50 + local_a0 * (local_60 - local_50),PTR__OBJC_CLASS___NSNumber_026ce038,
               PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_applyRouteDicts__026ac6d8,local_88);
  puVar2 = PTR__OBJC_CLASS___CLLocation_026ceb88;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,local_50);
  puVar5 = PTR__OBJC_CLASS___CLLocation_026ceb88;
  local_a8 = puVar2;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_68,local_60);
  local_b0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_distanceFromLocation__026ac620,puVar5);
  lVar1 = local_80;
  if (local_80 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_v_);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

