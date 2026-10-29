@interface WCMicroMerchantAdMediaTextCellView : WCMicroMerchantAdCellView
{
    RichTextView * _textLabel; // +0x8
    UILabel * _sourceLabel; // +0x10
    UILabel * _auxiliaryLabel; // +0x18
}
+ (double)getCellHeightForDataItem:(id)arg1;
+ (double)getCellHeightForDataItem:(id)arg1 containerWidth:(double)arg2;
- (void)initView;
- (id)textLabel;
- (id)sourceLabel;
- (id)auxiliaryLabel;
- (void)updateUI;
- (void)layoutMediaContainerSubviews;
- (void)layoutAdvertiserView;
- (double)headImageViewWidth;
- (BOOL)shouldShowAuxiliaryOverlay;
- (double)mediaWidthForHeight:(double)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setSourceLabel:(id)arg1;
- (void)setAuxiliaryLabel:(id)arg1;
- (void).cxx_destruct;
@end
