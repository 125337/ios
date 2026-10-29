@interface MMNormalTipsView : MMRectTriangleArrowView
{
    BOOL _showCloseButton; // +0x8
    BOOL _showArrowImage; // +0x9
    unsigned int _payment; // +0xc
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
    MMUILabel * _giftDescLabel; // +0x20
    MMUIButton * _closeButton; // +0x28
    UIImageView * _arrowImageView; // +0x30
    UIColor * _titleColor; // +0x38
    UIColor * _descColor; // +0x40
    double _edgeTop; // +0x48
    double _edgeLR; // +0x50
    id _userInfo; // +0x58
    id /* block */ _tapAction; // +0x60
    MMNormalTipsViewCloseButtonConfig * _closeButtonConfig; // +0x68
}
+ (CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 minWidth:(double)arg3 maxWidth:(double)arg4;
+ (CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 minWidth:(double)arg5 maxWidth:(double)arg6;
+ (CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 withCloseButton:(BOOL)arg3 minWidth:(double)arg4 maxWidth:(double)arg5;
+ (CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 withCloseButton:(BOOL)arg3 minWidth:(double)arg4 maxWidth:(double)arg5 titleFont:(id)arg6;
+ (CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 withCloseButton:(BOOL)arg5 minWidth:(double)arg6 maxWidth:(double)arg7;
+ (CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 withCloseButton:(BOOL)arg5 minWidth:(double)arg6 maxWidth:(double)arg7 titleFont:(id)arg8;
+ (CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 withCloseButton:(BOOL)arg5 minWidth:(double)arg6 maxWidth:(double)arg7 titleFont:(id)arg8 edgeTop:(double)arg9 edgeLR:(double)arg10;
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 titleColor:(id)arg3 withCloseButtonConfig:(id)arg4;
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 titleColor:(id)arg3 edgeTop:(double)arg4 edgeLR:(double)arg5 withCloseButtonConfig:(id)arg6;
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 withCloseButtonConfig:(id)arg3;
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 withCloseButton:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2;
- (void)initUI;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setAttributeTitle:(id)arg1;
- (void)setDesc:(id)arg1;
- (void)setDescColor:(id)arg1;
- (void)setGiftDesc:(id)arg1;
- (id)desc;
- (id)giftDesc;
- (void)setShowCloseButton:(BOOL)arg1;
- (void)setShowArrowImage:(BOOL)arg1;
- (void)removeAllSubViews;
- (void)setAttriButedDesc:(id)arg1;
- (id)attriButedDesc;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (id)titleLabel;
- (id)descLabel;
- (id)giftDescLabel;
- (id)closeButton;
- (id)arrowImageView;
- (unsigned int)payment;
- (void)setPayment:(unsigned int)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)descColor;
- (BOOL)showCloseButton;
- (BOOL)showArrowImage;
- (double)edgeTop;
- (void)setEdgeTop:(double)arg1;
- (double)edgeLR;
- (void)setEdgeLR:(double)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (id)closeButtonConfig;
- (void)setCloseButtonConfig:(id)arg1;
- (void).cxx_destruct;
@end
