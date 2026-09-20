// hasBoundSyncSource @ 01aab930

/* Function Stack Size: 0x10 bytes */

bool WCRGroupCreateViewController::hasBoundSyncSource(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined4 local_38;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_memberSyncChatRoomsDraft_026bdbc8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = 1;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_memberSyncTagsDraft_026bdbd0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (bool)(IVar2 != 0);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return local_38;
}

