// FUN_00935f6c @ 00935f6c

void FUN_00935f6c(char *param_1)

{
  int iVar1;
  char *pcVar2;
  stat sStack_d0;
  char *local_40;
  char *local_28;
  
  FUN_0092e280();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  pcVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_fileSystemRepresentation_026a95c0);
  (*(code *)PTR__objc_release_02578630)();
  local_28 = pcVar2;
  FUN_009362bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  pcVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_fileSystemRepresentation_026a95c0);
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_40 = pcVar2;
  if ((local_28 != (char *)0x0) && (pcVar2 != (char *)0x0)) {
    _memset(&sStack_d0,0,0x90);
    iVar1 = _stat(local_28,&sStack_d0);
    if ((iVar1 == 0) && (0 < sStack_d0.st_size)) {
      _unlink(local_40);
      _rename(local_28,local_40);
    }
  }
  if ((local_28 != (char *)0x0) && (iVar1 = _open(local_28,0x601), -1 < iVar1)) {
    _close(iVar1);
  }
  return;
}

