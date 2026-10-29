@interface AnnotationUnSelectContentView : UIView
{
    UIView * _outerContentView; // +0x8
    UIView * _innerContentView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutOuterContentView;
- (void)layoutInnerContentView;
- (id)outerContentView;
- (void)setOuterContentView:(id)arg1;
- (id)innerContentView;
- (void)setInnerContentView:(id)arg1;
- (void).cxx_destruct;
@end

