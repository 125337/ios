@interface MMFinderLiveCreateLiveGuideConfirmView : UIView
{
    BOOL _showCancelButton; // +0x8
    id <MMFinderLiveCreateLiveGuideConfirmViewDelegate> _delegate; // +0x10
    MMUIButton * _startLiveButton; // +0x18
    MMUIButton * _cancelButton; // +0x20
}
- (id)init;
- (void)initStartLiveButton;
- (void)initCancelButton;
- (void)layoutSubviews;
- (void)layoutCancelButton;
- (void)layoutStartLiveButton;
- (void)updateEnableStartLive:(BOOL)arg1;
- (void)updateShowCancelButton:(BOOL)arg1;
- (double)getButtonHeight;
- (double)getButtonWidth;
- (BOOL)enableStartLive;
- (double)contentHeight;
- (void)onClickStartLiveButton:(id)arg1;
- (void)onClickCancelButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)startLiveButton;
- (void)setStartLiveButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (BOOL)showCancelButton;
- (void)setShowCancelButton:(BOOL)arg1;
- (void).cxx_destruct;
@end
