#import "HookInterceptor.h"
#import <objc/runtime.h>
#import <dlfcn.h>

// ============================================================
// MARK: - Dylib Scanner
// ============================================================

#import <mach-o/dyld.h>

static void scanLoadedDylibs(void) {
    NSLog(@"[WeChatPlugin][HookDetector] ========================================");
    NSLog(@"[WeChatPlugin][HookDetector] 🔍 Loaded Plugin Dylibs");
    NSLog(@"[WeChatPlugin][HookDetector] ========================================");

    uint32_t count = _dyld_image_count();
    for (uint32_t i = 0; i < count; i++) {
        const char *name = _dyld_get_image_name(i);
        if (!name) continue;
        NSString *path = [NSString stringWithUTF8String:name];

        // Filter: only show plugin-like dylibs
        if ([path containsString:@"Library/MobileSubstrate"] ||
            [path containsString:@"Library/TweakInject"] ||
            [path containsString:@"jbroot"] ||
            [path containsString:@"MioHelper"] ||
            [path containsString:@"WeChatEnhance"] ||
            [path containsString:@"wechat"] ||
            [path rangeOfString:@"dylib" options:NSCaseInsensitiveSearch].location != NSNotFound) {
            NSLog(@"[WeChatPlugin][HookDetector] 📦 %@ (slide: 0x%llx)", path, (unsigned long long)_dyld_get_image_vmaddr_slide(i));
        }
    }
}

// ============================================================
// MARK: - Method Scanner
// ============================================================

static void scanWeChatMethods(NSMutableArray *results) {
    int numClasses = objc_getClassList(NULL, 0);
    Class *classes = (Class *)malloc(sizeof(Class) * numClasses);
    numClasses = objc_getClassList(classes, numClasses);

    // Hook method name patterns from other plugins
    NSDictionary *patterns = @{
        @"revoke": @"防撤回相关",
        @"Revoke": @"防撤回相关",
        @"revokemsg": @"防撤回相关",
        @"replaceRevoked": @"防撤回相关",
        @"NewSync": @"防撤回相关",
        @"InsertParsedXmlSysMsg": @"防撤回相关",
        @"deleteLocalProcess": @"防撤回相关",
        @"hongbao": @"红包",
        @"Hongbao": @"红包",
        @"Envelop": @"红包",
        @"envelop": @"红包",
        @"RedEnvelop": @"红包",
        @"red": @"红包",
        @"messageTime": @"消息时间",
        @"MessageTime": @"消息时间",
        @"timeLabel": @"消息时间",
        @"TimeLabel": @"消息时间",
        @"avatar": @"头像",
        @"Avatar": @"头像",
        @"bubble": @"气泡美化",
        @"Bubble": @"气泡美化",
        @"bgImage": @"气泡美化",
        @"BgImage": @"气泡美化",
        @"m_nsNickName": @"好友昵称",
        @"AddCreateTime": @"好友时间",
        @"addtime": @"好友时间",
        @"unread": @"未读",
        @"Unread": @"未读",
        @"clearUnread": @"未读",
        @"clearUnRead": @"未读",
        @"Mgr": @"管理类",
        @"mgr": @"管理类",
        @"Manager": @"管理类",
        @"Step": @"步数",
        @"step": @"步数",
        @"Sns": @"朋友圈",
        @"sns": @"朋友圈",
        @"Moments": @"朋友圈",
        @"SendMsg": @"消息发送",
        @"sendMsg": @"消息发送",
        @"receive": @"消息接收",
        @"Receive": @"消息接收",
        @"autoReply": @"自动回复",
        @"AutoReply": @"自动回复",
        @"transfer": @"自动转账",
        @"Transfer": @"自动转账",
        @"luck": @"骰子/猜拳",
        @"Luck": @"骰子/猜拳",
        @"Dice": @"骰子/猜拳",
        @"dice": @"骰子/猜拳",
    };

    for (int i = 0; i < numClasses; i++) {
        Class cls = classes[i];
        NSString *clsName = [NSString stringWithUTF8String:class_getName(cls)];
        if (!clsName) continue;

        if ([clsName hasPrefix:@"_"] ||
            [clsName hasPrefix:@"<"] ||
            [clsName hasPrefix:@"NS"] ||
            [clsName hasPrefix:@"UI"] ||
            [clsName hasPrefix:@"CA"] ||
            [clsName hasPrefix:@"OS"] ||
            [clsName hasPrefix:@"WK"]) {
            continue;
        }

        // Only scan WeChat classes
        BOOL isWeChatClass = NO;
        NSString *lowerCls = [clsName lowercaseString];
        if ([lowerCls containsString:@"message"] ||
            [lowerCls containsString:@"chat"] ||
            [lowerCls containsString:@"contact"] ||
            [lowerCls containsString:@"wxa"] ||
            [lowerCls containsString:@"wc"] ||
            [lowerCls containsString:@"revoke"] ||
            [clsName hasPrefix:@"C"] ||
            [clsName hasPrefix:@"MM"] ||
            [clsName hasPrefix:@"WX"] ||
            [clsName hasPrefix:@"WA"] ||
            [clsName containsString:@"Cell"] ||
            [clsName containsString:@"Session"] ||
            [clsName containsString:@"Mgr"] ||
            [clsName containsString:@"Logic"] ||
            [clsName containsString:@"DB"] ||
            [clsName containsString:@"Plugin"] ||
            [clsName containsString:@"Setting"]) {
            isWeChatClass = YES;
        }
        if (!isWeChatClass) continue;

        unsigned int methodCount = 0;
        Method *methods = class_copyMethodList(cls, &methodCount);
        for (unsigned int j = 0; j < methodCount; j++) {
            Method m = methods[j];
            SEL sel = method_getName(m);
            NSString *selName = [NSString stringWithUTF8String:sel_getName(sel)];
            if (!selName) continue;

            for (NSString *pattern in patterns) {
                NSRange r = [selName rangeOfString:pattern options:NSCaseInsensitiveSearch];
                if (r.location != NSNotFound) {
                    NSString *result = [NSString stringWithFormat:@"[Match] %@ → %@ (%@)",
                                        clsName, selName, patterns[pattern]];
                    if (![results containsObject:result]) {
                        [results addObject:result];
                    }
                    break;
                }
            }
        }
        free(methods);
    }
    free(classes);
}

