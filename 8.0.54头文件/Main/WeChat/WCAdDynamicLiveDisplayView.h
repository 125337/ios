@interface WCAdDynamicLiveDisplayView : WCAdLiveDisplayView
{
    WCAdDynamicFeedElementRollTextInfo * _styleInfo; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 isFullCard:(BOOL)arg3 styleInfo:(id)arg4;
- (void)updateDynamicRollView;
- (void)layoutSubviews;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (void).cxx_destruct;
@end

