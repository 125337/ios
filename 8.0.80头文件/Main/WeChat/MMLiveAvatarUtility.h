@interface MMLiveAvatarUtility : NSObject
+ (id)compositeAvatarImageWithAvatars:(id)arg1 dimension:(double)arg2;
+ (void)compositeAvatarImageWithAvatarUris:(id)arg1 dimension:(double)arg2 tolerateFailures:(BOOL)arg3 fallbackImage:(id)arg4 completionBlock:(id /* block */)arg5;
+ (void)renderCompositeAvatarImageWithContext:(id)arg1 dimension:(double)arg2 avatarA:(id)arg3 b:(id)arg4;
+ (void)renderCompositeAvatarImageWithContext:(id)arg1 dimension:(double)arg2 avatarA:(id)arg3 b:(id)arg4 c:(id)arg5;
+ (void)renderCompositeAvatarImageWithContext:(id)arg1 dimension:(double)arg2 avatarA:(id)arg3 b:(id)arg4 c:(id)arg5 d:(id)arg6;
+ (CGPath *)createAvatarOutlineWithDimension:(double)arg1 theta:(double)arg2 notchAngle:(double)arg3;
+ (CGImage *)createSquareCgImageForAvatar:(id)arg1;
@end
