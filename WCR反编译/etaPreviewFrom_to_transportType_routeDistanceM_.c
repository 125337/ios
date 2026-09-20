// etaPreviewFrom:to:transportType:routeDistanceM: @ 00f5b620

/* Function Stack Size: 0x40 bytes */

ID WCRefineFakeLocationEngine::etaPreviewFrom_to_transportType_routeDistanceM_
             (ID param_1,SEL param_2,CLLocationCoordinate2D param_3,CLLocationCoordinate2D param_4,
             long_long param_5,double param_6)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  cfstringStruct *pcVar6;
  double dVar7;
  double in_d1;
  double dVar8;
  double in_d2;
  double in_d3;
  double in_d4;
  double local_178;
  undefined1 *local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  byte local_f1;
  undefined1 *local_f0;
  undefined1 *local_e8;
  double local_e0;
  double dStack_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined *local_88;
  undefined *local_80;
  double local_78;
  undefined1 *local_70;
  double local_68;
  undefined1 *local_60;
  SEL local_58;
  undefined1 *local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  cfstringStruct *local_28;
  
  dVar7 = DAT_02323c68;
  local_60 = (undefined1 *)param_3.field0_0x0;
  local_68 = in_d4;
  local_58 = param_2;
  local_50 = (undefined1 *)param_1;
  local_48 = in_d2;
  local_40 = in_d3;
  local_38 = param_6;
  local_30 = in_d1;
  _CLLocationCoordinate2DIsValid(param_6,in_d1);
  if (((param_1 & 1) == 0) ||
     (_CLLocationCoordinate2DIsValid(local_48,local_40), (param_1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_HQwpT_p;
  }
  else {
    local_70 = local_60;
    if (local_60 == (undefined1 *)((long)&MACH_HEADER.cputype + 2)) {
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,local_30,local_48,local_40,local_50,
                 PTR_s_resolveSmartTransportFrom_to__026ac638);
      local_70 = puVar2;
    }
    local_78 = local_68;
    if (local_68 < 1.0) {
      puVar3 = PTR__OBJC_CLASS___CLLocation_026ceb88;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_30);
      puVar4 = PTR__OBJC_CLASS___CLLocation_026ceb88;
      local_80 = puVar3;
      _objc_alloc();
      dVar8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,local_40);
      local_88 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_distanceFromLocation__026ac620,puVar4);
      local_78 = dVar8;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
    if (1.0 <= local_78) {
      dVar8 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_speedMpsForTransportType__026ac640,local_70);
      local_90 = dVar8;
      if (dVar8 < dVar7) {
        local_90 = dVar7;
      }
      local_98 = local_78 / local_90;
      local_a0 = local_78 / 1000.0;
      local_a8 = (undefined *)0x0;
      if (60.0 <= local_98) {
        if (3600.0 <= local_98) {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_a8;
          local_a8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_a8;
          local_a8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_a8;
        local_a8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_b8 = local_78;
      dVar7 = local_90 * 300.0;
      local_178 = dVar7;
      if (local_78 < dVar7) {
        local_178 = local_78;
      }
      local_c8 = local_178;
      local_b0 = local_178;
      puVar2 = local_50;
      local_c0 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_hasRoute_026ac648);
      local_f1 = 0;
      bVar1 = false;
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_routeCoords_026ac650);
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        local_f0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar2;
      }
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      dVar8 = local_b0;
      puVar2 = local_e8;
      if (bVar1) {
        puVar5 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_routeCoords_026ac650);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_coordinateAtDistance_alongRoute__026ac658,puVar5,0);
        local_108 = dVar8;
        dStack_100 = dVar7;
        local_e0 = dVar8;
        dStack_d8 = dVar7;
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      else {
        local_110 = local_b0 / local_78;
        dVar7 = local_38 + local_110 * (local_48 - local_38);
        dVar8 = local_30 + local_110 * (local_40 - local_30);
        _CLLocationCoordinate2DMake();
        local_120 = dVar7;
        dStack_118 = dVar8;
        local_e0 = dVar7;
        dStack_d8 = dVar8;
      }
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_titleForTransportType__026ac660,local_60)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_128 = puVar2;
      if (local_60 == (undefined1 *)((long)&MACH_HEADER.cputype + 2)) {
        puVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_titleForTransportType__026ac660,local_70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_zf);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_128;
        local_128 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_speedKmhForTransportType__026ac630,local_70);
      pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar6;
      _objc_storeStrong(&local_128);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_a8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_y;
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

