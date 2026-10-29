@interface AnnotationSelectContentView : UIView
{
    UIImageView * _outerContentImgView; // +0x8
    UIView * _innerContentView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutOuterContentImgView;
- (void)layoutInnerContentView;
- (id)outerContentImgView;
- (void)setOuterContentImgView:(id)arg1;
- (id)innerContentView;
- (void)setInnerContentView:(id)arg1;
- (void).cxx_destruct;
@end

