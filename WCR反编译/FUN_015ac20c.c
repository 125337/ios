// FUN_015ac20c @ 015ac20c

void FUN_015ac20c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_34;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_sendRepositoryCode_toChatName__0269efa8,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
    local_34 = (int)uVar2;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_34 != 0);
  }
  return;
}

