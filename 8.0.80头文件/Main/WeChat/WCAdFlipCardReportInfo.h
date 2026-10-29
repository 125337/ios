@interface WCAdFlipCardReportInfo : NSObject
{
    BOOL _isIntroduceAnimationDone; // +0x8
    unsigned int _touchCount; // +0xc
    unsigned int _flipCount; // +0x10
    unsigned int _cardClickCount; // +0x14
    unsigned int _learnMoreClickCount; // +0x18
    NSMutableArray * _reportItemList; // +0x20
    unsigned long long _lastVisibleIndex; // +0x28
}
- (id)init;
- (id)reportItemList;
- (void)setReportItemList:(id)arg1;
- (unsigned int)touchCount;
- (void)setTouchCount:(unsigned int)arg1;
- (unsigned int)flipCount;
- (void)setFlipCount:(unsigned int)arg1;
- (unsigned int)cardClickCount;
- (void)setCardClickCount:(unsigned int)arg1;
- (unsigned int)learnMoreClickCount;
- (void)setLearnMoreClickCount:(unsigned int)arg1;
- (unsigned long long)lastVisibleIndex;
- (void)setLastVisibleIndex:(unsigned long long)arg1;
- (BOOL)isIntroduceAnimationDone;
- (void)setIsIntroduceAnimationDone:(BOOL)arg1;
- (void).cxx_destruct;
@end
