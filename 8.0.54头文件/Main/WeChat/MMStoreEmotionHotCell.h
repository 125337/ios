@interface MMStoreEmotionHotCell : UICollectionViewCell <MMEmoticonStoreDownloadLogicDelegate>
{
    long long _type; // +0x8
    long long _scene; // +0x10
    EmoticonStoreItem * _item; // +0x18
    MMEmoticonStoreDownloadLogic * _downloadLogic; // +0x20
    long long _cellType; // +0x28
    MMWebImageView * _emotionButton; // +0x30
    UILabel * _emotionTitleLabel; // +0x38
    UIView * _imageBackgroundView; // +0x40
    MMWebImageView * _tagImageView; // +0x48
    UIImageView * _tagImageViewNew; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupButtonImageURL:(id)arg1;
- (void)setupLabelWithTitle:(id)arg1;
- (void)setupEmotionStoreItem:(id)arg1 Entrance:(unsigned int)arg2 andType:(long long)arg3;
- (void)hideFreeLabel;
- (void)setPersonalCellStyle;
- (void)setCellBackgroundColor:(id)arg1;
- (void)setScene:(long long)arg1 andType:(long long)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)item;
- (void)setupViews;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)loadTagImageView;
- (void)setupDownloadView;
- (void)setupButton;
- (void)setupLabel;
- (void)showFreeLabel;
- (BOOL)isEmoticonDownloaded;
- (void)onDownloadFinished;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (void)setItem:(id)arg1;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (long long)cellType;
- (void)setCellType:(long long)arg1;
- (id)emotionButton;
- (void)setEmotionButton:(id)arg1;
- (id)emotionTitleLabel;
- (void)setEmotionTitleLabel:(id)arg1;
- (id)imageBackgroundView;
- (void)setImageBackgroundView:(id)arg1;
- (id)tagImageView;
- (void)setTagImageView:(id)arg1;
- (id)tagImageViewNew;
- (void)setTagImageViewNew:(id)arg1;
- (void).cxx_destruct;
@end

