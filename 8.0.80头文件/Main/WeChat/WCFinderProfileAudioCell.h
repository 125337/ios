@interface WCFinderProfileAudioCell : UICollectionViewCell
{
    BOOL _fullBottomLine; // +0x8
    BOOL _fromAudioPage; // +0x9
    int _audioStatus; // +0xc
    WCFinderStreamProfileHeadData * _profileHeadData; // +0x10
    MMListenItem * _dataItem; // +0x18
    UIImageView * _imageView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _descLabel; // +0x30
    NSURL * _coverUrl; // +0x38
    UIView * _line; // +0x40
    UILabel * _statusLabel; // +0x48
    UIImageView * _failIcon; // +0x50
    MMUIButton * _starBtn; // +0x58
    UIImageView * _playNumIconView; // +0x60
    UILabel * _playNumLabel; // +0x68
    WCFinderAnimationLoadingView * _loadingView; // +0x70
}
+ (double)displayHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setShowBottomLine:(BOOL)arg1;
- (BOOL)showBottomLine;
- (void)setDataItem:(id)arg1;
- (void)updateCoverUrl:(id)arg1;
- (void)updateStatusLabel:(id)arg1;
- (void)updateAudioDuration:(long long)arg1;
- (void)layoutSubviews;
- (void)_doLayout;
- (void)onClickStar:(id)arg1;
- (id)profileHeadData;
- (void)setProfileHeadData:(id)arg1;
- (id)dataItem;
- (BOOL)fullBottomLine;
- (void)setFullBottomLine:(BOOL)arg1;
- (BOOL)fromAudioPage;
- (void)setFromAudioPage:(BOOL)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)line;
- (void)setLine:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)failIcon;
- (void)setFailIcon:(id)arg1;
- (id)starBtn;
- (void)setStarBtn:(id)arg1;
- (id)playNumIconView;
- (void)setPlayNumIconView:(id)arg1;
- (id)playNumLabel;
- (void)setPlayNumLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (int)audioStatus;
- (void)setAudioStatus:(int)arg1;
- (void).cxx_destruct;
@end
