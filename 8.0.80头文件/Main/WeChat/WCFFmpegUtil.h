@interface WCFFmpegUtil : NSObject
+ (BOOL)isH265Video:(id)arg1;
+ (BOOL)isH266Video:(id)arg1;
+ (float)durationWithPath:(id)arg1;
+ (id)getAllMetaInfo:(id)arg1;
+ (id)getVideoMetadataWithPath:(id)arg1;
+ (id)fillFFmpegMetadata:(struct)arg1;
+ (id)getMetadataWithData:(id)arg1;
+ (id)getMediaMetaInfo:(id)arg1;
@end
