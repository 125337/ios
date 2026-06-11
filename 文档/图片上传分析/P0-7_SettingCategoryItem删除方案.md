# P0-7 修复方案：删除 SettingCategoryItem + FeatureRegistry 冗余层

## 问题概述

`SettingCategoryItem` 和 `FeatureRegistry` 是两个完全冗余的中间层，在整个项目中**没有任何调用方**。

### 涉及的文件

| 文件 | 行数 | 类型 | 说明 |
|------|------|------|------|
| `Registry/FeatureRegistry.h` | 20行 | 头文件 | 声明 `SettingCategoryItem` 和 `FeatureRegistry` 接口 |
| `Registry/FeatureRegistry.m` | 41行 | 实现 | 实现 `SettingCategoryItem` 和 `FeatureRegistry` 方法 |
| **合计** | **61行** | | **完全冗余，可以全部删除** |

### SettingCategoryItem 做了什么

```objc
// FeatureRegistry.h 第5-16行
@interface SettingCategoryItem : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *sectionTitle;
@property (nonatomic, assign) Class controllerClass;
+ (instancetype)itemWithTitle:...;          // 手动组装
+ (instancetype)itemWithModule:...;          // 从 FeatureModuleDescriptor 转换
@end
```

```objc
// FeatureRegistry.m 第4-25行
@implementation SettingCategoryItem

+ (instancetype)itemWithTitle:(NSString *)title subtitle:... sectionTitle:... controllerClass:... {
    SettingCategoryItem *item = [[self alloc] init];
    item.title = title;
    // ... 赋值 ...
    return item;
}

+ (instancetype)itemWithModule:(FeatureModuleDescriptor *)module {
    return [self itemWithTitle:module.title subtitle:module.subtitle
                  sectionTitle:module.sectionTitle controllerClass:module.controllerClass];
}

@end
```

`itemWithModule:` 把 `FeatureModuleDescriptor` 的属性挨个复制到 `SettingCategoryItem`，两者字段完全一致。

### FeatureRegistry 做了什么

```objc
// FeatureRegistry.m 第27-41行
@implementation FeatureRegistry

+ (NSArray<NSString *> *)orderedSectionTitles {
    return [FeatureModuleRegistry orderedSectionTitles];  // 直接透传
}

+ (NSArray<SettingCategoryItem *> *)itemsForSection:(NSString *)sectionTitle {
    NSMutableArray<SettingCategoryItem *> *items = [NSMutableArray array];
    for (FeatureModuleDescriptor *module in [FeatureModuleRegistry modulesForSection:sectionTitle]) {
        [items addObject:[SettingCategoryItem itemWithModule:module]];
    }
    return items;
}

@end
```

`FeatureRegistry` 只是把 `FeatureModuleRegistry` 的返回值包装了一层 `SettingCategoryItem`，没有增加任何逻辑。

### 为什么可以删除（搜索全项目确认）

| 搜索目标 | 搜索结果 | 结论 |
|----------|---------|------|
| `#import.*FeatureRegistry` | 仅 `FeatureRegistry.m` 自身 | 无外部调用 |
| `#import.*SettingCategoryItem` | 仅 `FeatureRegistry.h` 自身 | 无外部调用 |
| `[SettingCategoryItem` | 无匹配 | 未实例化 |
| `[FeatureRegistry` | 无匹配 | 未调用 |
| `SettingCategoryItem *` | 仅 `FeatureRegistry.h` 自身声明 | 无使用者 |

---

## 目标

- 删除 `FeatureRegistry.h` 和 `FeatureRegistry.m` 两个文件
- 删除 `SettingCategoryItem` 类
- **无需任何其他文件修改**

---

## 详细修改步骤

### Step 1：验证删除安全性

在删除前，确认全项目无任何引用：

```bash
# 在 /www/wwwroot/ios/MioPlugin 目录下搜索
grep -rn "FeatureRegistry\|SettingCategoryItem" --include="*.m" --include="*.h" .
```

预期输出（仅自引用）：
```
Registry/FeatureRegistry.h
Registry/FeatureRegistry.m
```

如果搜索到其他文件引用了这些类/对象，需要先改造那些文件（见 Step 3）。

### Step 2：删除文件

从 Xcode 项目导航中移除以下两个文件：

| 操作 | 文件 |
|------|------|
| Delete (Move to Trash) | `Registry/FeatureRegistry.h` |
| Delete (Move to Trash) | `Registry/FeatureRegistry.m` |

如果是手动管理文件系统，执行：

```bash
rm "/www/wwwroot/ios/MioPlugin/Registry/FeatureRegistry.h"
rm "/www/wwwroot/ios/MioPlugin/Registry/FeatureRegistry.m"
```

### Step 3（备选）：如果存在外部引用

如果 `grep` 搜索到 `FeatureRegistry` 或 `SettingCategoryItem` 在其他文件被使用，按以下方式改造：

**方案 A**（推荐）：将引用处改为直接用 `FeatureModuleRegistry`

如果存在 `[FeatureRegistry orderedSectionTitles]`：

```objc
// 旧
NSArray *titles = [FeatureRegistry orderedSectionTitles];

// 新
#import "FeatureModuleRegistry.h"  // 在文件顶部添加
NSArray *titles = [FeatureModuleRegistry orderedSectionTitles];
```

如果存在 `[FeatureRegistry itemsForSection:]`：

```objc
// 旧
NSArray *items = [FeatureRegistry itemsForSection:section];

// 新
#import "FeatureModuleRegistry.h"  // 在文件顶部添加
NSArray<FeatureModuleDescriptor *> *items = [FeatureModuleRegistry modulesForSection:section];
// 注意: items 的元素类型变为 FeatureModuleDescriptor *，不是 SettingCategoryItem *
// 获取 title / subtitle / controllerClass 等属性时，FeatureModuleDescriptor 也有对应属性
// .title  → 同属性名
// .subtitle → 同属性名
// .controllerClass → 同属性名
```

如果存在 `SettingCategoryItem *` 类型的变量：

```objc
// 旧
SettingCategoryItem *item = ...;

// 新
#import "FeatureModule.h"  // 在文件顶部添加
FeatureModuleDescriptor *item = ...;
```

---

## 代码量变化

| 文件 | 操作 | 行数变化 |
|------|------|---------|
| `Registry/FeatureRegistry.h` | 删除 | -20行 |
| `Registry/FeatureRegistry.m` | 删除 | -41行 |
| **合计** | | **-61行** |

---

## 测试验证

### 功能测试

| 测试用例 | 操作 | 预期结果 |
|---------|------|---------|
| 1. 编译检查 | 删除两个文件后编译项目 | 编译成功，无 Undefined symbol 或 Unknown receiver 错误 |
| 2. 功能回归 | 进入插件设置页面 | 所有分类菜单（通用、红包、列表圆角等）正常显示，点击正常跳转 |
| 3. 导航回归 | 点击任意菜单 | 正常跳转到对应设置页面，页面数据完整 |

如果 Step 3 没有任何文件需改造，测试步骤只需要步骤 1（编译成功）即可。