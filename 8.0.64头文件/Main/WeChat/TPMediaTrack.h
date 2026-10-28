@interface TPMediaTrack : NSObject <ITPMediaAsset>
{
    int _trackId; // +0x8
    long long _mediaType; // +0x10
    TPMediaAssetExtraParam * extraParams; // +0x18
    NSDictionary * httpHeader; // +0x20
    NSMutableArray * _clipArray; // +0x28
}
+ (id)mediaTrackWithTrackId:(int)arg1 mediaType:(long long)arg2;
+ (id)mediaTrackWithTrackMediaType:(long long)arg1;
- (id)initWithTrackId:(int)arg1 mediaType:(long long)arg2;
- (BOOL)addTrackClip:(id)arg1;
- (BOOL)insertTrackClip:(id)arg1 afterClipId:(int)arg2;
- (BOOL)removeTrackClip:(id)arg1;
- (void)removeAllTrackClips;
- (id)trackClipWithId:(int)arg1;
- (id)allTrakClips;
- (struct)totalDurationMs;
- (id)description;
- (long long)mediaType;
- (id)url;
- (int)trackId;
- (void)setTrackId:(int)arg1;
- (void)setMediaType:(long long)arg1;
- (id)extraParams;
- (void)setExtraParams:(id)arg1;
- (id)httpHeader;
- (void)setHttpHeader:(id)arg1;
- (id)clipArray;
- (void)setClipArray:(id)arg1;
- (void).cxx_destruct;
@end
