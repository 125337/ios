// isNoneItem: @ 01e029f4

/* Function Stack Size: 0x18 bytes */

bool WCRefineSuperFloatBallWarehouseViewController::isNoneItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isEqualToString__0269ccc8,&cf___WCR_SF_NONE_ICON__);
  _objc_storeStrong(&local_28,0);
  return (bool)uVar1;
}

