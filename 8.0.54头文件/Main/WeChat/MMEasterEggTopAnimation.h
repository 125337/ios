@interface MMEasterEggTopAnimation : NSObject
{
    NSString * _pagPath; // +0x8
    double _blockDuration; // +0x10
    CGSize _size; // +0x18
}
- (id)init;
- (BOOL)isValid;
- (double)blockDuration;
- (id)description;
- (id)pagPath;
- (void)setPagPath:(id)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (void)setBlockDuration:(double)arg1;
- (void).cxx_destruct;
@end

