@interface POICorrectionTextView : UIView
{
    BOOL _isFooterStyle; // +0x8
    BOOL _isTopSeperatorValid; // +0x9
    id <POICorrectionTextViewDelegate> _delegate; // +0x10
    double _contentPaddingX; // +0x18
    UILabel * _mainLabel; // +0x20
    UILabel * _tipsLabel; // +0x28
    UIView * _topSeperatorLine; // +0x30
}
+ (double)contentHeight:(double)arg1 isFooterStyle:(BOOL)arg2 paddingX:(double)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setIsFooterStyle:(BOOL)arg1;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isFooterStyle;
- (BOOL)isTopSeperatorValid;
- (void)setIsTopSeperatorValid:(BOOL)arg1;
- (double)contentPaddingX;
- (void)setContentPaddingX:(double)arg1;
- (id)mainLabel;
- (void)setMainLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)topSeperatorLine;
- (void)setTopSeperatorLine:(id)arg1;
- (void).cxx_destruct;
@end
