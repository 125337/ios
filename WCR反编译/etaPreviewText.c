// etaPreviewText @ 01955b18

/* Function Stack Size: 0x10 bytes */

ID WCRefineFakeLocationSettingsViewController::etaPreviewText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_88;
  undefined *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_88 = 0;
  local_38 = 0;
  local_40 = 0;
  IVar2 = local_20;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_loadDestLat_lng_name__026b9b40,&local_38,&local_40,0);
  if ((IVar2 & 1) == 0) {
    local_18 = (undefined *)0x0;
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fakeLocationLatitude_026ac690);
    puVar1 = local_30;
    uVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fakeLocationLongitude_026ac698);
    FUN_01954c24(local_88,uVar4);
    if (((ulong)puVar1 & 1) == 0) {
      local_18 = (undefined *)0x0;
      local_44 = 1;
    }
    else {
      puVar1 = PTR_WCRefineFakeLocationEngine_026ceb80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_hasRoute_026ac648);
      if (((ulong)puVar1 & 1) == 0) {
        local_88 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_routeDistanceMeters_026ac608);
      }
      puVar1 = PTR_WCRefineFakeLocationEngine_026ceb80;
      uVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fakeLocationLatitude_026ac690);
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fakeLocationLongitude_026ac698);
      _CLLocationCoordinate2DMake();
      uVar6 = local_38;
      uVar7 = local_40;
      _CLLocationCoordinate2DMake();
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fakeLocationMoveTransportType_026ac7a8);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,uVar5,uVar6,uVar7,local_88,puVar1,
                 PTR_s_etaPreviewFrom_to_transportType__026ac700,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_44 = 1;
      local_18 = puVar1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

