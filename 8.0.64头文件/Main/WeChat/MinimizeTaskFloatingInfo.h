@interface MinimizeTaskFloatingInfo : NSObject
{
    BOOL _isFolded; // +0x8
    BOOL _isInactive; // +0x9
    BOOL _hasMultiTask; // +0xa
    BOOL _reverseXAxis; // +0xb
    long long _index; // +0x10
    double _inactiveScale; // +0x18
    long long _totalTaskCount; // +0x20
    MinimizeTaskData * _taskData; // +0x28
    CGSize _originSize; // +0x30
    CGRect _expandedFrame; // +0x40
    CGRect _foldedFrame; // +0x60
    CGRect _firstCardExpandedFrame; // +0x80
    CGRect _lastCardExpandedFrame; // +0xa0
}
- (id)taskKey;
- (id)taskBizName;
- (id)taskBizKey;
- (id)contentInfo;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (BOOL)isFolded;
- (void)setIsFolded:(BOOL)arg1;
- (BOOL)isInactive;
- (void)setIsInactive:(BOOL)arg1;
- (BOOL)hasMultiTask;
- (void)setHasMultiTask:(BOOL)arg1;
- (double)inactiveScale;
- (void)setInactiveScale:(double)arg1;
- (CGRect)expandedFrame;
- (void)setExpandedFrame:(CGRect)arg1;
- (CGRect)foldedFrame;
- (void)setFoldedFrame:(CGRect)arg1;
- (CGRect)firstCardExpandedFrame;
- (void)setFirstCardExpandedFrame:(CGRect)arg1;
- (CGRect)lastCardExpandedFrame;
- (void)setLastCardExpandedFrame:(CGRect)arg1;
- (long long)totalTaskCount;
- (void)setTotalTaskCount:(long long)arg1;
- (BOOL)reverseXAxis;
- (void)setReverseXAxis:(BOOL)arg1;
- (CGSize)originSize;
- (void)setOriginSize:(CGSize)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (void).cxx_destruct;
@end
