@interface WCAdContactInfoHalfScreenViewController : ContactInfoViewController <MMPageSheetAdapterDelegate, WCAdConventionalHalfScreenCustomBackgroundViewDelegate>
{
    BOOL _isContactViewFullyVisible; // +0xd8
    BOOL _isContactViewClosedByUser; // +0xd9
    id <WCAdContactInfoHalfScreenViewControllerDelegate> _delegate; // +0xe0
    WCAdConventionalHalfScreenCustomBackgroundView * _customBackgroundView; // +0xe8
    UIView * _pageSheetHostView; // +0xf0
}
+ (double)profilePageSheetHeight;
- (double)fetchContactHalfScreenHeight;
- (void)showHalfScreenFromViewController:(id)arg1 animated:(BOOL)arg2;
- (id)getAdSheetAdapter;
- (id)customBackgroundView;
- (BOOL)isContactInfoPageSheetClosedByUser;
- (void)dismissContactInfoPageSheetWithAnimated:(BOOL)arg1;
- (id)onCustomBackgroundViewHitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (double)pageSheetContentWidth;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidRotation:(id)arg1;
- (void)pageSheetPresentAnimateDidEnd:(id)arg1;
- (void)pageSheetDidChangeVisibleHeight:(id)arg1 toHeight:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (id)pageSheetHostView;
- (void)setPageSheetHostView:(id)arg1;
- (BOOL)isContactViewFullyVisible;
- (void)setIsContactViewFullyVisible:(BOOL)arg1;
- (BOOL)isContactViewClosedByUser;
- (void)setIsContactViewClosedByUser:(BOOL)arg1;
- (void).cxx_destruct;
@end
