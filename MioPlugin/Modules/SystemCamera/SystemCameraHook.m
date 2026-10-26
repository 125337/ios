#import "SystemCameraHook.h"
#import "SystemCameraConfig.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <substrate.h>

// 拍摄改系统相机（移植自开源项目 WXSystemCamera，dongzhengru/WXSystemCamera，MIT）
//
// 挂载点：ImageController showImagePicker:useSightCamera:sightCameraMode:
//   —— 微信媒体选择总入口（拍照/录像/相册都走这里）。
// 仅在 sourceType == Camera 分支把 useSightCamera 改为 NO（呼出系统相机），
// 相册等其余分支原样转发；拍完仍走微信原有预览/回调/发送流程。
// 不碰扫码、视频通话等独立相机功能，不全局 hook AVCaptureSession。
//
// 开关行为：每次调用实时读配置（同 MsgTail 模式），开关即时生效，无需重装 hook。
// 方法不存在时（微信版本差异）静默跳过，不装不崩。

static void (*g_orig_showImagePicker)(id, SEL, NSInteger, BOOL, NSUInteger) = NULL;

static void repl_ImageController_showImagePicker(id self, SEL _cmd,
                                                 NSInteger sourceType,
                                                 BOOL useSightCamera,
                                                 NSUInteger sightCameraMode) {
    BOOL useSight = useSightCamera;
    if ([SystemCameraConfig shared].enableSystemCamera
        && sourceType == 1 /* UIImagePickerControllerSourceTypeCamera */) {
        useSight = NO;
    }
    if (g_orig_showImagePicker) {
        g_orig_showImagePicker(self, _cmd, sourceType, useSight, sightCameraMode);
    }
}

@implementation SystemCameraHook

+ (void)install {
    Class cls = objc_getClass("ImageController");
    if (!cls) {
        WPLog(@"SystemCamera", @"[Hook] ImageController 不存在，未安装");
        return;
    }
    SEL sel = NSSelectorFromString(@"showImagePicker:useSightCamera:sightCameraMode:");
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) {
        WPLog(@"SystemCamera", @"[Hook] showImagePicker:useSightCamera:sightCameraMode: 不存在，未安装");
        return;
    }
    MSHookMessageEx(cls, sel,
                    (IMP)repl_ImageController_showImagePicker,
                    (IMP *)&g_orig_showImagePicker);
    WPLog(@"SystemCamera", @"[Hook] ✓ ImageController::showImagePicker:useSightCamera:sightCameraMode:");
}

@end
