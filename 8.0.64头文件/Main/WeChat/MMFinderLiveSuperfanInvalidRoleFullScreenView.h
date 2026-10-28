@interface MMFinderLiveSuperfanInvalidRoleFullScreenView : MMFinderLiveForbidJoinLiveFullScreenView
{
    id /* block */ _switchRoleCallback; // +0x8
    UIImageView * _infoImageView; // +0x10
    MMUILabel * _nickLabel; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 liveTask:(id)arg2;
- (void)notifyAppear;
- (void)notifyDisappear;
- (void)updateConfirmButtonTitleAndImage;
- (id)tipsLabelText;
- (id)tipsLabelFont;
- (BOOL)needAnchorInfo;
- (void)onConfirmButtonClicked;
- (void)layoutUI;
- (void)refreshUIWithCurrentRole;
- (id)infoImageView;
- (id)headImageView;
- (id)nickLabel;
- (id /* block */)switchRoleCallback;
- (void)setSwitchRoleCallback:(id /* block */)arg1;
- (void)setInfoImageView:(id)arg1;
- (void)setNickLabel:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void).cxx_destruct;
@end
