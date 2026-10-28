@interface MMFinderLiveShopShelfAddProductAnimator : NSObject
{
    unsigned int _type; // +0x8
    MMLiveDisplayLinkAnimator * _displayLinkAnimator; // +0x10
    MMFinderLiveAudienceGoodsCell * _cell; // +0x18
    UIButton * _targetButton; // +0x20
    UIView * _targetView; // +0x28
    UIView * _container; // +0x30
    PAGFile * _pagFile; // +0x38
    PAGView * _pagView; // +0x40
    UIView * _imageView; // +0x48
    CADisplayLink * _displayLink; // +0x50
    double _startTime; // +0x58
    CGPoint _part2From; // +0x60
    CGPoint _part2To; // +0x70
}
- (id)initWithType:(unsigned int)arg1 cell:(id)arg2 targetView:(id)arg3 container:(id)arg4;
- (id)initWithType:(unsigned int)arg1 cell:(id)arg2 targetView:(id)arg3 container:(id)arg4 pagFile:(id)arg5;
- (double)start;
- (void)updateImageViewWithProgress:(double)arg1;
- (id)bindKey;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)displayLinkAnimator;
- (void)setDisplayLinkAnimator:(id)arg1;
- (id)cell;
- (void)setCell:(id)arg1;
- (id)targetButton;
- (void)setTargetButton:(id)arg1;
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)pagFile;
- (void)setPagFile:(id)arg1;
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
