// viewDidAppear: @ 01f88820

/* Function Stack Size: 0x14 bytes */

void WCRefineVoicePackPickerViewController::viewDidAppear_(ID param_1,SEL param_2,bool param_3)

{
  ID local_38;
  undefined *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_30 = PTR_WCRefineVoicePackPickerViewController_026d0298;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,PTR_s_viewDidAppear__0269cd50,param_3 & 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setViewVisible__026c9798,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_prefetchFolderStats_026c99a8);
  return;
}

