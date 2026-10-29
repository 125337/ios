@interface RingTonePickCollectionViewCell : UITableViewCell <RingTonePlayerExt>
{
    BOOL _isPlaying; // +0x8
    RingToneDetail * _ring; // +0x10
    id <RingTonePickCollectionViewCellDelegate> _delegate; // +0x18
    unsigned long long _scene; // +0x20
    long long _index; // +0x28
    RingToneImageView * _coverView; // +0x30
    UIView * _bottomView; // +0x38
    MMUILabel * _titleLabel; // +0x40
    MMUILabel * _descLabel; // +0x48
    UIView * _descStack; // +0x50
    MMUILabel * _settingsLabel; // +0x58
    unsigned long long _useFriendNum; // +0x60
    unsigned long long _settingNum; // +0x68
    UIView * _detailLabel; // +0x70
}
+ (id)cellID;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)setIsPlaying:(BOOL)arg1;
- (void)initiativeTriggerPlay;
- (void)updateContentWithRingDetail:(id)arg1 friendName:(id)arg2;
- (void)internalUpdateContentWith:(id)arg1 friendName:(id)arg2;
- (void)initTiltleLabel;
- (void)initDescLabel;
- (void)initSettingsLabel;
- (void)initDetailLable;
- (void)jumpToPlayerPage;
- (void)addConstraints;
- (void)prepareForReuse;
- (void)setHighlightedForCell:(BOOL)arg1;
- (id)coverView;
- (id)bottomView;
- (void)stopAllPlay;
- (void)playWithID:(id)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)isPlaying;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (void)setCoverView:(id)arg1;
- (void)setBottomView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)descStack;
- (void)setDescStack:(id)arg1;
- (id)settingsLabel;
- (void)setSettingsLabel:(id)arg1;
- (unsigned long long)useFriendNum;
- (void)setUseFriendNum:(unsigned long long)arg1;
- (unsigned long long)settingNum;
- (void)setSettingNum:(unsigned long long)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end

