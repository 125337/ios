// configureLibraryForSpecialSelection:dayPath:nightPath:addMode:offsetX:offsetY:scale: @ 018411c4

/* Function Stack Size: 0x48 bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::
     configureLibraryForSpecialSelection_dayPath_nightPath_addMode_offsetX_offsetY_scale_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6,
               double param_7,double param_8,double param_9)

{
  ID IVar1;
  double local_c0;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectionContextEnabled__026b6700,1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_98 = &::cf___;
  }
  else {
    local_98 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setSelectionContextDayPath__026b6510,local_98);
  if (local_38 == (cfstringStruct *)0x0) {
    local_a8 = &::cf___;
  }
  else {
    local_a8 = local_38;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setSelectionContextNightPath__026b6508,local_a8);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_librarySelectionTagName_026b6708);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectionContextTag__026b6710);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_previewAvatarImage_026b6628);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectionContextAvatarImage__026b6718);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectionContextAddMode__026b6720,param_6)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(param_7,local_28,PTR_s_setSelectionContextOffsetX__026b6728)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(param_8,local_28,PTR_s_setSelectionContextOffsetY__026b6730)
  ;
  local_c0 = param_9;
  if (param_9 <= 0.0) {
    local_c0 = 1.5;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,local_28,PTR_s_setSelectionContextScale__026b6738);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

