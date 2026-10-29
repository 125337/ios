@interface WCFlexBaseView : UIView
- (id)initWithFrame:(CGRect)arg1;
- (void)configureLayout;
- (void)setup;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)callSuperlayoutSubviews;
@end
