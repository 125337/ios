@interface WCFinderBusinessFeatureInfo : NSObject
{
    BOOL _isOpen; // +0x8
    int _businessType; // +0xc
    long long _locationIndex; // +0x10
    long long _exitInterval; // +0x18
    long long _consumeReddotInterval; // +0x20
    long long _exposeReddotInterval; // +0x28
    NSMutableArray * _clickWithReddotCountArray; // +0x30
    NSMutableArray * _clickWithoutReddotCountArray; // +0x38
    NSMutableArray * _reddotExposeCountArray; // +0x40
    NSMutableArray * _reddotCtrValueArray; // +0x48
    WCFinderBusinessCurrentRedDotInfo * _currentRedDotInfo; // +0x50
}
- (id)initWithBusinessType:(int)arg1;
- (id)genReportJson;
- (id)genReportByContainerArray:(id)arg1;
- (id)genReportFloatByContainerArray:(id)arg1;
- (int)businessType;
- (void)setBusinessType:(int)arg1;
- (BOOL)isOpen;
- (void)setIsOpen:(BOOL)arg1;
- (long long)locationIndex;
- (void)setLocationIndex:(long long)arg1;
- (long long)exitInterval;
- (void)setExitInterval:(long long)arg1;
- (long long)consumeReddotInterval;
- (void)setConsumeReddotInterval:(long long)arg1;
- (long long)exposeReddotInterval;
- (void)setExposeReddotInterval:(long long)arg1;
- (id)clickWithReddotCountArray;
- (void)setClickWithReddotCountArray:(id)arg1;
- (id)clickWithoutReddotCountArray;
- (void)setClickWithoutReddotCountArray:(id)arg1;
- (id)reddotExposeCountArray;
- (void)setReddotExposeCountArray:(id)arg1;
- (id)reddotCtrValueArray;
- (void)setReddotCtrValueArray:(id)arg1;
- (id)currentRedDotInfo;
- (void)setCurrentRedDotInfo:(id)arg1;
- (void).cxx_destruct;
@end
