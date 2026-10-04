#import <Foundation/Foundation.h>
#import "../../Core/ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

/// 分组显示位置（四种位置列表均让位；「+列表内」在选中全部组时列表进入目录收纳
/// 模式——组头行展开/收起，可折叠持久化，XOS 位置模式 6 语义，并保留顶部分组条）
typedef NS_ENUM(NSInteger, SDSidePosition) {
    SDSidePositionRight      = 0,  // 右侧
    SDSidePositionLeft       = 1,  // 左侧
    SDSidePositionLeftInList  = 2, // 左侧+列表内
    SDSidePositionRightInList = 3, // 右侧+列表内
};

/// 首页侧边分组配置
/// 数据/切组/过滤引擎复用 SessionGroups 模块（SessionGroupsTab + SessionGroupsHook 快照），
/// 本模块只负责侧边栏呈现（XOS XZYCLGSideRailView 移植）。
@interface SideGroupsConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL sdEnabled;               // 启动首页侧边分组（总开关）
@property (nonatomic, assign) NSInteger sdPosition;         // 分组显示位置 SDSidePosition
@property (nonatomic, assign) CGFloat sdRailWidth;          // 侧栏宽度 40-90，默认 54（XOS rail 宽）
@property (nonatomic, assign) CGFloat sdRailFontSize;       // 按钮字号 9-20，默认 12
@property (nonatomic, assign) CGFloat sdRailXOffset;        // X 微调 -30~30（XOS applySideRailLeftXOffset:rightXOffset:）
@property (nonatomic, assign) BOOL sdShowUnreadBadge;       // 显示未读角标

// 外观颜色（浅/深色双 hex，空 = 未自定义跟随默认；容器背景不设色，透出微信原生底色）
@property (nonatomic, assign) BOOL sdRailSelColorCustom;    // 启用自定义选中背景色
@property (nonatomic, copy) NSString *sdRailSelColor;
@property (nonatomic, copy) NSString *sdRailSelColorDark;
@property (nonatomic, assign) BOOL sdRailTextColorCustom;   // 启用自定义文本颜色
@property (nonatomic, copy) NSString *sdRailTextColor;
@property (nonatomic, copy) NSString *sdRailTextColorDark;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
