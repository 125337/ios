@interface MPOriginalImageResponse : NSObject
+ (id)cacheMiss;
+ (id)imageInfoForEntry:(id)arg1 cached:(BOOL)arg2;
+ (id)key:(id)arg1 status:(id)arg2;
+ (id)downloadingKey:(id)arg1 progress:(double)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
@end
