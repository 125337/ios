@interface KindaTenpayCgi : NSObject <MMTenpayCgi>
{
    NSMutableDictionary * _runningCgiMap; // +0x8
}
- (id)init;
- (void)request:(int)arg1 url:(id)arg2 reqText:(id)arg3 reqTextWx:(id)arg4 callback:(id)arg5;
- (id)runningCgiMap;
- (void)setRunningCgiMap:(id)arg1;
- (void).cxx_destruct;
@end
