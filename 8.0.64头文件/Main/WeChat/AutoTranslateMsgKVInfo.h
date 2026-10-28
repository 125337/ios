@interface AutoTranslateMsgKVInfo : NSObject <PBCoding>
{
    BOOL _didInsertSystemMsg; // +0x8
    unsigned int _enableModifyTime; // +0xc
    NSMutableArray * _translateSessions; // +0x10
}
+ (void)PBArrayAdd_enableModifyTime;
+ (void)PBArrayAdd_didInsertSystemMsg;
+ (void)PBArrayAdd_translateSessions;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)enableModifyTime;
- (void)setEnableModifyTime:(unsigned int)arg1;
- (BOOL)didInsertSystemMsg;
- (void)setDidInsertSystemMsg:(BOOL)arg1;
- (id)translateSessions;
- (void)setTranslateSessions:(id)arg1;
- (void).cxx_destruct;
@end
