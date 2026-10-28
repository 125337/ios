#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 聊天文件长按"导入字体"菜单。菜单挂载统一走 Core/WPChatMenuHelper（spec 注册制，
// 插件项沉底压轴），本模块只提供 shouldShow 门禁与导入动作。
// 长按文件消息（AppFileMessageCellView，截图取证：ChatTableViewCell →
// AppFileMessageCellView → AppFileMessageCellContentView），文件扩展名是
// ttf/otf/ttc/woff/woff2 时显示"导入字体"项；点击走 MioImportFontFromPath
// （魔数校验 + 拷入 Preferences/Mio/fonts + 进程级注册）直接进字体库
@interface FontImportHook : NSObject
+ (void)install;
@end

NS_ASSUME_NONNULL_END
