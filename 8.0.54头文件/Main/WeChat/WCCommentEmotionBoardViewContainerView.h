@interface WCCommentEmotionBoardViewContainerView : MMUIView
{
    EmoticonBoardView * _emotionBoardView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)addEmotionBoardView:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)emotionBoardView;
- (void)setEmotionBoardView:(id)arg1;
- (void).cxx_destruct;
@end

