@interface KSLogger : NSObject <KSAudioLogProtocol>
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(id)arg5 EFDict:(id)arg6 fullmsg:(id)arg7;
@end

