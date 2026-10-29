@interface NewQVIVoiceAnalysis : NSObject
{
    void * SpeexContex; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)speexEncodeInit;
- (void)speexEncodeRelease;
- (id)speexEncode:(id)arg1;
- (void)speexDecodeInit;
- (void)speexDecodeRelease;
- (id)speexDecode:(id)arg1;
- (void)mfeInitWithSilentTime:(int)arg1 andTimeout:(int)arg2;
- (void)mfeRelease;
- (void)mfeStart;
- (void)mfeStop;
- (void)mfeDetect:(id)arg1 withResult:(id)arg2;
- (void)dealloc;
@end
