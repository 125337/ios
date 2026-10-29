@interface TingMyCollectionCoverView : UIView <MMWebImageViewDelegate>
{
    MMWebImageView * _bgCoverView; // +0x8
    MMWebImageView * _fgCoverView; // +0x10
    TingCoverInfo * _coverInfo; // +0x18
    unsigned long long _coverStatus; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)bgCoverView;
- (id)fgCoverView;
- (void)updateWithCoverInfo:(id)arg1;
- (void)loadImageUrl:(id)arg1 intoView:(id)arg2;
- (void)prepareForReuse;
- (void)onLoadImageOK:(id)arg1;
- (void)setBgCoverView:(id)arg1;
- (void)setFgCoverView:(id)arg1;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (unsigned long long)coverStatus;
- (void)setCoverStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
