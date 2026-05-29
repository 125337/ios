#import "UIPurifyHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static IMP orig_separatorColor = NULL;
static IMP orig_separatorStyle = NULL;
static IMP orig_wcColor_seperatorColor = NULL;

static UIColor *replaced_separatorColor(id self, SEL _cmd) {
    if ([PluginConfig shared].hideSeparatorLine) {
        return [UIColor clearColor];
    }
    return ((UIColor *(*)(id, SEL))orig_separatorColor)(self, _cmd);
}

static NSInteger replaced_separatorStyle(id self, SEL _cmd) {
    if ([PluginConfig shared].hideSeparatorLine) {
        return 0;
    }
    return ((NSInteger (*)(id, SEL))orig_separatorStyle)(self, _cmd);
}

static UIColor *replaced_wcColor_seperatorColor(id self, SEL _cmd) {
    if ([PluginConfig shared].hideSeparatorLine) {
        return [UIColor clearColor];
    }
    return ((UIColor *(*)(id, SEL))orig_wcColor_seperatorColor)(self, _cmd);
}

@implementation UIPurifyHook

+ (void)install {
    PluginConfig *config = [PluginConfig shared];
    WPLog(@"UIPurify", @"UIPurifyHook install starting, hideSeparatorLine=%d", config.hideSeparatorLine);

    Class tableViewClass = objc_getClass("UITableView");
    if (tableViewClass) {
        MSHookMessageEx(tableViewClass, @selector(separatorColor), (IMP)replaced_separatorColor, &orig_separatorColor);
        WPLog(@"UIPurify", @"[+] [UITableView separatorColor] hooked");

        MSHookMessageEx(tableViewClass, @selector(separatorStyle), (IMP)replaced_separatorStyle, &orig_separatorStyle);
        WPLog(@"UIPurify", @"[+] [UITableView separatorStyle] hooked");
    } else {
        WPLog(@"UIPurify", @"[-] UITableView class not found");
    }

    Class wcColorClass = objc_getClass("WCColor");
    if (wcColorClass) {
        Class wcColorMeta = object_getClass(wcColorClass);
        MSHookMessageEx(wcColorMeta, @selector(seperatorColor), (IMP)replaced_wcColor_seperatorColor, &orig_wcColor_seperatorColor);
        WPLog(@"UIPurify", @"[+] [WCColor seperatorColor] hooked (class method on metaclass)");
    } else {
        WPLog(@"UIPurify", @"[-] WCColor class not found");
    }

    WPLog(@"UIPurify", @"UIPurifyHook install complete");
}

@end