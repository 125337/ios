@interface EmoticonLensCollectionCell : UICollectionViewCell <EmoticonLensMgrExt>
{
    BOOL _isShowIconBackground; // +0x8
    BOOL _showSelectedBorder; // +0x9
    BOOL _showSelectedStatus; // +0xa
    EmoticonLensInfo * _emoticonLensItem; // +0x10
    unsigned long long _scenes; // +0x18
    UIColor * _titleColor; // +0x20
    UIView * _iconBgView; // +0x28
    UIImageView * _iconImageView; // +0x30
    MMUILabel * _descLabel; // +0x38
    UIView * _selectedView; // +0x40
    CircleProcessView * _progressView; // +0x48
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)setEmoticonLensItem:(id)arg1;
- (void)layoutSubviews;
- (void)setShowSelectedBorder:(BOOL)arg1;
- (void)setShowSelectedStatus:(BOOL)arg1;
- (void)setIsShowIconBackground:(BOOL)arg1;
- (void)setTitleColor:(id)arg1;
- (void)onEmoticonLensPkgDownloadProgress:(double)arg1 lensId:(id)arg2;
- (void)onEmoticonLensPkgDownloadSuccess:(id)arg1;
- (void)onEmoticonLensPkgDownloadFail:(id)arg1;
- (void)onEmoticonLensIconDownloadSuccess:(id)arg1;
- (id)emoticonLensItem;
- (unsigned long long)scenes;
- (void)setScenes:(unsigned long long)arg1;
- (BOOL)isShowIconBackground;
- (BOOL)showSelectedBorder;
- (BOOL)showSelectedStatus;
- (id)titleColor;
- (id)iconBgView;
- (void)setIconBgView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)selectedView;
- (void)setSelectedView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (void).cxx_destruct;
@end
