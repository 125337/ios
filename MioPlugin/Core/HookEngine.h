#import <Foundation/Foundation.h>
#import <objc/runtime.h>

// ============================================================
// MARK: - Hook Table Item
// ============================================================

/// Hook 表条目：描述一个需要 Hook 的方法
/// className    - 类名（用于 objc_getClass）
/// selName      - 方法名（用于 sel_registerName）
/// replacement  - 替换后的 IMP
/// original     - 保存原始 IMP 的指针
///
/// 使用示例：
///   HookTableItem items[] = {
///       {@"MMTableViewCell", @"layoutSubviews", (IMP)hooked_func, &orig_func},
///   };
typedef struct {
    __unsafe_unretained NSString *className;
    __unsafe_unretained NSString *selName;
    IMP replacement;
    IMP *original;
} HookTableItem;

// ============================================================
// MARK: - HookEngine
// ============================================================

@interface HookEngine : NSObject

/// 批量安装 Hook 表
/// @param moduleName  模块名称（显示在日志中）
/// @param items       HookTableItem 数组
/// @param count       数组元素个数
/// @return 成功安装的 Hook 数量
///
/// 功能说明：
/// 1. 遍历 HookTableItem 数组，逐条执行 MSHookMessageEx
/// 2. 如果类不存在，自动跳过并记录日志
/// 3. 如果方法不存在，自动跳过并记录日志
/// 4. 安装完成后输出汇总统计
+ (int)installHookTable:(NSString *)moduleName items:(HookTableItem *)items count:(int)count;

/// 安装单个 Hook（兼容旧写法，逐步迁移时可混用）
+ (BOOL)installHookForClass:(NSString *)className
                     method:(NSString *)methodName
                replacement:(IMP)replacement
                   original:(IMP *)originalPtr
                 moduleName:(NSString *)moduleName;

// 原有方法保持不变
+ (IMP)swizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP;
+ (void)swizzleMethod:(SEL)sel inClass:(Class)cls withBlock:(id)block;
+ (BOOL)addOrSwizzleMethod:(SEL)sel
                   inClass:(Class)cls
                   withIMP:(IMP)newIMP
              typeEncoding:(const char *)typeEncoding
               originalIMP:(IMP *)outOrigIMP;

@end