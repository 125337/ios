@interface WCFinderProfileHeaderMusicInfoView : UIView <PAGViewListener>
{
    BOOL _alreadyAnimation; // +0x8
    NSArray * _items; // +0x10
    double _itemPadding; // +0x18
    UIFont * _font; // +0x20
    unsigned long long _itemHash; // +0x28
    PAGView * _pagView; // +0x30
    UIView * _contentView; // +0x38
    UIImageView * _bgView; // +0x40
    NSMutableArray * _contents; // +0x48
    NSMutableArray * _contentSizeArr; // +0x50
    CALayer * _contentLayer; // +0x58
}
- (id)initWithFont:(id)arg1 itemPadding:(double)arg2;
- (void)setupPAGView;
- (void)setupBGView:(id)arg1;
- (void)startAnimation;
- (void)setItems:(id)arg1;
- (void)displayNoremalContent;
- (CGSize)calContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onAnimationEnd:(id)arg1;
- (id)items;
- (double)itemPadding;
- (void)setItemPadding:(double)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (unsigned long long)itemHash;
- (void)setItemHash:(unsigned long long)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)contents;
- (void)setContents:(id)arg1;
- (id)contentSizeArr;
- (void)setContentSizeArr:(id)arg1;
- (BOOL)alreadyAnimation;
- (void)setAlreadyAnimation:(BOOL)arg1;
- (id)contentLayer;
- (void)setContentLayer:(id)arg1;
- (void).cxx_destruct;
@end
