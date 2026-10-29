@interface TemplateNotifyMessageCellView : BaseMessageCellView <MMWebImageViewDelegate, ServiceNotifyMsgMgrExt>
{
    BOOL _liveImageLoaded; // +0x25
    WCFinderLiveInfo * _liveInfo; // +0x28
    WCFinderGetLiveInfoModel * _getLiveInfoModel; // +0x30
    MMUILabel * _blockSloganLabel; // +0x38
    MMWebImageView * _avatarImageView; // +0x40
    UILabel * _nickNameLabel; // +0x48
    MMWebImageView * _authIconImageView; // +0x50
    MMUIButton * _headerMenuButton; // +0x58
    UIView * _lineView; // +0x60
    UILabel * _titleLabel; // +0x68
    UIView * _liveMaskView; // +0x70
    WCFinderLiveNowView * _logoView; // +0x78
    WCFinderLiveNowView * _liveMaskTipsView; // +0x80
    MMWebImageView * _liveImageView; // +0x88
}
- (void)setViewModel:(id)arg1;
- (void)setLiveInfo:(id)arg1;
- (void)prepareForReuse;
- (void)layoutContentView;
- (id)genDisplayViewWithItemInfo:(id)arg1 longestKeyLabelWidth:(double)arg2 maxDisplayViewWidth:(double)arg3;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3 maxLine:(unsigned long long)arg4;
- (id)genLineView;
- (id)genNickNameLabel;
- (id)muteSloganStr;
- (id)muteSloganFont;
- (CGSize)muteSloganSize;
- (id)genblockSloganLabel;
- (id)genTitleLabel;
- (void)initLiveImageView;
- (id)genAvatarImageView;
- (id)genMoreLiveAvatarImageView;
- (id)genAuthIconImageView;
- (id)genHeaderMenuButton;
- (id)liveMaskTipsView;
- (id)logoView;
- (id)liveMaskView;
- (void)refreshLiveMaskEffect;
- (void)onAppear;
- (void)updateLiveStatus;
- (void)onMoreButton:(id)arg1;
- (void)reportMoreButton:(id)arg1 isCick:(BOOL)arg2 isCancel:(BOOL)arg3;
- (void)onTouchUpInside;
- (BOOL)isAutoPlaying;
- (void)report21158Click;
- (id)genLiveRoomAlternativeDataItem:(id)arg1;
- (BOOL)shouldShowMoreButton;
- (BOOL)shouldShowComplaintEntry;
- (BOOL)canAutoPlayVideoWithoutSound;
- (void)autoPauseVideoWithoutSound;
- (void)autoPlayVideoWithoutSound;
- (void)complaintEntry;
- (void)onLiveInfoUpdated;
- (id)liveChannelExtra;
- (BOOL)isFinderLiveTeamUpMsg;
- (BOOL)isFinderGameLiveRefundMsg;
- (BOOL)isFinderLiveFansGroupLiveMsg;
- (BOOL)isCustomNotifyMsg;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onNotifyInfoChangeWithMsg:(id)arg1;
- (id)liveInfo;
- (id)getLiveInfoModel;
- (void)setGetLiveInfoModel:(id)arg1;
- (id)blockSloganLabel;
- (void)setBlockSloganLabel:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)authIconImageView;
- (void)setAuthIconImageView:(id)arg1;
- (id)headerMenuButton;
- (void)setHeaderMenuButton:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void)setLiveMaskView:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setLiveMaskTipsView:(id)arg1;
- (id)liveImageView;
- (void)setLiveImageView:(id)arg1;
- (BOOL)liveImageLoaded;
- (void)setLiveImageLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end

