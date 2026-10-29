@interface GCTipLabel : UIView
{
    UILabel * _unReadCountLabel; // +0x8
    UIImageView * _unReadIconView; // +0x10
    unsigned long long _tipType; // +0x18
}
+ (id)createTipLabel;
+ (id)createTipLabel:(unsigned long long)arg1;
- (id)initWithLabel:(id)arg1 tipType:(unsigned long long)arg2;
- (void)updateLayerCornerRadius;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)updateWidth;
- (void)setUnreadIconImage:(id)arg1;
- (id)unReadCountLabel;
- (void)setUnReadCountLabel:(id)arg1;
- (id)unReadIconView;
- (void)setUnReadIconView:(id)arg1;
- (unsigned long long)tipType;
- (void)setTipType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
