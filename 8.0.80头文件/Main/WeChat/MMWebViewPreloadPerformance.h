@interface MMWebViewPreloadPerformance : NSObject
{
    unsigned long long _getA8KeyFinishTime; // +0x8
    unsigned long long _getA8KeyCostTime; // +0x10
    unsigned long long _firstScreenRenderFinishTime; // +0x18
    unsigned long long _firstScreenRenderCostTime; // +0x20
}
- (unsigned long long)getA8KeyFinishTime;
- (void)setGetA8KeyFinishTime:(unsigned long long)arg1;
- (unsigned long long)getA8KeyCostTime;
- (void)setGetA8KeyCostTime:(unsigned long long)arg1;
- (unsigned long long)firstScreenRenderFinishTime;
- (void)setFirstScreenRenderFinishTime:(unsigned long long)arg1;
- (unsigned long long)firstScreenRenderCostTime;
- (void)setFirstScreenRenderCostTime:(unsigned long long)arg1;
@end
