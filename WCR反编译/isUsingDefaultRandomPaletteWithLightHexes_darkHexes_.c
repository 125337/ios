// isUsingDefaultRandomPaletteWithLightHexes:darkHexes: @ 01895e08

/* Function Stack Size: 0x20 bytes */

bool WCRefineChatAvatarProfileCardViewController::
     isUsingDefaultRandomPaletteWithLightHexes_darkHexes_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint local_44;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar1,param_4);
  FUN_01894008();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  FUN_018940d0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToArray__0269e9b0,local_38);
  local_44 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToArray__0269e9b0,local_40);
    local_44 = (uint)uVar3;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_44 & 1;
}

