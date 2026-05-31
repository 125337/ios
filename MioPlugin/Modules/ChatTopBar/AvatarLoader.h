#import <UIKit/UIKit.h>

@interface AvatarLoader : NSObject

+ (instancetype)shared;

- (void)loadAvatarForWxid:(NSString *)wxid
                  contact:(id _Nullable)contact
               completion:(void(^)(UIImage *image))completion;

- (UIImage *)loadAvatarSyncForWxid:(NSString *)wxid contact:(id _Nullable)contact;

- (void)clearCache;

@end