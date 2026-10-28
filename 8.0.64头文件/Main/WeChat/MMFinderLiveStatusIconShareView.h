@interface MMFinderLiveStatusIconShareView : MMFinderLiveBaseShareView
{
    WCFinderLiveIconImageView * _statusView; // +0x8
}
- (void)refreshSubviews;
- (void)refreshStatusView;
- (void)reloadStatusViewIfNeededWithStyle:(unsigned long long)arg1;
- (void)refreshStatusViewWithShareItem:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (void).cxx_destruct;
@end
