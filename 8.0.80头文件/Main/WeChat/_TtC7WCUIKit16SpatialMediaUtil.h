@interface _TtC7WCUIKit16SpatialMediaUtil : NSObject
+ (BOOL)isSpatialImageWithPath:(id)arg1;
+ (BOOL)isSpatialImageWithData:(id)arg1;
+ (void)isSpatialVideoWithPath:(NSString *)arg1 completionHandler:(id /* block */)arg2;
+ (void)isSpatialVideoWithAsset:(AVAsset *)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
@end
