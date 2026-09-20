// coordValidLat:lng: @ 019505e0

/* Function Stack Size: 0x20 bytes */

bool WCRefineFakeLocationHistoryStore::coordValidLat_lng_
               (ID param_1,SEL param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint local_54;
  uint local_44;
  
  dVar1 = DAT_0232c3a8;
  dVar2 = param_3;
  dVar3 = param_4;
  _CLLocationCoordinate2DMake();
  _CLLocationCoordinate2DIsValid(dVar2,dVar3);
  local_44 = 0;
  if ((param_1 & 1) != 0) {
    local_54 = 0;
    if (ABS(param_3) < dVar1) {
      local_54 = (uint)(ABS(param_4) < dVar1);
    }
    local_44 = local_54 ^ 1;
  }
  return local_44;
}

