@interface WCFinderCommentImageProcesser : NSObject
+ (void)uploadCommentImage:(id)arg1 completion:(id /* block */)arg2;
+ (id)fillCommentImageDataWithComment:(id)arg1 uploadInfo:(id)arg2 image:(id)arg3 feedID:(id)arg4 commentScene:(int)arg5;
+ (unsigned long long)exifJSONMaxUploadLength;
+ (id)getAttachInfoFrom:(id)arg1 createIfNil:(BOOL)arg2;
+ (void)setAttachInfo:(id)arg1 toImage:(id)arg2;
@end
