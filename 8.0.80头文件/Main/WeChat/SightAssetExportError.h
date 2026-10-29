@interface SightAssetExportError : NSError
{
    BOOL _failAtVideoTrack; // +0x8
    BOOL _failAtAudioTrack; // +0x9
}
- (id)initWithError:(id)arg1 failAtVideo:(BOOL)arg2 failAtAudio:(BOOL)arg3;
- (BOOL)failAtVideoTrack;
- (void)setFailAtVideoTrack:(BOOL)arg1;
- (BOOL)failAtAudioTrack;
- (void)setFailAtAudioTrack:(BOOL)arg1;
@end
