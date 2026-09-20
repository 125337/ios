// _setOn: @ 0170f254

/* Function Stack Size: 0x14 bytes */

void SwitchThemesDayNight::_setOn_(ID param_1,SEL param_2,bool param_3)

{
  byte bVar1;
  ID IVar2;
  ID IVar3;
  undefined1 local_48;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_changeAction_026b3820);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = 0;
  if (IVar2 != 0) {
    bVar1 = *(byte *)(param_1 + (long)_shouldSkipChangeAction) ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((bVar1 & 1) != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_changeAction_026b3820);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_moved_026b3838);
    (**(code **)(IVar2 + 0x10))(IVar2,param_3 & 1,(uint)IVar3 ^ 1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  local_48 = 1;
  if ((*(byte *)(param_1 + (long)_shouldAnimate) & 1) == 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dragging_026b3830);
    local_48 = (byte)IVar2;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_applyState_animated__026b3900,param_3 & 1,local_48 & 1);
  return;
}

