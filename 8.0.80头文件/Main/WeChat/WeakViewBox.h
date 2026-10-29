@interface WeakViewBox : NSObject
{
    BOOL _isAdjusting; // +0x8
    UIView * _view; // +0x10
}
+ (id)view:(id)arg1;
- (BOOL)isInvisible;
- (void)adjustOffset:(CGPoint)arg1 causeOf:(id)arg2 animated:(BOOL)arg3;
- (id)view;
- (void)setView:(id)arg1;
- (BOOL)isAdjusting;
- (void)setIsAdjusting:(BOOL)arg1;
- (void).cxx_destruct;
@end
