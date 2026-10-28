@interface MBEventHandler_reportLiveAdsAction : MBEventHandlerBaseAsync
{
    BOOL _isAdCalled; // +0x8
}
- (void)invoke:(id)arg1;
- (id)apiName;
- (BOOL)isAdCalled;
- (void)setIsAdCalled:(BOOL)arg1;
@end
