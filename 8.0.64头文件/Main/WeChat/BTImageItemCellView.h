@interface BTImageItemCellView : BTReaderItemCellView <IDownloadImageExt>
{
    CAGradientLayer * m_maskLayer; // +0x38
    UIView * m_maskView; // +0x40
    NSMutableArray * _webImgViewArr; // +0x48
    NSMutableArray * _imgBtnArr; // +0x50
    UIImageView * _imageIcon; // +0x58
    MMUILabel * _imageNum; // +0x60
}
- (void)initTopReaderItem;
- (void)initNormalReaderItem;
- (void)initCoverViews;
- (void)onUpdateViewModel;
- (unsigned long long)displayImageViewNum;
- (id)accessibilityLabel;
- (void)initNumLabelAndIcon;
- (void)layoutSubviewsTopItem;
- (void)layoutSubviewsNormalItem;
- (void)initCoverMaskLayer;
- (id)webImgViewArr;
- (void)setWebImgViewArr:(id)arg1;
- (id)imgBtnArr;
- (void)setImgBtnArr:(id)arg1;
- (id)imageIcon;
- (void)setImageIcon:(id)arg1;
- (id)imageNum;
- (void)setImageNum:(id)arg1;
- (void).cxx_destruct;
@end
