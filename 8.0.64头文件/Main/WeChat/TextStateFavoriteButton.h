@interface TextStateFavoriteButton : TextStateBlurButton
{
    BOOL _notify; // +0x8
    unsigned int _funcType; // +0xc
    NSNumber * _typeNumber; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFuncType:(unsigned int)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (unsigned int)type;
- (void)changeForOther;
- (void)changeForSelfWithInteractionCount:(unsigned int)arg1 notifyCount:(unsigned int)arg2;
- (void)favoriteImpact;
- (id)typeNumber;
- (void)setTypeNumber:(id)arg1;
- (unsigned int)funcType;
- (void)setFuncType:(unsigned int)arg1;
- (BOOL)hasNotify;
- (void)setNotify:(BOOL)arg1;
- (void).cxx_destruct;
@end
