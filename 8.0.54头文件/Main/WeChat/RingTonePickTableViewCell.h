@interface RingTonePickTableViewCell : UITableViewCell <RingTonePlayerExt>
{
    BOOL _isPlaying; // +0x8
    BOOL _forbidActionButtons; // +0x9
    BOOL _highLighted; // +0xa
    id <RingTonePickTableViewCellDelegate> _delegate; // +0x10
    UIView * _bottomView; // +0x18
    UIButton * _originVideoButton; // +0x20
    unsigned long long _scene; // +0x28
    RingToneImageView * _coverView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    UIStackView * _titleStack; // +0x40
    MMUILabel * _descLabel; // +0x48
    UIStackView * _descStack; // +0x50
    UIButton * _useButton; // +0x58
    UIButton * _listButton; // +0x60
    UIStackView * _actionsView; // +0x68
    RingToneDetail * _ring; // +0x70
    VideoRingNetProvider * _net; // +0x78
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateContentWithRingDetail:(id)arg1 higlightContent:(BOOL)arg2;
- (void)internalUpdateContentWith:(id)arg1 higlightContent:(BOOL)arg2;
- (void)prepareForReuse;
- (void)initBottomView;
- (void)initCoverView;
- (void)initTiltleLabel;
- (void)initdescLabel;
- (void)setIsPlaying:(BOOL)arg1;
- (void)initActionButtons;
- (void)changeButtonImageForVoIP;
- (void)addConstraints;
- (void)onUseButtonTap;
- (void)onTapToPlay;
- (BOOL)accessibilityPerformMagicTap;
- (void)stopAllPlay;
- (void)playWithID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)originVideoButton;
- (void)setOriginVideoButton:(id)arg1;
- (BOOL)isPlaying;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)forbidActionButtons;
- (void)setForbidActionButtons:(BOOL)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleStack;
- (void)setTitleStack:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)descStack;
- (void)setDescStack:(id)arg1;
- (id)useButton;
- (void)setUseButton:(id)arg1;
- (id)listButton;
- (void)setListButton:(id)arg1;
- (id)actionsView;
- (void)setActionsView:(id)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (BOOL)highLighted;
- (void)setHighLighted:(BOOL)arg1;
- (id)net;
- (void)setNet:(id)arg1;
- (void).cxx_destruct;
@end

