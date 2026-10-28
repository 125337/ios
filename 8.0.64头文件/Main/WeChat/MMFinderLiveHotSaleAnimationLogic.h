@interface MMFinderLiveHotSaleAnimationLogic : NSObject
{
    BOOL _isAnimating; // +0x8
    BOOL _isWaiting; // +0x9
    BOOL _isDuringFinishing; // +0xa
    BOOL _hasGotNewDataDuringFinishing; // +0xb
    id <MMFinderLiveHotSaleAnimationDelegate> _delegate; // +0x10
    unsigned long long _sales; // +0x18
    NSMutableArray * _salesHistory; // +0x20
    NSMutableArray * _timeInfo; // +0x28
    unsigned long long _lastCount; // +0x30
    unsigned long long _startPoint; // +0x38
}
+ (id)logicOf:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setSales:(unsigned long long)arg1;
- (void)tryStart;
- (void)process;
- (BOOL)shouldStartHotSellAnimation;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)sales;
- (id)salesHistory;
- (void)setSalesHistory:(id)arg1;
- (id)timeInfo;
- (void)setTimeInfo:(id)arg1;
- (unsigned long long)lastCount;
- (void)setLastCount:(unsigned long long)arg1;
- (unsigned long long)startPoint;
- (void)setStartPoint:(unsigned long long)arg1;
- (BOOL)isWaiting;
- (void)setIsWaiting:(BOOL)arg1;
- (BOOL)isDuringFinishing;
- (void)setIsDuringFinishing:(BOOL)arg1;
- (BOOL)hasGotNewDataDuringFinishing;
- (void)setHasGotNewDataDuringFinishing:(BOOL)arg1;
- (void).cxx_destruct;
@end
