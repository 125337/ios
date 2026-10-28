#import "FontImportHook.h"
#import "FontBeautifyHook.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/WPChatMenuHelper.h"
#import "../../Settings/Controllers/FontPickerVC.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// 聊天文件长按"导入字体"——菜单挂载统一走 WPChatMenuHelper（spec 注册制）：
//   本文件只负责两件事：① shouldShow 门禁（扩展名像字体才显示菜单项，
//   真伪由导入时的魔数校验把关）② 点击动作 mioFontImportAction（导入核心）。
//   建 MMMenuItem、挂 SEL、沉底排序全部由 helper 统一处理

static NSInteger s_menuDiagBudget = 8; // 菜单诊断日志预算

// 从 cell 取文件消息的本地路径。链路为视图查看器逐层实锤（2026-10-29）：
//   cell(infoView) → ContentView(taskWrap) → FileTransferTaskWrap(task)
//   → MsgFileTransferTask(messageWrap) → CMessageWrap 的 msgFilePath 方法
// 注意：CMessageWrap 没有 m_nsFilePath 属性（Filter path 实锤只有一个 weapp 冷门属性），
// 路径只能调 msgFilePath（兜底 GetAppAttachmentPath）。文件未下载时路径为空，
// 退回 task.name（纯文件名）供菜单门禁用，点击时 action 里会提示先下载。
// outTaskName：回传聊天里的原始文件名（如"松子琥珀.ttf"）——微信附件落盘名是
// "消息本地ID.ttf"（986.ttf 实锤），导入落盘时用它恢复可读名
static NSString *MioFontImportFilePath(id cellView, NSString * _Nullable * _Nullable outTaskName) {
    if (outTaskName) *outTaskName = nil;
    id infoView = nil;
    @try { infoView = [cellView valueForKey:@"infoView"]; } @catch (NSException *e) {}
    if (!infoView) return nil;
    id taskWrap = nil;
    @try { taskWrap = [infoView valueForKey:@"taskWrap"]; } @catch (NSException *e) {}
    if (!taskWrap) return nil;
    id task = nil;
    @try { task = [taskWrap valueForKey:@"task"]; } @catch (NSException *e) {}
    if (!task) return nil;

    // 原始文件名：task 的文件名属性名未知（description 串里显示 name: 是拼出来的，
    // 5 个候选 KVC 全落空，log 27 实锤）。改从 cell 的 accessibilityLabel 取——
    // 视图查看器实锤内容为"小涵 松子琥珀.ttf,11.20MB,已下载"，按空格/逗号拆词
    // 取带字体扩展名的那段，这个数据源稳定存在
    @try {
        NSString *al = [(id)cellView accessibilityLabel];
        if (al.length > 0 && outTaskName && !*outTaskName) {
            for (NSString *word in [al componentsSeparatedByCharactersInSet:
                 [NSCharacterSet characterSetWithCharactersInString:@" ,，"]]) {
                NSString *ext = word.pathExtension.lowercaseString;
                if ([ext isEqualToString:@"ttf"] || [ext isEqualToString:@"otf"] ||
                    [ext isEqualToString:@"ttc"]) {
                    *outTaskName = word;
                    if (s_menuDiagBudget > 0) {
                        s_menuDiagBudget--;
                        WPLog(@"FontImport", @"[MENU] taskName ← accessibilityLabel: %@", word);
                    }
                    break;
                }
            }
        }
    } @catch (NSException *e) {}

    id wrap = nil;
    @try { wrap = [task valueForKey:@"messageWrap"]; } @catch (NSException *e) {}
    if (wrap) {
        for (NSString *selName in @[@"msgFilePath", @"GetAppAttachmentPath"]) {
            SEL pSel = NSSelectorFromString(selName);
            if ([wrap respondsToSelector:pSel]) {
                id p = ((id(*)(id, SEL))objc_msgSend)(wrap, pSel);
                if ([p isKindOfClass:[NSString class]] && [(NSString *)p length] > 0) return p;
            }
        }
    }
    // 未下载：拿纯文件名撑起菜单门禁
    return outTaskName ? *outTaskName : nil;
}

// 扩展名粗筛（菜单显示与否）；ttc=字体集合，woff/woff2 显示菜单但导入时明确报错提示转换
static BOOL MioLooksLikeFontPath(NSString *path) {
    NSString *ext = path.pathExtension.lowercaseString;
    return ([ext isEqualToString:@"ttf"] || [ext isEqualToString:@"otf"] ||
            [ext isEqualToString:@"ttc"] || [ext isEqualToString:@"woff"] ||
            [ext isEqualToString:@"woff2"]);
}

// 菜单点击：文件不存在提示先下载；否则走共享导入核心（魔数+拷贝+注册）。
// preferName 传聊天原始文件名：微信附件落盘名是"消息本地ID.ttf"（986.ttf 实锤），
// 用 task.name（如"松子琥珀.ttf"）落盘才能对上聊天里看到的名字
static void mioFontImportAction(id self, SEL _cmd) {
    NSString *taskName = nil;
    NSString *path = MioFontImportFilePath(self, &taskName);
    if (path.length == 0 || ![[NSFileManager defaultManager] fileExistsAtPath:path]) {
        WPShowToast(@"文件尚未下载，请下载后再导入");
        return;
    }
    NSString *fam = nil, *ps = nil, *err = nil;
    if (MioImportFontFromPath(path, taskName, &fam, &ps, &err)) {
        [FontPickerVC invalidateFontCache]; // 失效选择页静态缓存，下次进页重扫
        // 提示用文件名（聊天里看到的那个），不用字体内部元数据的字族名（可能是
        // "SZHPLMSXT (Non-Commercial Use)"这种怪名）
        WPShowToast([NSString stringWithFormat:@"已导入字体库：%@",
                     taskName ?: path.lastPathComponent]);
    } else {
        WPShowToast(err ?: @"导入失败");
        WPLog(@"FontImport", @"[FontImport] import FAIL %@ → %@", path.lastPathComponent, err ?: @"?");
    }
}

@implementation FontImportHook

+ (void)install {
    WPLog(@"FontImport", @"[FontImportHook] install start");

    // 菜单项改走统一注册制：建项、挂 SEL、沉底排序全部由 WPChatMenuHelper 处理
    MioChatMenuSpec *spec = [MioChatMenuSpec new];
    spec.title = @"导入字体";
    spec.svgName = @"expression";
    spec.action = NSSelectorFromString(@"mioFontImportAction");
    spec.actionIMP = (IMP)mioFontImportAction;
    spec.shouldShow = ^BOOL(id cellView) {
        NSString *taskName = nil;
        NSString *path = MioFontImportFilePath(cellView, &taskName);
        if (s_menuDiagBudget > 0) {
            s_menuDiagBudget--;
            WPLog(@"FontImport", @"[MENU] cell=%@ path=%@",
                  NSStringFromClass([cellView class]), path ?: @"nil");
        }
        return MioLooksLikeFontPath(path);
    };
    [WPChatMenuHelper registerSpec:spec];

    // 沉底 hook 幂等，这里顺手安装（helper 只装一次）
    [WPChatMenuHelper install];

    WPLog(@"FontImport", @"[FontImportHook] install complete");
}

@end
