#import "HookInterceptor.h"
#import "fishhook.h"
#import <objc/runtime.h>
#import <dlfcn.h>

// ============================================================
// MARK: - Logging
// ============================================================

static void hiLog(NSString *content) {
    NSLog(@"[WeChatPlugin][HookDetector] %@", content);
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"hookdetect.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [[NSDate date] description], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

// ============================================================
// MARK: - Caller Identification
// ============================================================

static NSString *imageNameForAddress(void *addr) {
    Dl_info info;
    if (dladdr(addr, &info) && info.dli_fname) {
        NSString *path = [NSString stringWithUTF8String:info.dli_fname];
        NSString *name = [path lastPathComponent];
        if ([name length] == 0) return @"unknown";
        return name;
    }
    return @"unknown";
}

// ============================================================
// MARK: - Original Function Pointers
// ============================================================

static void (*orig_MSHookMessageEx)(Class _class, SEL sel, IMP replacement, IMP *original);
static BOOL (*orig_class_addMethod)(Class cls, SEL name, IMP imp, const char *types);
static IMP (*orig_method_setImplementation)(Method m, IMP imp);

// ============================================================
// MARK: - Set for Deduplication
// ============================================================

static NSMutableSet *g_seenHooks;
static NSMutableArray *g_hookLog;

// ============================================================
// MARK: - Replacement Functions
// ============================================================

static void my_MSHookMessageEx(Class _class, SEL sel, IMP replacement, IMP *original) {
    NSString *caller = imageNameForAddress(__builtin_return_address(0));
    NSString *clsName = _class ? [NSString stringWithUTF8String:class_getName(_class)] : @"?";
    NSString *selName = sel ? [NSString stringWithUTF8String:sel_getName(sel)] : @"?";
    NSString *key = [NSString stringWithFormat:@"[Substrate] %@ → %@ (from: %@)", clsName, selName, caller];

    if (![g_seenHooks containsObject:key]) {
        [g_seenHooks addObject:key];
        [g_hookLog addObject:key];
        hiLog([NSString stringWithFormat:@"🪝 %@", key]);
    }

    if (orig_MSHookMessageEx) {
        orig_MSHookMessageEx(_class, sel, replacement, original);
    }
}

static BOOL my_class_addMethod(Class cls, SEL name, IMP imp, const char *types) {
    NSString *caller = imageNameForAddress(__builtin_return_address(0));
    NSString *clsName = cls ? [NSString stringWithUTF8String:class_getName(cls)] : @"?";
    NSString *selName = name ? [NSString stringWithUTF8String:sel_getName(name)] : @"?";
    NSString *key = [NSString stringWithFormat:@"[class_addMethod] %@ → %@ (from: %@)", clsName, selName, caller];

    if (![g_seenHooks containsObject:key]) {
        [g_seenHooks addObject:key];
        [g_hookLog addObject:key];
        hiLog([NSString stringWithFormat:@"🪝 %@", key]);
    }

    if (orig_class_addMethod) {
        return orig_class_addMethod(cls, name, imp, types);
    }
    return NO;
}

static IMP my_method_setImplementation(Method m, IMP imp) {
    NSString *caller = imageNameForAddress(__builtin_return_address(0));
    NSString *selName = m ? [NSString stringWithUTF8String:sel_getName(method_getName(m))] : @"?";
    NSString *key = [NSString stringWithFormat:@"[method_setImpl] %@ (from: %@)", selName, caller];

    if (![g_seenHooks containsObject:key]) {
        [g_seenHooks addObject:key];
        [g_hookLog addObject:key];
        hiLog([NSString stringWithFormat:@"🪝 %@", key]);
    }

    if (orig_method_setImplementation) {
        return orig_method_setImplementation(m, imp);
    }
    return NULL;
}

// ============================================================
// MARK: - Summary Output
// ============================================================

static void printSummary(void) {
    hiLog(@"========================================");
    hiLog(@"🕵️  Hook Detector Summary");
    hiLog(@"========================================");

    NSMutableDictionary *byDylib = [NSMutableDictionary dictionary];
    for (NSString *line in g_hookLog) {
        NSRange fromRange = [line rangeOfString:@"(from: "];
        if (fromRange.location == NSNotFound) continue;
        NSString *dylib = [line substringFromIndex:fromRange.location + fromRange.length];
        dylib = [dylib stringByReplacingOccurrencesOfString:@")" withString:@""];
        if ([dylib length] == 0) dylib = @"unknown";

        NSMutableArray *items = byDylib[dylib];
        if (!items) {
            items = [NSMutableArray array];
            byDylib[dylib] = items;
        }
        [items addObject:line];
    }

    NSArray *sortedKeys = [byDylib keysSortedByValueUsingComparator:^NSComparisonResult(id o1, id o2) {
        return [@([o2 count]) compare:@([o1 count])];
    }];

    for (NSString *dylib in sortedKeys) {
        NSArray *items = byDylib[dylib];
        hiLog([NSString stringWithFormat:@"\n--- %@ (%lu hooks) ---", dylib, (unsigned long)[items count]]);
        for (NSString *item in items) {
            hiLog([NSString stringWithFormat:@"  %@", item]);
        }
    }

    hiLog(@"========================================");
    hiLog(@"🕵️  Detector total: %lu unique hooks", (unsigned long)[g_seenHooks count]);
    hiLog(@"========================================");
}

// ============================================================
// MARK: - Installation
// ============================================================

@implementation HookInterceptor

+ (void)install {
    g_seenHooks = [NSMutableSet set];
    g_hookLog = [NSMutableArray array];

    hiLog(@"========================================");
    hiLog(@"HookInterceptor install - fishhook interceptor");
    hiLog(@"========================================");

    struct rebinding rebindings[] = {
        {"MSHookMessageEx", (void *)my_MSHookMessageEx, (void **)&orig_MSHookMessageEx},
        {"class_addMethod", (void *)my_class_addMethod, (void **)&orig_class_addMethod},
        {"method_setImplementation", (void *)my_method_setImplementation, (void **)&orig_method_setImplementation},
    };

    int ret = rebind_symbols(rebindings, 3);
    if (ret == 0) {
        hiLog(@"✅ fishhook interceptors installed (MSHookMessageEx, class_addMethod, method_setImplementation)");
    } else {
        hiLog(@"❌ fishhook rebind_symbols failed: %d", ret);
    }

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(15 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        printSummary();
    });
}

@end