// togglePinnedRelativePath: @ 015b5bcc

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoicePackStore::togglePinnedRelativePath_(ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  ID IVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isPinnedRelativePath__026ae2d8,local_28);
  bVar1 = ((byte)IVar2 ^ 1) & 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setPinned_forRelativePath__026b0cd8,bVar1,local_28);
  _objc_storeStrong(&local_28,0);
  return (uint)bVar1;
}

