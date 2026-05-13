#import "HookInterceptor.h"
#import "fishhook.h"
#import <objc/runtime.h>
#import <dlfcn.h>
#import <unistd.h>

// ============================================================
// MARK: - Pure C Early Logging
// ============================================================

#define MAX_HOOK_ENTRIES 512
#define MAX_HOOK_LINE_LEN 256

static char g_hookLines[MAX_HOOK_ENTRIES][MAX_HOOK_LINE_LEN];
static int g_hookCount = 0;
static int g_hookInstallResult = -1;

static void earlyLog(const char *msg) {
    write(STDERR_FILENO, "[WeChatPlugin][HookDetector] ", 31);
    write(STDERR_FILENO, msg, strlen(msg));
    write(STDERR_FILENO, "\n", 1);
}

static void recordHook(const char *tag, const char *cls, const char *sel, const char *caller) {
    if (g_hookCount >= MAX_HOOK_ENTRIES) return;
    char *line = g_hookLines[g_hookCount];
    snprintf(line, MAX_HOOK_LINE_LEN, "[%s] %s → %s (from: %s)", tag, cls, sel, caller);
    g_hookCount++;
    earlyLog(line);
}

// ============================================================
// MARK: - MSHookMessageEx Interceptor (Pure C)
// ============================================================

static void (*orig_MSHookMessageEx)(Class _class, SEL sel, IMP replacement, IMP *original);

static const char *imageNameForAddr(void *addr) {
    Dl_info info;
    if (dladdr(addr, &info) && info.dli_fname) {
        const char *base = strrchr(info.dli_fname, '/');
        return base ? base + 1 : info.dli_fname;
    }
    return "unknown";
}

static void my_MSHookMessageEx(Class _class, SEL sel, IMP replacement, IMP *original) {
    const char *caller = imageNameForAddr(__builtin_return_address(0));
    const char *clsName = _class ? class_getName(_class) : "?";
    const char *selName = sel ? sel_getName(sel) : "?";
    recordHook("Substrate", clsName, selName, caller);

    if (orig_MSHookMessageEx) {
        orig_MSHookMessageEx(_class, sel, replacement, original);
    }
}

// ============================================================
// MARK: - Runtime Detection (enumerates after delay)
// ============================================================

static void detectRuntimeHooks(void) {
    int numClasses;
    Class *classes = NULL;

    @try {
        numClasses = objc_getClassList(NULL, 0);
        classes = (Class *)malloc(sizeof(Class) * numClasses);
        numClasses = objc_getClassList(classes, numClasses);

        // Suspicious method name patterns used by plugins for hooking
        const char *suspiciousPatterns[] = {
            "revoke", "Revoke", "revokemsg", "RevokeMsg",
            "red", "Red", "envelop", "Envelop",
            "messageTime", "MessageTime", "timeLabel",
            "receive", "Receive", "hongbao", "Hongbao",
            "Mgr", "mgr"
        };
        int patternCount = sizeof(suspiciousPatterns) / sizeof(suspiciousPatterns[0]);

        for (int i = 0; i < numClasses; i++) {
            Class cls = classes[i];
            const char *clsName = class_getName(cls);

            // Skip system classes
            if (clsName[0] == '_' || clsName[0] == '<' ||
                strncmp(clsName, "NS", 2) == 0 ||
                strncmp(clsName, "UI", 2) == 0 ||
                strncmp(clsName, "CA", 2) == 0 ||
                strncmp(clsName, "OS", 2) == 0) {
                continue;
            }

            // Only scan WeChat classes
            if (!strstr(clsName, "Message") &&
                !strstr(clsName, "Chat") &&
                !strstr(clsName, "Contact") &&
                !strstr(clsName, "Wxa") &&
                !strstr(clsName, "WC") &&
                strncmp(clsName, "C", 1) != 0) {
                continue;
            }

            unsigned int methodCount = 0;
            Method *methods = class_copyMethodList(cls, &methodCount);
            for (unsigned int j = 0; j < methodCount; j++) {
                Method m = methods[j];
                SEL sel = method_getName(m);
                const char *selName = sel_getName(sel);
                IMP imp = method_getImplementation(m);
                IMP lookup = class_getMethodImplementation(cls, sel);

                if (imp != lookup) {
                    char buf[MAX_HOOK_LINE_LEN];
                    snprintf(buf, sizeof(buf), "[Runtime_Diff] %s → %s (IMP mismatch: %p vs %p)",
                             clsName, selName, (void*)imp, (void*)lookup);
                    if (g_hookCount < MAX_HOOK_ENTRIES) {
                        NSString *nsLine = [NSString stringWithUTF8String:buf];
                        NSLog(@"[WeChatPlugin][HookDetector] %@", nsLine);
                        strncpy(g_hookLines[g_hookCount], buf, MAX_HOOK_LINE_LEN - 1);
                        g_hookLines[g_hookCount][MAX_HOOK_LINE_LEN - 1] = '\0';
                        g_hookCount++;
                    }
                    break;
                }

                for (int p = 0; p < patternCount; p++) {
                    if (strcasestr(selName, suspiciousPatterns[p])) {
                        char buf[MAX_HOOK_LINE_LEN];
                        snprintf(buf, sizeof(buf), "[Runtime_Pattern] %s → %s (matched: %s)",
                                 clsName, selName, suspiciousPatterns[p]);
                        if (g_hookCount < MAX_HOOK_ENTRIES) {
                            NSString *nsLine = [NSString stringWithUTF8String:buf];
                            NSLog(@"[WeChatPlugin][HookDetector] %@", nsLine);
                            strncpy(g_hookLines[g_hookCount], buf, MAX_HOOK_LINE_LEN - 1);
                            g_hookLines[g_hookCount][MAX_HOOK_LINE_LEN - 1] = '\0';
                            g_hookCount++;
                        }
                        break;
                    }
                }
            }
            free(methods);
        }
    } @catch (NSException *e) {
        NSLog(@"[WeChatPlugin][HookDetector] Runtime scan error: %@", e);
    }

    free(classes);
}

