@interface WCFinderCommentImageProcesser : NSObject
+ (void)uploadCommentImage:(id)arg1 completion:(id /* block */)arg2;
+ (id)fillCommentImageDataWithComment:(id)arg1 uploadInfo:(id)arg2 image:(id)arg3;
+ (unsigned long long)exifJSONMaxUploadLength;
+ (id)exifJSONAttachKey;
@end
