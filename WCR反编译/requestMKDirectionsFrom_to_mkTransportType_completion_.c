// requestMKDirectionsFrom:to:mkTransportType:completion: @ 00f5d4e0

/* Function Stack Size: 0x40 bytes */

void __thiscall
WCRefineFakeLocationEngine::requestMKDirectionsFrom_to_mkTransportType_completion_
          (WCRefineFakeLocationEngine *this,ID param_1,SEL param_2,CLLocationCoordinate2D param_3,
          CLLocationCoordinate2D param_4,unsigned_long_long param_5,ID param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  double local_58;
  SEL local_50;
  ID local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_58 = param_3.field0_0x0;
  local_60 = 0;
  local_50 = param_2;
  local_48 = param_1;
  local_40 = in_d2;
  local_38 = in_d3;
  local_30 = in_d0;
  local_28 = in_d1;
  _objc_storeStrong(&local_60,param_3.field1_0x8,local_58,param_3.field1_0x8,param_4.field0_0x0,
                    param_4.field1_0x8);
  puVar2 = PTR__OBJC_CLASS___MKDirectionsRequest_026ceb90;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___MKMapItem_026ceb98;
  local_68 = puVar2;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___MKPlacemark_026ceba0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithPlacemark__026ac710);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSource__026ac4d8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___MKMapItem_026ceb98;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___MKPlacemark_026ceba0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithPlacemark__026ac710);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDestination__026ac718);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setRequestsAlternateRoutes__026ac720,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTransportType__026ac728,local_58);
  puVar2 = PTR__OBJC_CLASS___MKDirections_026ceba8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar1 = local_60;
  local_70 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_calculateDirectionsWithCompletio_026ac740);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  return;
}

