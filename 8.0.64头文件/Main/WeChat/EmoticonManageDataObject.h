@interface EmoticonManageDataObject : NSObject
{
    unsigned long long _type; // +0x8
    CEmoticonPackageWrap * _pageWrap; // +0x10
    CEmoticonIPSetInfo * _setInfo; // +0x18
    unsigned long long _packedEmoticonCount; // +0x20
    unsigned long long _objPosition; // +0x28
}
- (id)pageWrapForMoving;
- (id)keyForOrder;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)pageWrap;
- (void)setPageWrap:(id)arg1;
- (id)setInfo;
- (void)setSetInfo:(id)arg1;
- (unsigned long long)packedEmoticonCount;
- (void)setPackedEmoticonCount:(unsigned long long)arg1;
- (unsigned long long)objPosition;
- (void)setObjPosition:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
