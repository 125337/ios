@interface WCFinderTemplateChooseCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>
{
    BOOL _showBoarder; // +0x8
    MMWebImageView * _customImageView; // +0x10
    MMUIActivityIndicatorView * _customLoadingView; // +0x18
    MMUILabel * _templateNameLabel; // +0x20
    MMUIImageView * _blankTemplateImgView; // +0x28
    UIView * _backGroundBorderView; // +0x30
}
+ (id)cellID;
+ (CGSize)cellSize;
+ (double)kCellWidth;
+ (id)genTipsLabel;
+ (double)kTipsH;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)reLayoutViews;
- (void)layoutSubviews;
- (void)updateWithOMJTemplateInfo:(id)arg1;
- (void)updateWithMJTemplateInfo:(id)arg1;
- (void)setShowBoarder:(BOOL)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)customImageView;
- (void)setCustomImageView:(id)arg1;
- (id)customLoadingView;
- (void)setCustomLoadingView:(id)arg1;
- (id)templateNameLabel;
- (void)setTemplateNameLabel:(id)arg1;
- (id)blankTemplateImgView;
- (void)setBlankTemplateImgView:(id)arg1;
- (id)backGroundBorderView;
- (void)setBackGroundBorderView:(id)arg1;
- (BOOL)showBoarder;
- (void).cxx_destruct;
@end

