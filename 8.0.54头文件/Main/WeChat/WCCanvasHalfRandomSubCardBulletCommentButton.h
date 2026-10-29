@interface WCCanvasHalfRandomSubCardBulletCommentButton : WCHighLightButton
{
    NSString * _bulletComment; // +0x8
    RichTextView * _bulletCommentView; // +0x10
    UIView * _disabledCover; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 bulletComment:(id)arg2;
- (id)bulletCommentView;
- (id)disabledCover;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (id)bulletComment;
- (void)setBulletComment:(id)arg1;
- (void)setBulletCommentView:(id)arg1;
- (void)setDisabledCover:(id)arg1;
- (void).cxx_destruct;
@end

