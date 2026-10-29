@interface MMScrollActionSheetContainerView : UIView <UIScrollViewDelegate>
{
    UIScrollView * _bodyView; // +0x8
    UIView * _footerView; // +0x10
    UIView * _headerView; // +0x18
    UIView * _bodyFooterView; // +0x20
    UIView * _maskView; // +0x28
    UIButton * _voiceoverExitButton; // +0x30
    id <MMScrollActionSheetContainerViewDelegate> _delegate; // +0x38
}
- (id)init;
- (id)bodyView;
- (id)footerView;
- (id)headerView;
- (id)voiceoverExitButton;
- (id)maskView;
- (void)reloadMaskView;
- (void)addActionSheetHeader:(id)arg1;
- (void)addActionSheetFooter:(id)arg1;
- (void)addActionSheetBodyFooter:(id)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onClickVoiceOverExitButton;
- (void)setBodyView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (id)bodyFooterView;
- (void)setBodyFooterView:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setVoiceoverExitButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

