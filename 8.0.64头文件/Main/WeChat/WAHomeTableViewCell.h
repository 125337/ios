@interface WAHomeTableViewCell : MMMultiMenuTableViewCell <ZZFlexibleLayoutViewProtocol, MMWebImageViewDelegate>
{
    BOOL _isNeedLogoGray; // +0x40
    long long _runningState; // +0x48
    BOOL _isStared; // +0x50
    BOOL _isBottom; // +0x51
    UIImage * _defaultHeaderImage; // +0x58
    unsigned int _stateFlag; // +0x60
    NSString * _iconUrl; // +0x68
    NSString * _title; // +0x70
    NSString * _openDesc; // +0x78
    NSArray * _tagsArray; // +0x80
    MMWebImageView * _headImageView; // +0x88
    MMUILabel * _titleLabel; // +0x90
    MMUILabel * _debugLabel; // +0x98
    MMUILabel * _stateLabel; // +0xa0
    UIView * _lineView; // +0xa8
    WCTagsView * _tagsView; // +0xb0
    WAHomeTableViewCellDescView * _descView; // +0xb8
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initHeadImageView;
- (void)initTitleLabel;
- (void)initTagsView;
- (void)initDebugLabel;
- (void)initStaredLogoView;
- (void)initStateLabel;
- (void)initLineView;
- (void)initDescView;
- (void)layoutSubviews;
- (void)setTagsArray:(id)arg1;
- (void)setIconUrl:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setStateFlag:(unsigned int)arg1;
- (void)setOpenDesc:(id)arg1;
- (void)makeStateNormal;
- (void)makeStateStopService;
- (void)makeStateBanned;
- (void)markStaredAnimated:(BOOL)arg1;
- (void)markUnStaredAnimated:(BOOL)arg1;
- (void)markBottom;
- (void)markUnBottom;
- (void)hideMenuOptionsAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onLoadImageOK:(id)arg1;
- (unsigned int)stateFlag;
- (id)iconUrl;
- (id)title;
- (id)openDesc;
- (id)tagsArray;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)debugLabel;
- (void)setDebugLabel:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)tagsView;
- (void)setTagsView:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (void).cxx_destruct;
@end
