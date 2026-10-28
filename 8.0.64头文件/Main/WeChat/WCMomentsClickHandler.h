@interface WCMomentsClickHandler : NSObject
{
    id <WCMomentsClickHandlerDelegate> _delegate; // +0x8
    MMUIViewController * _fromViewController; // +0x10
    MMURLHandler * _urlHandler; // +0x18
}
- (BOOL)handleClickUserProfileWithOptions:(id)arg1;
- (BOOL)handleClickBrandProfileWithOptions:(id)arg1;
- (BOOL)handleClickFinderProfileWithOptions:(id)arg1;
- (BOOL)handleClickTigerSourceWithOptions:(id)arg1;
- (BOOL)handleClickHotwordWithOptions:(id)arg1;
- (BOOL)handleClickURLWithOptions:(id)arg1;
- (BOOL)handleClickTingUrlWithOptions:(id)arg1;
- (id)getProfileContactWithUsername:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (id)urlHandler;
- (void)setUrlHandler:(id)arg1;
- (void).cxx_destruct;
@end
