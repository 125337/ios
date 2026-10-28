@interface WCThumbViewParams : NSObject
{
    BOOL _ImageView_displaysPuzzleImageViews; // +0x8
    id <WCImageViewDelegate> _WCImageView_delegate; // +0x10
    id <WCPuzzleImageViewDelegate> _WCPuzzleImageView_delegate; // +0x18
    UIColor * _TextView_backgroundColor; // +0x20
    UIFont * _TextView_font; // +0x28
    UIColor * _TextView_textColor; // +0x30
    long long _TextView_textVerticalAlignment; // +0x38
    long long _puzzleImageViewLayoutStyle; // +0x40
    CGRect _ImageView_frame; // +0x48
    CGRect _TextView_frame; // +0x68
    UIEdgeInsets _TextView_textPadding; // +0x88
}
- (id)init;
- (CGRect)ImageView_frame;
- (void)setImageView_frame:(CGRect)arg1;
- (BOOL)ImageView_displaysPuzzleImageViews;
- (void)setImageView_displaysPuzzleImageViews:(BOOL)arg1;
- (id)WCImageView_delegate;
- (void)setWCImageView_delegate:(id)arg1;
- (id)WCPuzzleImageView_delegate;
- (void)setWCPuzzleImageView_delegate:(id)arg1;
- (CGRect)TextView_frame;
- (void)setTextView_frame:(CGRect)arg1;
- (id)TextView_backgroundColor;
- (void)setTextView_backgroundColor:(id)arg1;
- (id)TextView_font;
- (void)setTextView_font:(id)arg1;
- (id)TextView_textColor;
- (void)setTextView_textColor:(id)arg1;
- (UIEdgeInsets)TextView_textPadding;
- (void)setTextView_textPadding:(UIEdgeInsets)arg1;
- (long long)TextView_textVerticalAlignment;
- (void)setTextView_textVerticalAlignment:(long long)arg1;
- (long long)puzzleImageViewLayoutStyle;
- (void)setPuzzleImageViewLayoutStyle:(long long)arg1;
- (void).cxx_destruct;
@end
