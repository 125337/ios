#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 字体美化 Hook（参考 WCR 2.1.8 全局字体思路的简化实现）
// hook UIFont 三个工厂方法，全局把系统字体偷换成用户导入的字体
@interface FontBeautifyHook : NSObject
+ (void)install;
@end

// 线程字典旁路（WCR 同款）：供 UI 层在 UIFont 全局 hook 生效时取"真字体"。
// 两个函数内部调用 UIFont 工厂方法前先设线程标记 mio_font_factory_bypass，
// hook 入口检测到标记即放行原字体，调用结束清标记。

// 设旁路标记 → fontWithName:size: → 清标记；结果按 "PS名|字号" 缓存（NSCache，
// 字体对象随进程字体注册常驻内存，可安全缓存）。postScriptName 为空返回 nil。
UIFont * _Nullable MioFontForPreview(NSString *postScriptName, CGFloat size);

// 设旁路标记 → systemFontOfSize:weight: → 清标记，拿到真系统字体
// （weight 为 UIFontWeightRegular 时直接走 systemFontOfSize:）
UIFont *MioTrueSystemFont(CGFloat size, CGFloat weight);

// 共享导入核心：把字体文件导入字体库（魔数校验 → 拷入 Preferences/Mio/fonts →
// 进程级注册 → 读字族名/PostScript 名）。成功返回 YES 并回填 family/ps；
// 失败 *errText 给出原因（nullable 出参）。选择页"导入"与聊天长按"导入字体"菜单共用
BOOL MioImportFontFromPath(NSString *srcPath,
                           NSString * _Nullable * _Nullable outFamily,
                           NSString * _Nullable * _Nullable outPS,
                           NSString * _Nullable * _Nullable errText);

NS_ASSUME_NONNULL_END
