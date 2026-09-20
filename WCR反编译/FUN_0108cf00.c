// FUN_0108cf00 @ 0108cf00

byte FUN_0108cf00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_11 = 0;
  }
  else {
    pcVar3 = "EmoticonUtil";
    _objc_getClass();
    puVar1 = PTR_s_saveEmoticonToEmoticonDirForMd5__026ac148;
    if ((pcVar3 == (char *)0x0) ||
       (pcVar4 = pcVar3,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar3,PTR_s_respondsToSelector__026ca818,
                  PTR_s_saveEmoticonToEmoticonDirForMd5__026ac148), ((ulong)pcVar4 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,local_20,local_28,1);
      local_11 = (byte)pcVar3 & 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

