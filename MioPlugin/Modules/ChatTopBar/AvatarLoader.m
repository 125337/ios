#import "AvatarLoader.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <ImageIO/ImageIO.h>

@interface AvatarLoader ()
@property (nonatomic, strong) NSCache *memoryCache;
@end

@implementation AvatarLoader

+ (instancetype)shared {
    static AvatarLoader *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[AvatarLoader alloc] init];
    });
    return instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _memoryCache = [[NSCache alloc] init];
        _memoryCache.countLimit = 50;
    }
    return self;
}

- (void)clearCache {
    [_memoryCache removeAllObjects];
}

- (UIImage *)loadAvatarSyncForWxid:(NSString *)wxid contact:(id)contact {
    if (!wxid.length) return nil;

    UIImage *cached = [_memoryCache objectForKey:wxid];
    if (cached) return cached;

    UIImage *local = [self loadLocalCustomAvatar:wxid];
    if (local) {
        [_memoryCache setObject:local forKey:wxid];
        return local;
    }

    BOOL isOfficialAccount = [wxid hasPrefix:@"gh_"];

    if (!isOfficialAccount) {
        id headImageMgr = WXGetService(objc_getClass("MMHeadImageMgr"));
        if (headImageMgr) {
            SEL getHeadSel = NSSelectorFromString(@"getHeadImage:withCategory:");
            if ([headImageMgr respondsToSelector:getHeadSel]) {
                UIImage *wxImg = ((UIImage *(*)(id, SEL, id, id))objc_msgSend)(headImageMgr, getHeadSel, wxid, @0);
                if (wxImg) {
                    [_memoryCache setObject:wxImg forKey:wxid];
                    return wxImg;
                }
            }
        }
    }

    if (!contact) {
        contact = WXGetContactForWxid(wxid);
    }
    NSString *avatarURL = WXContactHeadImageURL(contact);
    if (avatarURL.length) {
        NSData *data = [NSData dataWithContentsOfURL:[NSURL URLWithString:avatarURL]];
        if (data) {
            UIImage *img = [UIImage imageWithData:data];
            if (img) {
                [_memoryCache setObject:img forKey:wxid];
                return img;
            }
        }
    }

    return nil;
}

- (void)loadAvatarForWxid:(NSString *)wxid
                  contact:(id)contact
               completion:(void(^)(UIImage *image))completion {
    if (!wxid.length) {
        if (completion) completion(nil);
        return;
    }

    UIImage *cached = [_memoryCache objectForKey:wxid];
    if (cached) {
        if (completion) completion(cached);
        return;
    }

    UIImage *local = [self loadLocalCustomAvatar:wxid];
    if (local) {
        [_memoryCache setObject:local forKey:wxid];
        if (completion) completion(local);
        return;
    }

    BOOL isOfficialAccount = [wxid hasPrefix:@"gh_"];

    if (!isOfficialAccount) {
        id headImageMgr = WXGetService(objc_getClass("MMHeadImageMgr"));
        if (headImageMgr) {
            SEL getHeadSel = NSSelectorFromString(@"getHeadImage:withCategory:");
            if ([headImageMgr respondsToSelector:getHeadSel]) {
                UIImage *wxImg = ((UIImage *(*)(id, SEL, id, id))objc_msgSend)(headImageMgr, getHeadSel, wxid, @0);
                if (wxImg) {
                    [_memoryCache setObject:wxImg forKey:wxid];
                    if (completion) completion(wxImg);
                    return;
                }
            }
        }
    }

    if (isOfficialAccount || !contact) {
        if (!contact) {
            contact = WXGetContactForWxid(wxid);
        }
    }
    NSString *avatarURL = WXContactHeadImageURL(contact);
    if (avatarURL.length) {
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            NSData *data = [NSData dataWithContentsOfURL:[NSURL URLWithString:avatarURL]];
            if (data) {
                UIImage *img = [UIImage imageWithData:data];
                if (img) {
                    [self->_memoryCache setObject:img forKey:wxid];
                    dispatch_async(dispatch_get_main_queue(), ^{
                        if (completion) completion(img);
                    });
                    return;
                }
            }
            dispatch_async(dispatch_get_main_queue(), ^{
                if (completion) completion(nil);
            });
        });
        return;
    }

    if (completion) completion(nil);
}

#pragma mark - Private

- (UIImage *)loadLocalCustomAvatar:(NSString *)wxid {
    NSString *dir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    if (!dir) return nil;

    NSString *gifPath = [dir stringByAppendingPathComponent:
        [NSString stringWithFormat:@"HBWechatHelper/UserHeadImage/%@.gif", wxid]];
    if ([[NSFileManager defaultManager] fileExistsAtPath:gifPath]) {
        NSData *data = [NSData dataWithContentsOfFile:gifPath];
        return [self animatedImageFromGIFData:data];
    }

    NSString *jpgPath = [dir stringByAppendingPathComponent:
        [NSString stringWithFormat:@"HBWechatHelper/UserHeadImage/%@.jpg", wxid]];
    if ([[NSFileManager defaultManager] fileExistsAtPath:jpgPath]) {
        NSData *data = [NSData dataWithContentsOfFile:jpgPath];
        return [UIImage imageWithData:data];
    }

    return nil;
}

- (UIImage *)animatedImageFromGIFData:(NSData *)data {
    if (!data) return nil;
    CGImageSourceRef source = CGImageSourceCreateWithData((__bridge CFDataRef)data, NULL);
    if (!source) return nil;
    size_t count = CGImageSourceGetCount(source);
    if (count <= 1) {
        CFRelease(source);
        return [UIImage imageWithData:data];
    }
    NSMutableArray *images = [NSMutableArray array];
    NSTimeInterval duration = 0;
    for (size_t i = 0; i < count; i++) {
        CGImageRef img = CGImageSourceCreateImageAtIndex(source, i, NULL);
        if (img) {
            [images addObject:[UIImage imageWithCGImage:img]];
            CGImageRelease(img);
        }
        CFDictionaryRef props = CGImageSourceCopyPropertiesAtIndex(source, i, NULL);
        if (props) {
            CFDictionaryRef gifProps = CFDictionaryGetValue(props, kCGImagePropertyGIFDictionary);
            if (gifProps) {
                CFNumberRef delay = CFDictionaryGetValue(gifProps, kCGImagePropertyGIFDelayTime);
                if (delay) {
                    double d = 0;
                    CFNumberGetValue(delay, kCFNumberDoubleType, &d);
                    duration += d;
                }
            }
            CFRelease(props);
        }
    }
    CFRelease(source);
    return [UIImage animatedImageWithImages:images duration:duration];
}

@end