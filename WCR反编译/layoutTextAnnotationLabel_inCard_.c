// layoutTextAnnotationLabel:inCard: @ 0164feb8

/* Function Stack Size: 0x20 bytes */

void WCRSuperFloatCropViewController::layoutTextAnnotationLabel_inCard_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double in_d2;
  double local_188;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = local_38;
  if ((local_38 != 0) && (local_40 != 0)) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_188 = in_d2 * DAT_02323c98;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_188 <= 120.0) {
      local_188 = 120.0;
    }
    dVar5 = 1.7976931348623157e+308;
    FUN_0163f628();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_sizeThatFits__0269ec10);
    local_188 = local_188 + 16.0;
    uVar6 = 0x4024000000000000;
    dVar5 = dVar5 + 10.0;
    dVar3 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_center_026ca560);
    uVar7 = 0;
    uVar4 = 0;
    FUN_0163f5dc();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar7,local_40,PTR_s_setBounds__026ca8a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCenter__026ca8c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar3,uVar6,local_188,dVar5,local_38,PTR_s_setFrame__026ca960);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

