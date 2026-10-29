@interface FavForwardCheckResult : NSObject
{
    BOOL _isIgnoreCheckFileForFastToChat; // +0x8
    NSString * _warningTip; // +0x10
}
- (id)warningTip;
- (void)setWarningTip:(id)arg1;
- (BOOL)isIgnoreCheckFileForFastToChat;
- (void)setIsIgnoreCheckFileForFastToChat:(BOOL)arg1;
- (void).cxx_destruct;
@end
