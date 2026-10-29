@interface MMFinderLiveForbidJoinLiveFullScreenView : UIView
{
    id /* block */ _closeCallback; // +0x8
    UIView * _backgroundView; // +0x10
    MMUIButton * _closeButton; // +0x18
    UIButton * _confirmButton; // +0x20
    MMFinderLiveTask * _liveTask; // +0x28
    WCFinderHeadImageView * _anchorHeadImageView; // +0x30
    MMUILabel * _anchorNameLabel; // +0x38
    MMWebImageView * _authIconView; // +0x40
    MMUILabel * _tipsLabel; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 liveTask:(id)arg2;
- (void)showInView:(id)arg1;
- (void)dismiss;
- (void)notifyAppear;
- (void)notifyDisappear;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutConfirmButton;
- (void)layoutBackgroundView;
- (void)layoutCloseButton;
- (void)layoutAnchorHeadImageView;
- (void)layoutAnchorNameLabelAndAuthIconView;
- (void)layoutTipsLabel;
- (void)onConfirmButtonClicked;
- (void)updateConfirmButtonTitleAndImage;
- (void)onCloseButtonClicked;
- (id)tipsLabelFont;
- (id)tipsLabelText;
- (id)anchorContact;
- (BOOL)needAnchorInfo;
- (id /* block */)closeCallback;
- (void)setCloseCallback:(id /* block */)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)anchorHeadImageView;
- (void)setAnchorHeadImageView:(id)arg1;
- (id)anchorNameLabel;
- (void)setAnchorNameLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

