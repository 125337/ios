@interface WCFinderLiveDislikeBannerCGI : WCFinderLiveBaseCgi
- (id)initWithTaskId:(id)arg1 liveCookies:(id)arg2 dislikeBannerId:(id)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
@end

