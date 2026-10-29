@interface TBDistributerParameter : NSObject
{
    BOOL _animated; // +0x8
    BOOL _byGestured; // +0x9
}
- (void)updateAnimated:(BOOL)arg1 byGestured:(BOOL)arg2;
- (void)reset;
- (id)init;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (BOOL)byGestured;
- (void)setByGestured:(BOOL)arg1;
@end

