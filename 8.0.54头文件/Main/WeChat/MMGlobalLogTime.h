@interface MMGlobalLogTime : NSObject
{
    NSMutableDictionary * m_dic; // +0x8
    NSMutableDictionary * m_dicProc; // +0x10
}
+ (id)sharedMMGlobalLogTime;
- (id)init;
- (void)dealloc;
- (void)start:(id)arg1 withStep:(const char *)arg2;
- (void)needreport:(id)arg1 withEventId:(unsigned int)arg2;
- (void)end:(id)arg1;
- (void).cxx_destruct;
@end

