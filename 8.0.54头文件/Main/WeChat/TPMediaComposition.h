@interface TPMediaComposition : NSObject <ITPMediaAsset>
{
    int _videoSequence; // +0x8
    int _audioSequence; // +0xc
    int _avSequence; // +0x10
    TPMediaAssetExtraParam * extraParams; // +0x18
    NSDictionary * httpHeader; // +0x20
    NSMutableArray * _innerTracks; // +0x28
}
- (id)init;
- (id)tracks;
- (id)addMediaTrackWithMediaType:(long long)arg1;
- (void)removeTrack:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
- (id)tracksWithMediaType:(long long)arg1;
- (struct)duration;
- (int)genVideoTrackSequence;
- (int)genAudioTracksequence;
- (int)genAVTracksequence;
- (struct)videoDuration;
- (struct)audioDuration;
- (id)description;
- (long long)mediaType;
- (id)url;
- (id)extraParams;
- (void)setExtraParams:(id)arg1;
- (id)httpHeader;
- (void)setHttpHeader:(id)arg1;
- (id)innerTracks;
- (void)setInnerTracks:(id)arg1;
- (int)videoSequence;
- (void)setVideoSequence:(int)arg1;
- (int)audioSequence;
- (void)setAudioSequence:(int)arg1;
- (int)avSequence;
- (void)setAvSequence:(int)arg1;
- (void).cxx_destruct;
@end

