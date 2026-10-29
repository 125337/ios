@interface WCTimeLineEditImageLayoutView : WCEditImageLayoutView
{
    BOOL _isTimelinePost; // +0x8
}
- (BOOL)shouldShowAiBtn;
- (void)reloadBottomEditImageBar;
- (CGRect)getBtnAccessibilityFrameWithButton:(id)arg1;
- (BOOL)isTimelinePost;
- (void)setIsTimelinePost:(BOOL)arg1;
@end
