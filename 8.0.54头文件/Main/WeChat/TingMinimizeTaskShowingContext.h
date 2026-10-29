@interface TingMinimizeTaskShowingContext : NSObject
{
    BOOL _bJustReload; // +0x8
    UIViewController * _nextVC; // +0x10
}
+ (id)contextWithNextVC:(id)arg1;
- (id)nextVC;
- (void)setNextVC:(id)arg1;
- (BOOL)bJustReload;
- (void)setBJustReload:(BOOL)arg1;
- (void).cxx_destruct;
@end

