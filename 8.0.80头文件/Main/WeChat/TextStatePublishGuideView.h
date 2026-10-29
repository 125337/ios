@interface TextStatePublishGuideView : UIView
{
    id /* block */ _completionHandler; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _subtitleLabel; // +0x18
    UIButton * _knowButton; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)onTapKnowButton;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)knowButton;
- (void)setKnowButton:(id)arg1;
- (void).cxx_destruct;
@end
