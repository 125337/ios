#import "FontImportHook.h"
#import "FontBeautifyHook.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Settings/Controllers/FontPickerVC.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// 聊天文件长按"导入字体"——Joker 同款机制：
//   hook 消息 cell 的 operationMenuItems → 追加 MMMenuItem(initWithTitle:svgName:action:)，
//   action 是注册到 cell 类上的 SEL。菜单项只在文件消息扩展名像字体时追加，
//   真伪由导入时的魔数校验把关（扩展名可能是假的）

static IMP orig_AppFile_operationMenuItems = NULL;

// 从 cell 取文件消息本地路径：m_viewModel.m_messageWrap → m_nsFilePath
// （文件未下载时路径为空，交给 action 里 toast 提示）
static NSString *MioFontImportFilePath(id cellView) {
    id wrap = nil;
    @try { wrap = [[cellView valueForKey:@"m_viewModel"] valueForKey:@"m_messageWrap"]; }
    @catch (NSException *e) {}
    if (!wrap) {
        @try { wrap = [cellView valueForKey:@"m_messageWrap"]; }
        @catch (NSException *e) {}
    }
    if (!wrap) return nil;
    for (NSString *key in @[@"m_nsFilePath", @"m_nsRealChatFilePath"]) {
        @try {
            NSString *p = [wrap valueForKey:key];
            if ([p isKindOfClass:[NSString class]] && p.length > 0) return p;
        } @catch (NSException *e) {}
    }
    return nil;
}

// 扩展名粗筛（菜单显示与否）；ttc=字体集合，woff/woff2 显示菜单但导入时明确报错提示转换
static BOOL MioLooksLikeFontPath(NSString *path) {
    NSString *ext = path.pathExtension.lowercaseString;
    return ([ext isEqualToString:@"ttf"] || [ext isEqualToString:@"otf"] ||
            [ext isEqualToString:@"ttc"] || [ext isEqualToString:@"woff"] ||
            [ext isEqualToString:@"woff2"]);
}

// 菜单组装 hook：返回数组尾部追加"导入字体"项
static id hooked_AppFile_operationMenuItems(id self, SEL _cmd) {
    NSMutableArray *items = nil;
    if (orig_AppFile_operationMenuItems) {
        items = ((id(*)(id, SEL))orig_AppFile_operationMenuItems)(self, _cmd);
    }
    if (!items) items = [NSMutableArray array];

    NSString *path = MioFontImportFilePath(self);
    if (!MioLooksLikeFontPath(path)) return items;

    Class mmItemClass = objc_getClass("MMMenuItem");
    SEL initSel = NSSelectorFromString(@"initWithTitle:svgName:action:");
    if (!mmItemClass || ![mmItemClass instancesRespondToSelector:initSel]) return items;

    @try {
        SEL actionSEL = sel_registerName("mioFontImportAction");
        id mmItem = ((id(*)(id, SEL, id, id, SEL))objc_msgSend)(
            [mmItemClass alloc], initSel, @"导入字体", @"expression", actionSEL);
        if (mmItem) {
            NSMutableArray *newItems = [items mutableCopy];
            [newItems addObject:mmItem];
            return newItems;
        }
    } @catch (NSException *e) {
        WPLog(@"FontImport", @"[FontImport] menu item create: %@", e);
    }
    return items;
}

// 菜单点击：文件不存在提示先下载；否则走共享导入核心（魔数+拷贝+注册）
static void mioFontImportAction(id self, SEL _cmd) {
    NSString *path = MioFontImportFilePath(self);
    if (path.length == 0 || ![[NSFileManager defaultManager] fileExistsAtPath:path]) {
        WPShowToast(@"文件尚未下载，请下载后再导入");
        return;
    }
    NSString *fam = nil, *ps = nil, *err = nil;
    if (MioImportFontFromPath(path, &fam, &ps, &err)) {
        [FontPickerVC invalidateFontCache]; // 失效选择页静态缓存，下次进页重扫
        WPShowToast([NSString stringWithFormat:@"已导入字体库：%@", fam ?: path.lastPathComponent]);
    } else {
        WPShowToast(err ?: @"导入失败");
        WPLog(@"FontImport", @"[FontImport] import FAIL %@ → %@", path.lastPathComponent, err ?: @"?");
    }
}

@implementation FontImportHook

+ (void)install {
    WPLog(@"FontImport", @"[FontImportHook] install start");
    Class cellCls = objc_getClass("AppFileMessageCellView");
    if (!cellCls) {
        WPLog(@"FontImport", @"[FontImportHook] ⚠️ AppFileMessageCellView NOT found");
        return;
    }

    // 注册菜单 action（Joker 同款：SEL 动态挂到 cell 类上）
    SEL actionSel = NSSelectorFromString(@"mioFontImportAction");
    if (!class_addMethod(cellCls, actionSel, (IMP)mioFontImportAction, "v@:")) {
        Method m = class_getInstanceMethod(cellCls, actionSel);
        if (m) method_setImplementation(m, (IMP)mioFontImportAction);
    }

    // hook 菜单组装。operationMenuItems 可能实现在父类（消息 cell 家族共用），
    // 先沿继承链找真实归属类再替换 IMP，避免误判成子类自有方法
    SEL menuSel = NSSelectorFromString(@"operationMenuItems");
    IMP origImp = class_getMethodImplementation(cellCls, menuSel);
    Class owner = nil;
    for (Class c = cellCls; c; c = class_getSuperclass(c)) {
        unsigned int n = 0;
        Method *ms = class_copyMethodList(c, &n);
        BOOL has = NO;
        for (unsigned int i = 0; i < n; i++) {
            if (sel_isEqual(method_getName(ms[i]), menuSel)) { has = YES; break; }
        }
        free(ms);
        if (has && class_getMethodImplementation(c, menuSel) == origImp) { owner = c; break; }
    }
    Method menuMethod = owner ? class_getInstanceMethod(owner, menuSel) : NULL;
    if (menuMethod) {
        orig_AppFile_operationMenuItems = method_getImplementation(menuMethod);
        method_setImplementation(menuMethod, (IMP)hooked_AppFile_operationMenuItems);
        WPLog(@"FontImport", @"[FontImportHook] ✓ %@::operationMenuItems",
              NSStringFromClass(owner ?: cellCls));
    } else {
        WPLog(@"FontImport", @"[FontImportHook] ⚠️ operationMenuItems 未找到（owner=%@）",
              owner ? NSStringFromClass(owner) : @"nil");
    }

    WPLog(@"FontImport", @"[FontImportHook] install complete");
}

@end
