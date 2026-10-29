@interface FindFriendRedDotBubbleView : UIView
{
    CAShapeLayer * _bubbleLayer; // +0x8
    UIView * _contentView; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    UIView * _headImageTopView; // +0x20
    RichTextView * _textView; // +0x28
    MMBadgeView * _badgeView; // +0x30
    WCFinderRedDotTipsShowInfo * _showInfo; // +0x38
    UITapGestureRecognizer * _tapGesture; // +0x40
    id /* block */ _callback; // +0x48
    CGSize _contentSize; // +0x50
}
+ (BOOL)validateShowInfo:(id)arg1;
- (id)initWithShowInfo:(id)arg1;
- (void)adjustAnchorPoint;
- (void)initContentView;
- (void)layoutContentView;
- (void)initTapGesture;
- (void)handleTap:(id)arg1;
- (void)updateArrowAtPoint:(CGPoint)arg1 width:(double)arg2;
- (void)generateBubbleLayerForArrowPosition:(double)arg1;
- (void)updateTapCallback:(id /* block */)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)bubbleLayer;
- (void)setBubbleLayer:(id)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)headImageTopView;
- (void)setHeadImageTopView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

