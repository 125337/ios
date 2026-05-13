#import "HookInterceptor.h"
#import "fishhook.h"
#import <objc/runtime.h>
#import <dlfcn.h>
#import <unistd.h>

// ============================================================
// MARK: - Pure C Early Logging (safe before Foundation init)
// ============================================================

#define MAX_HOOK_ENTRIES 1024
#define MAX_HOOK_LINE_LEN 256

static char g_hookLines[MAX_HOOK_ENTRIES][MAX_HOOK_LINE_LEN];
static int g_hookCount = 0;
static int g_hookInstallResult = -1;

static void earlyLog(const char *msg) {
    write(STDERR_FILENO, "[WeChatPlugin][HookDetector] ", 31);
    write(STDERR_FILENO, msg, strlen(msg));
    write(STDERR_FILENO, "\n", 1);
}

static void recordHook(const char *line) {
    if (g_hookCount < MAX_HOOK_ENTRIES) {
        strncpy(g_hookLines[g_hookCount], line, MAX_HOOK_LINE_LEN - 1);
        g_hookLines[g_hookCount][MAX_HOOK_LINE_LEN - 1] = '\0';
        g_hookCount++;
    }
    earlyLog(line);
}

// ============================================================
// MARK: - Caller Identification (Pure C)
// ============================================================

static const char *imageNameForAddr(void *addr) {
    Dl_info info;
    if (dladdr(addr, &info) && info.dli_fname) {
        const char *base = strrchr(info.dli_fname, '/');
        return base ? base + 1 : info.dli_fname;
    }
    return "unknown";
}

// ============================================================
// MARK: - Original Function Pointers
// ============================================================

static void (*orig_MSHookMessageEx)(Class _class, SEL sel, IMP replacement, IMP *original);
static BOOL (*orig_class_addMethod)(Class cls, SEL name, IMP imp, const char *types);
static IMP (*orig_method_setImplementation)(Method m, IMP imp);

// ============================================================
// MARK: - Replacement Functions (Pure C, no Foundation)
// ============================================================

static void my_MSHookMessageEx(Class _class, SEL sel, IMP replacement, IMP *original) {
    const char *caller = imageNameForAddr(__builtin_return_address(0));
    const char *clsName = _class ? class_getName(_class) : "?";
    const char *selName = sel ? sel_getName(sel) : "?";

    char line[MAX_HOOK_LINE_LEN];
    snprintf(line, sizeof(line), "[Substrate] %s → %s (from: %s)", clsName, selName, caller);
    recordHook(line);

    if (orig_MSHookMessageEx) {
        orig_MSHookMessageEx(_class, sel, replacement, original);
    }
}

static BOOL my_class_addMethod(Class cls, SEL name, IMP imp, const char *types) {
    const char *caller = imageNameForAddr(__builtin_return_address(0));
    const char *clsName = cls ? class_getName(cls) : "?";
    const char *selName = name ? sel_getName(name) : "?";

    char line[MAX_HOOK_LINE_LEN];
    snprintf(line, sizeof(line), "[class_addMethod] %s → %s (from: %s)", clsName, selName, caller);
    recordHook(line);

    if (orig_class_addMethod) {
        return orig_class_addMethod(cls, name, imp, types);
    }
    return NO;
}

static IMP my_method_setImplementation(Method m, IMP imp) {
    const char *caller = imageNameForAddr(__builtin_return_address(0));
    const char *selName = m ? sel_getName(method_getName(m)) : "?";

    char line[MAX_HOOK_LINE_LEN];
    snprintf(line, sizeof(line), "[method_setImpl] %s (from: %s)", selName, caller);
    recordHook(line);

    if (orig_method_setImplementation) {
        return orig_method_setImplementation(m, imp);
    }
    return NULL;
}

// ============================================================
// MARK: - Summary Output (uses Foundation, safe after delay)
// ============================================================

static void flushToNSLog(void) {
    NSLog(@"[WeChatPlugin][HookDetector] ========================================");
    NSLog(@"[WeChatPlugin][HookDetector] 🕵️  Hook Detector Summary");
    NSLog(@"[WeChatPlugin][HookDetector] ========================================");

    if (g_hookInstallResult != 0) {
        NSLog(@"[WeChatPlugin][HookDetector] ❌ fishhook rebind_symbols failed: %d", g_hookInstallResult);
        return;
    }

    for (int i = 0; i < g_hookCount; i++) {
        NSLog(@"[WeChatPlugin][HookDetector]   %s", g_hookLines[i]);
    }

    NSLog(@"[WeChatPlugin][HookDetector] ========================================");
    NSLog(@"[WeChatPlugin][HookDetector] 🕵️  Total: %d unique hooks", g_hookCount);
    NSLog(@"[WeChatPlugin][HookDetector] ========================================");

    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"hookdetect.log"];

        NSMutableString *content = [NSMutableString string];
        [content appendString:@"========================================\n"];
        [content appendString:@"🕵️  Hook Detector Summary\n"];
        [content appendString:@"========================================\n\n"];

        for (int i = 0; i < g_hookCount; i++) {
            [content appendFormat:@"  %s\n", g_hookLines[i]];
        }

        [content appendString:@"\n========================================\n"];
        [content appendFormat:@"🕵️  Total: %d unique hooks\n", g_hookCount];
        [content appendString:@"========================================\n"];

        [content writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
    } @catch (NSException *e) {
        NSLog(@"[WeChatPlugin][HookDetector] write file error: %@", e);
    }
}

// ============================================================
// MARK: - Installation
// ============================================================

@implementation HookInterceptor

+ (void)install {
    earlyLog("========================================");
    earlyLog("HookInterceptor install - fishhook interceptor");
    earlyLog("========================================");

    struct rebinding rebindings[] = {
        {"MSHookMessageEx", (void *)my_MSHookMessageEx, (void **)&orig_MSHookMessageEx},
        {"class_addMethod", (void *)my_class_addMethod, (void **)&orig_class_addMethod},
        {"method_setImplementation", (void *)my_method_setImplementation, (void **)&orig_method_setImplementation},
    };

    g_hookInstallResult = rebind_symbols(rebindings, 3);
    if (g_hookInstallResult == 0) {
        earlyLog("fishhook interceptors installed (MSHookMessageEx, class_addMethod, method_setImplementation)");
    } else {
        char buf[128];
        snprintf(buf, sizeof(buf), "fishhook rebind_symbols failed: %d", g_hookInstallResult);
        earlyLog(buf);
    }

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(15 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        flushToNSLog();
    });
}

@end