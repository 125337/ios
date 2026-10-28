@interface WCFinderPushFeedViewLiveParams : NSObject
{
    BOOL _disableHistoryForLives; // +0x8
    FinderCommByPass * _feedOverridingBypass; // +0x10
}
+ (id)paramsWithJsapiExtendedInfo:(id)arg1;
- (id)feedOverridingBypass;
- (void)setFeedOverridingBypass:(id)arg1;
- (BOOL)disableHistoryForLives;
- (void)setDisableHistoryForLives:(BOOL)arg1;
- (void).cxx_destruct;
@end
