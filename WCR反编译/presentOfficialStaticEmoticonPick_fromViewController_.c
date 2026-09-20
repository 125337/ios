// presentOfficialStaticEmoticonPick:fromViewController: @ 00f4fde4

/* Function Stack Size: 0x20 bytes */

bool WCRefineEmoticonToolsHelper::presentOfficialStaticEmoticonPick_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  ulong uVar2;
  ulong local_70 [4];
  char *local_50;
  undefined4 local_44;
  char *local_40;
  ulong local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  pcVar1 = "EmoticonPickViewController";
  _objc_getClass();
  local_40 = pcVar1;
  if (((pcVar1 == (char *)0x0) || (local_30 == 0)) || (local_38 == 0)) {
    local_11 = 0;
    local_44 = 1;
    goto LAB_00f50054;
  }
  _objc_alloc_init();
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setM_image__026ac520);
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setValue_forKey__0269d300,local_30,&cf_m_image);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setM_image__026ac520,local_30);
  }
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_70[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_PushViewController_animated__0269cd40);
  if ((uVar2 & 1) == 0) {
    if (local_70[0] != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70[0],PTR_s_pushViewController_animated__0269d590,local_50,1);
      goto LAB_00f50010;
    }
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70[0],PTR_s_PushViewController_animated__0269cd40,local_50,1);
LAB_00f50010:
    _NSLog(&cf__wcr__emoticon_oaaddstaticpushEmoticonPickViewController);
    local_11 = 1;
  }
  local_44 = 1;
  _objc_storeStrong(local_70);
  _objc_storeStrong(&local_50,0);
LAB_00f50054:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

