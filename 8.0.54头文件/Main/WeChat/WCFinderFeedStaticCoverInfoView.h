@interface WCFinderFeedStaticCoverInfoView : UIView
{
    double _maxWidth; // +0x8
    MMWebImageView * _rightIconWebImageView; // +0x10
    UILabel * _rightInfoLabel; // +0x18
    UILabel * _leftInfoLabel; // +0x20
    UIView * _separateLine; // +0x28
    UIView * _stickyTopContainerView; // +0x30
}
+ (CGSize)getDefaultIconImageSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)updateContentWithLeftText:(id)arg1 rightImage:(id)arg2 rightText:(id)arg3 isShowStickyTop:(BOOL)arg4;
- (void)updateContentWithLeftText:(id)arg1 rightImage:(id)arg2 rightText:(id)arg3 isShowStickyTop:(BOOL)arg4 leftTextFont:(id)arg5;
- (void)updateContentWithLeftText:(id)arg1 rightImage:(id)arg2 rightText:(id)arg3 isShowStickyTop:(BOOL)arg4 hiddenSeparateLine:(BOOL)arg5;
- (void)updateContentWithLeftText:(id)arg1 rightImageUrl:(id)arg2 hiddenSeparateLine:(BOOL)arg3 leftTextFont:(id)arg4;
- (void)setTextColor:(id)arg1;
- (void)setIconHidden:(BOOL)arg1;
- (void)adjustMargin;
- (void)adjustMarginWithNoneIconLayout:(double)arg1 iconLayout:(double)arg2 iconLeftMargin:(double)arg3 leftInfoLabelLeftMargin:(double)arg4;
- (id)stickyTopContainerView;
- (id)getRightIconImage;
- (id)getRightInfoLabelText;
- (id)getLeftInfoLabelText;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)rightIconWebImageView;
- (void)setRightIconWebImageView:(id)arg1;
- (id)rightInfoLabel;
- (void)setRightInfoLabel:(id)arg1;
- (id)leftInfoLabel;
- (void)setLeftInfoLabel:(id)arg1;
- (id)separateLine;
- (void)setSeparateLine:(id)arg1;
- (void)setStickyTopContainerView:(id)arg1;
- (void).cxx_destruct;
@end