// ============================================================
// MARK: - Summary Output
// ============================================================

static void flushSummary(void) {
    NSString *sep = @"========================================";
    NSLog(@"[WeChatPlugin][HookDetector] %@", sep);
    NSLog(@"[WeChatPlugin][HookDetector] 🕵️  Hook Detector Summary");
    NSLog(@"[WeChatPlugin][HookDetector] %@", sep);

    if (g_hookInstallResult != 0) {
        NSLog(@"[WeChatPlugin][HookDetector] ❌ fishhook rebind_symbols failed: %d", g_hookInstallResult);
    }

    // MSHookMessageEx interceptor results (Substrate hooks)
    int substrateCount = 0;
    for (int i = 0; i < g_hookCount; i++) {
        NSString *line = [NSString stringWithUTF8String:g_hookLines[i]];
        if ([line hasPrefix:@"[Substrate]"]) {
            NSLog(@"[WeChatPlugin][HookDetector] 🪝 %@", line);
            substrateCount++;
        }
    }

    if (substrateCount == 0) {
        NSLog(@"[WeChatPlugin][HookDetector] No Substrate hooks detected");
    }

    // Runtime scan
    NSLog(@"[WeChatPlugin][HookDetector] %@", sep);
    NSLog(@"[WeChatPlugin][HookDetector] 🔍 Running Runtime hook scan...");
    NSLog(@"[WeChatPlugin][HookDetector] %@", sep);
    detectRuntimeHooks();

    // Print Runtime results
    int runtimeCount = 0;
    for (int i = 0; i < g_hookCount; i++) {
        NSString *line = [NSString stringWithUTF8String:g_hookLines[i]];
        if ([line hasPrefix:@"[Runtime_"]) {
            NSLog(@"[WeChatPlugin][HookDetector] 🔍 %@", line);
            runtimeCount++;
        }
    }

    NSLog(@"[WeChatPlugin][HookDetector] %@", sep);
    NSLog(@"[WeChatPlugin][HookDetector] 🕵️  Substrate: %d | Runtime: %d | Total: %d",
          substrateCount, runtimeCount, g_hookCount);
    NSLog(@"[WeChatPlugin][HookDetector] %@", sep);

    // Write to file
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"hookdetect.log"];
        NSMutableString *content = [NSMutableString string];
        [content appendFormat:@"%@\n🕵️  Hook Detector Summary\n%@\n\n", sep, sep];
        [content appendFormat:@"Substrate hooks: %d\n", substrateCount];
        for (int i = 0; i < g_hookCount; i++) {
            [content appendFormat:@"  %s\n", g_hookLines[i]];
        }
        [content appendFormat:@"\n%@\n🕵️  Total: %d\n%@\n", sep, g_hookCount, sep];
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
    earlyLog("HookInterceptor install - fishhook (MSHookMessageEx only)");
    earlyLog("========================================");

    struct rebinding rebindings[] = {
        {"MSHookMessageEx", (void *)my_MSHookMessageEx, (void **)&orig_MSHookMessageEx},
    };

    g_hookInstallResult = rebind_symbols(rebindings, 1);
    if (g_hookInstallResult == 0) {
        earlyLog("fishhook MSHookMessageEx interceptor installed");
    } else {
        char buf[128];
        snprintf(buf, sizeof(buf), "fishhook failed: %d", g_hookInstallResult);
        earlyLog(buf);
    }

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(15 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        flushSummary();
    });
}

@end