// ___54-[WCMFeedController_verifyHiddenUser:request:attempt:]_block_invoke @0x45d94

void ___54__WCMFeedController_verifyHiddenUser_request_attempt___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);
  _objc_msgSend_verifyHiddenUser_request_attempt_
            (uVar1,local_30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(long *)(param_1 + 0x38) + 1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

