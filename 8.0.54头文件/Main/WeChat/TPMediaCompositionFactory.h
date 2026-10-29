@interface TPMediaCompositionFactory : NSObject
+ (id)createMediaComposition;
+ (id)createMediaTrackWithTrackId:(int)arg1 mediaType:(long long)arg2;
+ (id)createMediaTrackWithTrackId:(int)arg1 mediaType:(long long)arg2 trackClips:(id)arg3;
+ (id)createEmptyMeidaClipWithFilePath:(id)arg1 mediaType:(long long)arg2 beginTimeMs:(long long)arg3 endTimeMs:(long long)arg4;
+ (id)createRtcMediaAsset;
+ (id)createUrlMediaAsset;
@end

