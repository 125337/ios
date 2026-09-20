// FUN_021fcb00 @ 021fcb00

void * FUN_021fcb00(void *param_1,void *param_2,long param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + -8);
  pvVar1 = param_1;
  (**(code **)(lVar2 + 0x30))(param_1,1);
  if ((int)pvVar1 == 0) {
    (**(code **)(lVar2 + 0x10))(param_2,param_1,param_3);
    (**(code **)(lVar2 + 0x38))(param_2,0,1,param_3);
  }
  else {
    _memcpy(param_2,param_1,*(size_t *)(*(long *)(param_4 + -8) + 0x40));
  }
  return param_2;
}

