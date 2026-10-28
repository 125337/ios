@interface MMFinderLiveConcertRecentForwardScrollViewDelegateProxy : NSObject <RecentForwardScrollViewDelegate>
{
    unsigned long long _contentType; // +0x8
    id <MMFinderLiveConcertRecentForwardScrollViewDelegate> _delegate; // +0x10
}
- (id)initWithContentType:(unsigned long long)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