// ============================================================
// MARK: - Summary
// ============================================================

static void flushSummary(void) {
    NSLog(@"[WeChatPlugin][HookDetector] ========================================");
    NSLog(@"[WeChatPlugin][HookDetector] 🕵️  Hook Detector Summary");
    NSLog(@"[WeChatPlugin][HookDetector] ========================================");

    NSMutableArray *results = [NSMutableArray array];

    scanLoadedDylibs();

    NSLog(@"[WeChatPlugin][HookDetector] ========================================");
    NSLog(@"[WeChatPlugin][HookDetector] 🔍 Scanning WeChat methods for hook patterns...");
    NSLog(@"[WeChatPlugin][HookDetector] ========================================");

    scanWeChatMethods(results);

    if (results.count == 0) {
        NSLog(@"[WeChatPlugin][HookDetector] No hook patterns found");
    } else {
        // Group by category
        NSMutableDictionary *grouped = [NSMutableDictionary dictionary];
        for (NSString *r in results) {
            NSArray *parts = [r componentsSeparatedByString:@"("];
            NSString *cat = (parts.count > 1) ? [parts[1] stringByReplacingOccurrencesOfString:@")" withString:@""] : @"other";
            NSMutableArray *items = grouped[cat];
            if (!items) { items = [NSMutableArray array]; grouped[cat] = items; }
            [items addObject:r];
        }

        for (NSString *cat in [[grouped allKeys] sortedArrayUsingSelector:@selector(compare:)]) {
            NSArray *items = grouped[cat];
            NSLog(@"[WeChatPlugin][HookDetector] \n--- %@ (%lu matches) ---", cat, (unsigned long)items.count);
            for (NSString *item in items) {
                NSLog(@"[WeChatPlugin][HookDetector]   🪝 %@", item);
            }
        }
    }

    NSLog(@"[WeChatPlugin][HookDetector] ========================================");
    NSLog(@"[WeChatPlugin][HookDetector] 🕵️  Scan complete: %lu potential hooks", (unsigned long)results.count);
    NSLog(@"[WeChatPlugin][HookDetector] ========================================");

    // Write to file
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"hookdetect.log"];
        NSMutableString *content = [NSMutableString string];
        [content appendString:@"========================================\n"];
        [content appendString:@"🕵️  Hook Detector Summary\n"];
        [content appendString:@"========================================\n\n"];
        [content appendString:@"Loaded Dylibs:\n"];
        uint32_t cnt = _dyld_image_count();
        for (uint32_t i = 0; i < cnt; i++) {
            NSString *path = [NSString stringWithUTF8String:_dyld_get_image_name(i) ?: ""];
            if ([path containsString:@"dylib"] || [path containsString:@"Substrate"] || [path containsString:@"TweakInject"] || [path containsString:@"MioHelper"]) {
                [content appendFormat:@"  %@\n", path];
            }
        }
        [content appendString:@"\nHook Patterns:\n"];
        for (NSString *r in results) {
            [content appendFormat:@"  %@\n", r];
        }
        [content writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        NSLog(@"[WeChatPlugin][HookDetector] ✅ Written to %@", filePath);
    } @catch (NSException *e) {
        NSLog(@"[WeChatPlugin][HookDetector] Write file error: %@", e);
    }
}

// ============================================================
// MARK: - Installation
// ============================================================

@implementation HookInterceptor

+ (void)install {
    NSLog(@"[WeChatPlugin][HookDetector] HookInterceptor installed - delayed scan only (no fishhook)");

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(20 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        flushSummary();
    });
}

@end