@interface WCFinderProfilePlaylistItemCell : UICollectionViewCell
{
    BOOL _firstColumn; // +0x8
    BOOL _isAuthor; // +0x9
    id _model; // +0x10
    void * * _updater; // +0x18
    TingCategoryCoverView * _coverView; // +0x20
    UIImageView * _normalCoverView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _descLabel; // +0x38
    UIImageView * _playInfoIconView; // +0x40
    UILabel * _playInfoLabel; // +0x48
    CGSize _cacheSize; // +0x50
}
+ (double)displayHeight:(double)arg1 firstColumn:(BOOL)arg2 showPlayInfo:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (id)coverView;
- (void)prepareForReuse;
- (id)normalCoverView;
- (void)setModel:(id)arg1;
- (void)doLayout;
- (void)layoutSubviews;
- (BOOL)firstColumn;
- (void)setFirstColumn:(BOOL)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (id)model;
- (void * *)updater;
- (void)setUpdater:(void * *)arg1;
- (void)setCoverView:(id)arg1;
- (void)setNormalCoverView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (CGSize)cacheSize;
- (void)setCacheSize:(CGSize)arg1;
- (id)playInfoIconView;
- (void)setPlayInfoIconView:(id)arg1;
- (id)playInfoLabel;
- (void)setPlayInfoLabel:(id)arg1;
- (void).cxx_destruct;
@end

