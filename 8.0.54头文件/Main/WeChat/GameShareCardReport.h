@interface GameShareCardReport : MMUserService <MMServiceProtocol>
{
    NSMutableSet * _snsExposedSet; // +0x8
    NSMutableSet * _chatExposedSet; // +0x10
}
- (void)onServiceInit;
- (void)snsExposeReport:(id)arg1;
- (void)chatExposeReport:(id)arg1;
- (void)report28466:(int)arg1 contentId:(id)arg2 shareScene:(int)arg3 appId:(id)arg4 fromUin:(unsigned int)arg5 shareId:(id)arg6 actionId:(int)arg7 shareType:(int)arg8;
- (void).cxx_destruct;
@end

