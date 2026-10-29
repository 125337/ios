@interface WCFinderEnterStreamTipBubbleView : MMUIView
{
    BOOL _canJump; // +0x8
    FinderEnterStreamTips * _tips; // +0x10
    WCFinderCustomImageRichTextView * _richTextView; // +0x18
    UIImageView * _arrowImgView; // +0x20
}
- (id)init;
- (void)enableJump:(BOOL)arg1;
- (void)setText:(id)arg1;
- (id)richTextView;
- (id)arrowImgView;
- (id)tips;
- (void)setTips:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (void)setArrowImgView:(id)arg1;
- (BOOL)canJump;
- (void)setCanJump:(BOOL)arg1;
- (void).cxx_destruct;
@end

