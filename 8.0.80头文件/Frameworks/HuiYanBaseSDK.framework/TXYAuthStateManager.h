@interface TXYAuthStateManager : NSObject
{
    NSDictionary * _authTipsEventDict; // +0x8
    NSDictionary * _authTipsStrDict; // +0x10
    NSArray * _tipsErrArr; // +0x18
    NSArray * _tipsActionArr; // +0x20
    NSArray * _showFar2NearAnimationArr; // +0x28
}
- (id)init;
- (id)authTipsEventDict;
- (void)setAuthTipsEventDict:(id)arg1;
- (id)authTipsStrDict;
- (void)setAuthTipsStrDict:(id)arg1;
- (id)tipsErrArr;
- (void)setTipsErrArr:(id)arg1;
- (id)tipsActionArr;
- (void)setTipsActionArr:(id)arg1;
- (id)showFar2NearAnimationArr;
- (void)setShowFar2NearAnimationArr:(id)arg1;
- (void).cxx_destruct;
@end
