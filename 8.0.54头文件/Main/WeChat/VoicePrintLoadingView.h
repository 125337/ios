@interface VoicePrintLoadingView : UIView
{
    MMUIActivityIndicatorView * _loadingView; // +0x8
    MMUILabel * _descriptionLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end

