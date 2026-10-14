//
//  MsgMergeEngine.h
//  MioPlugin
//
//  昵称区测量持久化（布局期直读上报，rowHeight 消费）。
//  分组判定/位置计算已迁至独立模型 BBMergeModel（BBMergeEntry/BBMergeModel），
//  MOMergePosition 枚举随迁 BBMergeEntry.h。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MsgMergeEngine : NSObject

+ (CGFloat)nicknameBlockHeight;             // 昵称区补偿量（rowHeight 消费；布局直读持久化值）
+ (void)reportNicknameBlock:(double)h;      // 渲染层上报实测昵称区（bg.y − 无昵称基准；0=昵称显示关）

@end

NS_ASSUME_NONNULL_END
