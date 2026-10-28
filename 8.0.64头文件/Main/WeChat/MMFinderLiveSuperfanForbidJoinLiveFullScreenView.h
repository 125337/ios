@interface MMFinderLiveSuperfanForbidJoinLiveFullScreenView : MMFinderLiveForbidJoinLiveFullScreenView
{
    id /* block */ _confirmCallback; // +0x8
}
- (void)notifyAppear;
- (void)notifyDisappear;
- (void)updateConfirmButtonTitleAndImage;
- (id)tipsLabelText;
- (void)onConfirmButtonClicked;
- (id /* block */)confirmCallback;
- (void)setConfirmCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
