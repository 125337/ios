@interface WCPlayerCoreAdapter : NSObject <TPLogDelegate>
{
    BOOL _openPlayerLog; // +0x8
    id <WCPlayerCoreAdapterDelegate> _delegate; // +0x10
}
+ (void)SetupWithDelegate:(id)arg1;
+ (id)SharedInstance;
+ (void)makeSureLocalServiceActiveWithCompletion:(id /* block */)arg1;
- (void)configThumbPlayer;
- (void)logWithLevel:(int)arg1 tag:(id)arg2 file:(const char *)arg3 function:(const char *)arg4 line:(unsigned long long)arg5 format:(id)arg6 args:(char *)arg7;
- (void)logWithLevel:(int)arg1 tommfile:(BOOL)arg2 module:(const char *)arg3 file:(const char *)arg4 function:(const char *)arg5 line:(unsigned long long)arg6 message:(id)arg7;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)openPlayerLog;
- (void)setOpenPlayerLog:(BOOL)arg1;
- (void).cxx_destruct;
@end
