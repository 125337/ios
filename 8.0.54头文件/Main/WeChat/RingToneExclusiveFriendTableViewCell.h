@interface RingToneExclusiveFriendTableViewCell : MMMultiMenuTableViewCell <RingToneToolActionResponder, RingTonePlayerExt>
{
    BOOL _expanded; // +0x40
    BOOL _isPlaying; // +0x41
    id <RingToneExclusiveFriendTableViewCellDelegate> _delegate; // +0x48
    RingTone * _ring; // +0x50
    RingToneDetail * _ringDetail; // +0x58
    UIImageView * _headImageView; // +0x60
    MMUILabel * _nameLabel; // +0x68
    MMUILabel * _titleLabel; // +0x70
    UIView * _lineView; // +0x78
    RingToneToolView * _toolView; // +0x80
    VideoRingNetProvider * _net; // +0x88
    UIView * _bottomView; // +0x90
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)initView;
- (void)updateContentWithRing:(id)arg1;
- (void)initiativeTriggerPlay;
- (void)setIsPlaying:(BOOL)arg1;
- (void)onToolViewPlayButtonTap:(BOOL)arg1;
- (void)onToolViewMoreButtonTap;
- (void)stopAllPlay;
- (void)playWithID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)expanded;
- (void)setExpanded:(BOOL)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (BOOL)isPlaying;
- (id)ringDetail;
- (void)setRingDetail:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)toolView;
- (void)setToolView:(id)arg1;
- (id)net;
- (void)setNet:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void).cxx_destruct;
@end

