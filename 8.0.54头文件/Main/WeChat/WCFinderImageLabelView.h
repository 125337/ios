@interface WCFinderImageLabelView : UIView
{
    id <WCFinderImageLabelViewDelegate> _delegate; // +0x8
    id _dataSource; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    RichTextView * _textView; // +0x20
}
+ (double)getHeightByIconHeight:(double)arg1;
- (id)initWithWidth:(double)arg1 iconHeight:(double)arg2;
- (void)resetReuseState;
- (void)udpateIconImageViewHeight:(double)arg1;
- (void)onClickAction;
- (id)iconImageView;
- (id)textView;
- (void)updateWithIconUrl:(id)arg1 content:(id)arg2 width:(double)arg3;
- (void)layoutAllSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end

