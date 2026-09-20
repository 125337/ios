// setHighlighted:animated: @ 01bc6004

/* Function Stack Size: 0x18 bytes */

void WCRMomentsAlbumCell::setHighlighted_animated_(ID param_1,SEL param_2,bool param_3,bool param_4)

{
  ID IVar1;
  undefined **ppuVar2;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  byte local_48;
  undefined **local_40;
  ID local_38;
  undefined *local_30;
  byte local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_22 = (byte)param_4;
  local_30 = PTR_WCRMomentsAlbumCell_026cff18;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,PTR_s_setHighlighted_animated__0269e608,param_3 & 1,param_4 & 1);
  IVar1 = local_18;
  ppuVar2 = &local_70;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01bc6144;
  local_58 = &DAT_02583028;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = IVar1;
  local_48 = local_21 & 1;
  _objc_retainBlock();
  local_40 = ppuVar2;
  if ((local_22 & 1) == 0) {
    (*(code *)ppuVar2[2])();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc3333333333333,PTR__OBJC_CLASS___UIView_026cdfd8,
               PTR_s_animateWithDuration_animations__026ca4e0,ppuVar2);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_50,0);
  return;
}

