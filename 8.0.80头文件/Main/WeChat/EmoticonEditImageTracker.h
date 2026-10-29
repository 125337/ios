@interface EmoticonEditImageTracker : NSObject
{
    BOOL _isRemoveBgWhenExit; // +0x8
    BOOL _removeBgSuccess; // +0x9
    unsigned int _clickTextBtnCount; // +0xc
    unsigned int _clickCropBtnCount; // +0x10
    unsigned int _zoomInOutCount; // +0x14
    unsigned int _clickRemoveBgBtnCount; // +0x18
    NSMutableArray * _actionTraceArray; // +0x20
    unsigned long long _removeBgCost; // +0x28
}
- (id)init;
- (unsigned int)clickTextBtnCount;
- (void)setClickTextBtnCount:(unsigned int)arg1;
- (unsigned int)clickCropBtnCount;
- (void)setClickCropBtnCount:(unsigned int)arg1;
- (unsigned int)zoomInOutCount;
- (void)setZoomInOutCount:(unsigned int)arg1;
- (id)actionTraceArray;
- (void)setActionTraceArray:(id)arg1;
- (unsigned int)clickRemoveBgBtnCount;
- (void)setClickRemoveBgBtnCount:(unsigned int)arg1;
- (BOOL)isRemoveBgWhenExit;
- (void)setIsRemoveBgWhenExit:(BOOL)arg1;
- (unsigned long long)removeBgCost;
- (void)setRemoveBgCost:(unsigned long long)arg1;
- (BOOL)removeBgSuccess;
- (void)setRemoveBgSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
