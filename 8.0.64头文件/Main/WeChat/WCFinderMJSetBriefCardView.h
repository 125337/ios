@interface WCFinderMJSetBriefCardView : MMUIView
{
    UIView * _line; // +0x8
    UIImageView * _mediaBkgImage; // +0x10
    RichTextView * _titleTextView; // +0x18
    UILabel * _subTitleLabel; // +0x20
    MMUIButton * _button; // +0x28
}
+ (id)buildTitleTextView:(double)arg1;
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)line;
- (id)button;
- (id)mediaBkgImage;
- (id)titleTextView;
- (id)subTitleLabel;
- (void)layoutAllSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateWithVM:(id)arg1 clickBlock:(id /* block */)arg2;
- (void)updateWithImageUrl:(id)arg1 defaultImage:(id)arg2 title:(id)arg3 subTitle:(id)arg4 btnSvgIcon:(id)arg5 btnTitle:(id)arg6 clickBlock:(id /* block */)arg7;
- (void)setLine:(id)arg1;
- (void)setMediaBkgImage:(id)arg1;
- (void)setTitleTextView:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end
