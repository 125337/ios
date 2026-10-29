@interface WCFinderCollectUnreadCGI : WCFinderBaseCgi
{
    int _commentScene; // +0x8
    NSMutableArray * _unreadItems; // +0x10
}
+ (BOOL)shouldAutoProcessingToastWithErrorCode:(long long)arg1;
- (id)initWithFinderUnreadItems:(id)arg1 commentScene:(int)arg2;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)unreadItems;
- (void)setUnreadItems:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
