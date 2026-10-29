@interface WARecentForwardScrollViewHelper : NSObject <RecentForwardScrollViewDelegate, IWARecentForwardScrollViewHelper>
{
    RecentForwardScrollView * _forwardView; // +0x8
    id <WARecentForwardScrollViewHelperDelegate> _delegate; // +0x10
}
- (id)init;
- (id)internalView;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)forwardView;
- (void)setForwardView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

