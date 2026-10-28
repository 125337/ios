@interface MMFinderLiveConnectedMicBaseAnchorCellView : MMFinderLiveConnectedMicBaseUserCellView
{
    BOOL _forceDisableOperationButton; // +0x48
    BOOL _useNewSubTitle; // +0x49
    WCFinderHeadImageView * _avatarView; // +0x50
    WCFinderAuthInfoIconView * _authIconView; // +0x58
}
+ (id)ReuseIdentifier;
- (void)resetState;
- (void)layoutSubviews;
- (void)configAvatarView;
- (void)configAuthIconView;
- (void)configSubTitleLabel;
- (void)configNickNameLabelWithSearchInfo:(id)arg1;
- (void)updateRightButton;
- (void)updateWithConnectMicUser:(id)arg1 searchInfo:(id)arg2 forceHideOperationButton:(BOOL)arg3 forceDisableOperationButton:(BOOL)arg4 hideBottomSeparatorLine:(BOOL)arg5;
- (void)updateUseNewSubTitle:(BOOL)arg1;
- (void)layoutUI;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (BOOL)forceDisableOperationButton;
- (void)setForceDisableOperationButton:(BOOL)arg1;
- (BOOL)useNewSubTitle;
- (void)setUseNewSubTitle:(BOOL)arg1;
- (void).cxx_destruct;
@end
