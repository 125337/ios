@interface WeakViewBox : NSObject
{
    BOOL _isAdjusting; // +0x8
    UIView * _view; // +0x10
}
+ (id)view:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (BOOL)isAdjusting;
- (void)setIsAdjusting:(BOOL)arg1;
- (void).cxx_destruct;
@end

