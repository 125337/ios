@interface SightAssetExportError : NSError
{
    BOOL _failAtVideoTrack; // +0x28
    BOOL _failAtAudioTrack; // +0x29
}
- (id)initWithError:(id)arg1 failAtVideo:(BOOL)arg2 failAtAudio:(BOOL)arg3;
- (BOOL)failAtVideoTrack;
- (void)setFailAtVideoTrack:(BOOL)arg1;
- (BOOL)failAtAudioTrack;
- (void)setFailAtAudioTrack:(BOOL)arg1;
@end

