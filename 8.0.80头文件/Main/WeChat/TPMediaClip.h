@interface TPMediaClip : NSObject <ITPMediaAsset>
{
    int _clipId; // +0x8
    TPMediaAssetExtraParam * extraParams; // +0x10
    NSDictionary * httpHeader; // +0x18
    long long _mediaType; // +0x20
    NSURL * _filePath; // +0x28
    struct _timeRange; // +0x30
}
+ (int)genTrackClipIdWithMediaType:(long long)arg1;
+ (id)mediaTrackClipWithFilePath:(id)arg1 mediaType:(long long)arg2;
- (id)initWithFilePath:(id)arg1 mediaType:(long long)arg2;
- (void)setTimeRange:(struct)arg1;
- (struct)duration;
- (id)description;
- (long long)mediaType;
- (id)url;
- (id)extraParams;
- (void)setExtraParams:(id)arg1;
- (id)httpHeader;
- (void)setHttpHeader:(id)arg1;
- (int)clipId;
- (void)setClipId:(int)arg1;
- (void)setMediaType:(long long)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (struct)timeRange;
- (void).cxx_destruct;
@end
