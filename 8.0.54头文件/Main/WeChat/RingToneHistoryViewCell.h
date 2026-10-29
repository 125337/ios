@interface RingToneHistoryViewCell : MMBaseMultiMenuTableViewCell <RingTonePlayerExt>
{
    BOOL _isPlaying; // +0x31
    RingToneDetail * _ring; // +0x38
    id <RingToneHistoryViewCellDelegate> _delegate; // +0x40
    long long _index; // +0x48
    RingToneImageView * _coverView; // +0x50
    UIView * _bottomView; // +0x58
    MMUILabel * _titleLabel; // +0x60
    MMUILabel * _descLabel; // +0x68
    UIView * _rightContentStackView; // +0x70
    UIView * _seperatorLine; // +0x78
    UIView * _detailLabel; // +0x80
}
- (void)updateContentWithRingDetail:(id)arg1;
- (void)layoutSubviews;
- (void)jumpToPlayerPage;
- (void)prepareForReuse;
- (void)initiativeTriggerPlay;
- (void)setIsPlaying:(BOOL)arg1;
- (void)stopAllPlay;
- (void)playWithID:(id)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (BOOL)isPlaying;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)rightContentStackView;
- (void)setRightContentStackView:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end

