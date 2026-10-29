@interface MMFinderLiveShopShelfAddToShoppingCartAnimator : NSObject
{
    MMLiveDisplayLinkAnimator * _displayLinkAnimator; // +0x8
    MMFinderLiveAudienceGoodsCell * _cell; // +0x10
    UIButton * _targetButton; // +0x18
    UIView * _container; // +0x20
    PAGView * _pagView; // +0x28
    UIView * _imageView; // +0x30
    CADisplayLink * _displayLink; // +0x38
    double _startTime; // +0x40
    CGPoint _part2From; // +0x48
    CGPoint _part2To; // +0x58
}
- (id)initWithCell:(id)arg1 targetButton:(id)arg2 container:(id)arg3;
- (double)start;
- (void)updateImageViewWithProgress:(double)arg1;
- (id)bindKey;
- (id)displayLinkAnimator;
- (void)setDisplayLinkAnimator:(id)arg1;
- (id)cell;
- (void)setCell:(id)arg1;
- (id)targetButton;
- (void)setTargetButton:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (CGPoint)part2From;
- (void)setPart2From:(CGPoint)arg1;
- (CGPoint)part2To;
- (void)setPart2To:(CGPoint)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (void).cxx_destruct;
@end

