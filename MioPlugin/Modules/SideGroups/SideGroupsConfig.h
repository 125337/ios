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
@property (nonatomic, assign) CGFloat sdRailFontSize;       // 自定义字号 9-20，默认 12（rail 与目录共用）
@property (nonatomic, assign) BOOL sdFontCustom;            // 自定义字号开关：关 → 跟随微信字体大小（dynamicLength）
@property (nonatomic, assign) CGFloat sdRailXOffset;        // X 微调 -30~30（XOS applySideRailLeftXOffset:rightXOffset:）
@property (nonatomic, assign) BOOL sdShowUnreadBadge;       // 显示未读角标

// 字号解析（对齐电报 SessionGroupsStripView 链路）：自定义开 → sdRailFontSize（钳 9-20）；
// 关 → 微信 [UIFont dynamicLength:base] 跟随微信字体大小；私有 API 缺失 → base
+ (CGFloat)resolveFontSize:(CGFloat)base;

// 会话过滤/统计（侧边独立一套，不与电报分组共享；两模块轮着用免重调。
// 引擎取值规则：电报分组开 → 用 sg*，仅侧边开 → 用 sd*，双开跟随 sg*）
@property (nonatomic, assign) BOOL sdFilterPinned;          // 过滤置顶聊天
@property (nonatomic, assign) BOOL sdFilterDuplicate;       // 过滤重复联系人
@property (nonatomic, assign) NSInteger sdRecentDays;       // 最近会话天数 1-30（kind3 分组未自带天数时的回落值）
@property (nonatomic, assign) BOOL sdFoldGroupNoRedDot;     // 折叠群不红点（红点会话不计入未读数字）

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
