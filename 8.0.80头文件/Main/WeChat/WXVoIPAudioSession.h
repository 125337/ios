@interface WXVoIPAudioSession : NSObject
{
    id <IWXVoIPAudioSessionDelegate> _delegate; // +0x8
}
+ (id)sharedInstance;
- (id)initPrivate;
- (BOOL)setActive:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setActive:(BOOL)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)setMode:(id)arg1 error:(id *)arg2;
- (BOOL)setCategory:(id)arg1 error:(id *)arg2;
- (BOOL)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (BOOL)setPreferredSampleRate:(double)arg1 error:(id *)arg2;
- (BOOL)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (BOOL)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
