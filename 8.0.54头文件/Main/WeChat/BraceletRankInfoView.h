@interface BraceletRankInfoView : MMUIView <MMWebImageViewDelegate>
{
    DeviceRankInfo * m_rankInfo; // +0x8
    BOOL m_isBotton; // +0x10
    BOOL m_isFromFocus; // +0x11
    BOOL m_bShowRedDot; // +0x12
    UILabel * _rankLabel; // +0x18
    UILabel * _scoreLabel; // +0x20
    UILabel * _rankNumber; // +0x28
    UILabel * _nickNameLabel; // +0x30
    MMHeadImageView * _headImageView; // +0x38
    WAContact * _appContact; // +0x40
    WAContactGetter * _contactGetter; // +0x48
    MMWebImageView * _brandIconView; // +0x50
    MMUIButton * _brandTitleBtn; // +0x58
    UILabel * _resultLabel; // +0x60
    BraceletRankLikeButton * _likeButton; // +0x68
    MMUIViewController * _parentVC; // +0x70
    DeviceBrandJumpInfo * _jumpInfo; // +0x78
}
- (id)initWithDeviceRankInfo:(id)arg1 IsBottom:(BOOL)arg2 IsFromFocus:(BOOL)arg3 parentVC:(id)arg4;
- (id)initWithDeviceRankInfo:(id)arg1 IsBottom:(BOOL)arg2 IsFromFocus:(BOOL)arg3 showRedDot:(BOOL)arg4 parentVC:(id)arg5;
- (id)headImageView;
- (id)rankLabel;
- (id)rankNumber;
- (id)scoreLabel;
- (id)nickNameLabel;
- (id)brandIconView;
- (id)brandTitleBtn;
- (id)resultLabel;
- (void)initView;
- (void)addSeperateLine;
- (void)addSportRecordView;
- (void)addLikeButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)onClickAppButton;
- (void)onClickBrandBtn;
- (BOOL)isAppleWatch;
- (BOOL)isHardware;
- (BOOL)isOlympic2024;
- (void)onLoadImageOK:(id)arg1;
- (void)setRankLabel:(id)arg1;
- (void)setScoreLabel:(id)arg1;
- (void)setRankNumber:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (id)appContact;
- (void)setAppContact:(id)arg1;
- (id)contactGetter;
- (void)setContactGetter:(id)arg1;
- (void)setBrandIconView:(id)arg1;
- (void)setBrandTitleBtn:(id)arg1;
- (void)setResultLabel:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)parentVC;
- (void)setParentVC:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

