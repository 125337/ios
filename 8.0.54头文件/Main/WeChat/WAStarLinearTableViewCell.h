@interface WAStarLinearTableViewCell : UITableViewCell <MMWebImageViewDelegate>
{
    BOOL _isNeedLogoGray; // +0x8
    long long _runningState; // +0x10
    BOOL _isStared; // +0x18
    BOOL _isBottom; // +0x19
    unsigned int _stateFlag; // +0x1c
    NSString * _iconUrl; // +0x20
    NSString * _title; // +0x28
    NSMutableArray * _arrMenuItems; // +0x30
    NSArray * _tagsArray; // +0x38
    MMWebImageView * _headImageView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUILabel * _debugLabel; // +0x50
    MMUILabel * _stateLabel; // +0x58
    UIImageView * _staredView; // +0x60
    UIView * _lineView; // +0x68
    WCTagsView * _tagsView; // +0x70
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initHeadImageView;
- (void)initTitleLabel;
- (void)initTagsView;
- (void)initDebugLabel;
- (void)initStaredLogoView;
- (void)initStateLabel;
- (void)initLineView;
- (void)layoutSubviews;
- (void)setTagsArray:(id)arg1;
- (void)setIconUrl:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setStateFlag:(unsigned int)arg1;
- (void)makeStateNormal;
- (void)makeStateStopService;
- (void)makeStateBanned;
- (void)markStaredAnimated:(BOOL)arg1;
- (void)markUnStaredAnimated:(BOOL)arg1;
- (void)markBottom;
- (void)markUnBottom;
- (void)onLoadImageOK:(id)arg1;
- (unsigned int)stateFlag;
- (id)iconUrl;
- (id)title;
- (id)arrMenuItems;
- (void)setArrMenuItems:(id)arg1;
- (id)tagsArray;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)debugLabel;
- (void)setDebugLabel:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)staredView;
- (void)setStaredView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)tagsView;
- (void)setTagsView:(id)arg1;
- (void).cxx_destruct;
@end

