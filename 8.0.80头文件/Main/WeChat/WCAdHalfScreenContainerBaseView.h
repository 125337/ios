@interface WCAdHalfScreenContainerBaseView : NSObject <MMPageSheetBottomViewDelegate>
{
    WCAdHalfScreenContainerInfo * _containerInfo; // +0x8
    id <WCAdHalfScreenContainerViewDelegate> _delegate; // +0x10
}
- (id)initWithContainerInfo:(id)arg1;
- (double)halfScreenContentWidth;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (id)genUILabelWithType:(int)arg1;
- (void)fitLabelToContentWidth:(id)arg1;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (id)containerInfo;
- (void)setContainerInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
