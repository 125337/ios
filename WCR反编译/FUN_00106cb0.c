// FUN_00106cb0 @ 00106cb0

void FUN_00106cb0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_58;
  
  puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  DAT_028c84a0 = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(ulong *)(param_1 + 0x38);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_chatRoomQuickKickRevokeCommand_0269ed10);
  if ((uVar1 & 1) == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(undefined8 *)(param_1 + 0x40);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_kickUsers_fromRoom_reason_keywor_0269ed18,uVar4,uVar5,&cf_SN_N,uVar6,0,
             local_58);
  puVar3 = PTR___dispatch_main_q_02578680;
  DAT_028c84a0 = 0;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  return;
}

