@interface MMFinderLiveConnectedMicAnchorCellView : MMFinderLiveConnectedMicUserCellView
{
    BOOL _forceDisableOperationButton; // +0x48
    WCFinderHeadImageView * _avatarView; // +0x50
    MMWebImageView * _authIconView; // +0x58
}
+ (id)ReuseIdentifier;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configAvatarView;
- (void)configAuthIconView;
- (void)configSubTitleLabel;
- (void)configNickNameLabelWithSearchInfo:(id)arg1;
- (void)updateRightButton;
- (void)updateWithConnectMicUser:(id)arg1 searchInfo:(id)arg2 forceHideOperationButton:(BOOL)arg3 forceDisableOperationButton:(BOOL)arg4 hideBottomSeparatorLine:(BOOL)arg5;
- (void)layoutUI;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (BOOL)forceDisableOperationButton;
- (void)setForceDisableOperationButton:(BOOL)arg1;
- (void).cxx_destruct;
@end

