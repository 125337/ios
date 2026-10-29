@interface MMLiveMusicOperationPanel : UIView
{
    id <MMLiveMusicOperationPanelDelegate> _delegate; // +0x8
    UIView * _panelView; // +0x10
    MMUIButton * _bgMusicButton; // +0x18
    UILabel * _bgMusicLabel; // +0x20
    UILabel * _bgMusicGuideLabel; // +0x28
    MMUIButton * _singButton; // +0x30
    UILabel * _singLabel; // +0x38
    UILabel * _singGuideLabel; // +0x40
    MMUIButton * _arrowButton; // +0x48
    MMUIButton * _backgroundExitButton; // +0x50
}
- (void)layoutSubviews;
- (void)showPanel;
- (void)setSubPathWithTitle:(id)arg1 selection:(unsigned long long)arg2;
- (void)onTapNotPanelArea;
- (void)closeWithSelection:(unsigned long long)arg1;
- (void)onClickBGMusicButton;
- (void)onClickSingButton;
- (id)panelView;
- (id)arrowButton;
- (id)backgroundExitButton;
- (id)singButton;
- (id)singLabel;
- (id)bgMusicButton;
- (id)bgMusicLabel;
- (id)bgMusicGuideLabel;
- (id)singGuideLabel;
- (id)createDescLabelWithText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPanelView:(id)arg1;
- (void)setBgMusicButton:(id)arg1;
- (void)setBgMusicLabel:(id)arg1;
- (void)setBgMusicGuideLabel:(id)arg1;
- (void)setSingButton:(id)arg1;
- (void)setSingLabel:(id)arg1;
- (void)setSingGuideLabel:(id)arg1;
- (void)setArrowButton:(id)arg1;
- (void)setBackgroundExitButton:(id)arg1;
- (void).cxx_destruct;
@end

