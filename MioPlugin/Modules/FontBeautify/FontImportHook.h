#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 聊天文件长按"导入字体"菜单（Joker 同款交互：operationMenuItems 追加 MMMenuItem）。
// 长按文件消息（AppFileMessageCellView，截图取证：ChatTableViewCell →
// AppFileMessageCellView → AppFileMessageCellContentView），文件扩展名是
// ttf/otf/ttc/woff/woff2 时追加"导入字体"项；点击走 MioImportFontFromPath
// （魔数校验 + 拷入 Preferences/Mio/fonts + 进程级注册）直接进字体库
@interface FontImportHook : NSObject
+ (void)install;
@end

NS_ASSUME_NONNULL_END
