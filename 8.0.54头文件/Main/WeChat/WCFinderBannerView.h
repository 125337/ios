@interface WCFinderBannerView : UIView <ILinkEventExt>
{
    id <WCFinderBannerViewDelegate> _delegate; // +0x8
    RichTextView * _textView; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubViews;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)setTips:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)textView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end

