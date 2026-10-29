@interface TPDLProxyLog : NSObject
{
    id <TPDLProxyLogDelegate> _logDelegate; // +0x8
}
+ (id)getInstance;
- (id)init;
- (void)setLogDelegate:(id)arg1;
- (void)logInfo:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logWarn:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logError:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logDebug:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (id)logDelegate;
- (void).cxx_destruct;
@end

