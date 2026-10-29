@interface MMLiveUnReadCountView : UIView
{
    UILabel * _unReadCountLabel; // +0x8
    long long _contentType; // +0x10
    unsigned long long _unReadCount; // +0x18
    id /* block */ _transferHitTestBlock; // +0x20
    UIImageView * _unReadIconView; // +0x28
}
+ (id)createUnReadCountStr:(unsigned long long)arg1;
- (id)initWithLabel:(id)arg1 icon:(id)arg2 backgroundColor:(id)arg3;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)refreshUI;
- (void)rotateIcon:(double)arg1;
- (id)accessibilityLabel;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)unReadCountLabel;
- (void)setUnReadCountLabel:(id)arg1;
- (long long)contentType;
- (void)setContentType:(long long)arg1;
- (unsigned long long)unReadCount;
- (void)setUnReadCount:(unsigned long long)arg1;
- (id /* block */)transferHitTestBlock;
- (void)setTransferHitTestBlock:(id /* block */)arg1;
- (id)unReadIconView;
- (void)setUnReadIconView:(id)arg1;
- (void).cxx_destruct;
@end

