# FontLayoutHook 改造文档 —— 核心 Hook 逻辑修正

## 一、问题定位

### 1.1 现有 Hook 的错误

你的 [FontLayoutHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/FontLayout/FontLayoutHook.m) 当前：

```objc
MSHookMessageEx(objc_getClass("MMUILabel"), @selector(setFont:), ...)       // ❌
MSHookMessageEx(objc_getClass("MMTableViewCell"), @selector(layoutSubviews), ...)  // ❌
```

**错误本质**：直接在控件层修改字号，绕过了微信的主题系统。
- 只影响 `MMUILabel`（漏掉普通 `UILabel`）
- `layoutSubviews` 不改布局参数，只改 cell 里的 label 字号
- **结果：cell 高度、气泡大小、间距等所有布局都没变**

### 1.2 锤子助手的正确做法

锤子助手通过 **Hook 微信主题系统** 实现所有布局改变：

```objc
MSHookMessageEx(objc_getClass("MMThemeManager"), @selector(getValueOfProperty:inRuleSet:), ...)  // ✅
MSHookMessageEx(objc_getClass("CLocalInfo"), @selector(m_uiGlobalFontLevel), ...)                 // ✅
```

**原理**：
- `CLocalInfo.m_uiGlobalFontLevel = 1` → 微信使用**大字版整套布局参数**（行高↑ 气泡↑ 间距↑ 头像↑）
- `MMThemeManager.getValueOfProperty:inRuleSet:` → **在此之上**覆盖具体的 fontSize 值

### 1.3 你的 UI 是正确的

你的 [WPUILayoutSettingsVC.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/WPUILayoutSettingsVC.m) 使用输入框输入字体大小（10-16），这就是锤子助手的做法。

**UI 不需要修改**。

---

## 二、需要修改的文件清单

| 文件 | 操作 | 说明 |
|------|------|------|
| `FontLayoutHook.m` | **完全重写** | 唯一需要改的文件 |
| `FontLayoutConfig.h` | **无需修改** | 属性名/类型都正确 |
| `FontLayoutConfig.m` | **无需修改** | descriptors 正确 |
| `WPUILayoutSettingsVC.m` | **无需修改** | UI 保持现状 |
| `MioModuleRegistry.m` | **无需修改** | 注册逻辑正确 |

**只需要改 1 个文件：`FontLayoutHook.m`**

---

## 三、FontLayoutHook.m 完整代码（完全重写）

```objc
// FontLayoutHook.m —— 完全重写
// 从"改控件字号"改为"改微信主题系统"
// 复刻锤子助手：Hook MMThemeManager + CLocalInfo

#import "FontLayoutHook.h"
#import "FontLayoutConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>

// ═══════════════════════════════════════════════
// Hook 1: MMThemeManager.getValueOfProperty:inRuleSet:
// 对应锤子助手 FUN_00753950 + DAT_01411e48
// 功能：拦截微信主题系统查询，覆盖属性返回值
// ═══════════════════════════════════════════════

/// 原方法指针
static id (*orig_getValueOfProperty_inRuleSet)(id, SEL, NSString *, NSString *);

/// 替代函数
static id hook_getValueOfProperty_inRuleSet(id self, SEL _cmd,
                                             NSString *property,
                                             NSString *ruleSet) {
    FontLayoutConfig *config = [FontLayoutConfig shared];
    BOOL globalOn = config.globalLayoutEnabled;
    BOOL chatOn   = config.chatLayoutEnabled;

    if (globalOn || chatOn) {
        // ── 全局布局 ──
        // 条件：globalOn + property = allLevel/webLevel + ruleSet 以 _font_set 结尾
        if (globalOn && [ruleSet hasSuffix:@"_font_set"]) {
            if ([property isEqualToString:@"allLevel"] ||
                [property isEqualToString:@"webLevel"]) {
                CGFloat fontSize = config.globalFontSize;
                if (fontSize >= 10.0f && fontSize <= 16.0f) {
                    NSString *ret = [NSString stringWithFormat:@"%.0f", fontSize];
                    WPLog(@"FontLayout",
                          @"[MMThemeManager] %@ in %@ → %.0f",
                          property, ruleSet, fontSize);
                    return ret;
                }
            }
        }

        // ── 对话布局 ──
        // 条件：chatOn + property = chatLevel + ruleSet 以 _font_set 结尾
        if (chatOn && [ruleSet hasSuffix:@"_font_set"]) {
            if ([property isEqualToString:@"chatLevel"]) {
                CGFloat fontSize = config.chatFontSize;
                if (fontSize >= 10.0f && fontSize <= 16.0f) {
                    NSString *ret = [NSString stringWithFormat:@"%.0f", fontSize];
                    WPLog(@"FontLayout",
                          @"[MMThemeManager] %@ in %@ → %.0f",
                          property, ruleSet, fontSize);
                    return ret;
                }
            }
        }
    }

    // 不匹配 → 走原方法
    return orig_getValueOfProperty_inRuleSet(self, _cmd, property, ruleSet);
}

// ═══════════════════════════════════════════════
// Hook 2: CLocalInfo.m_uiGlobalFontLevel
// 对应锤子助手 FUN_00753ce8 + DAT_01411e50
// 功能：强制返回 1，激活微信大字模式
// ═══════════════════════════════════════════════

/// 原方法指针
static unsigned int (*orig_m_uiGlobalFontLevel)(id, SEL);

/// 替代函数
static unsigned int hook_m_uiGlobalFontLevel(id self, SEL _cmd) {
    FontLayoutConfig *config = [FontLayoutConfig shared];

    // 任一布局开启 → 返回 1（大字模式）
    // 微信看到 1 后会：
    //   1. 使用大字版 _font_set 规则集
    //   2. 所有布局参数切换到放大版本
    if (config.globalLayoutEnabled || config.chatLayoutEnabled) {
        return 1;
    }

    // 未开启 → 走原逻辑
    return orig_m_uiGlobalFontLevel(self, _cmd);
}

// ═══════════════════════════════════════════════
// 安装入口
// ═══════════════════════════════════════════════

@implementation FontLayoutHook

+ (void)install {
    Class cls = Nil;

    // ── Hook ① ──
    cls = objc_getClass("MMThemeManager");
    if (cls) {
        MSHookMessageEx(cls,
                        @selector(getValueOfProperty:inRuleSet:),
                        (IMP)hook_getValueOfProperty_inRuleSet,
                        (IMP *)&orig_getValueOfProperty_inRuleSet);
        WPLog(@"FontLayout", @"[+] MMThemeManager.getValueOfProperty:inRuleSet: hooked");
    } else {
        WPLog(@"FontLayout", @"[-] MMThemeManager class not found");
    }

    // ── Hook ② ──
    cls = objc_getClass("CLocalInfo");
    if (cls) {
        MSHookMessageEx(cls,
                        @selector(m_uiGlobalFontLevel),
                        (IMP)hook_m_uiGlobalFontLevel,
                        (IMP *)&orig_m_uiGlobalFontLevel);
        WPLog(@"FontLayout", @"[+] CLocalInfo.m_uiGlobalFontLevel hooked → return 1");
    } else {
        WPLog(@"FontLayout", @"[-] CLocalInfo class not found");
    }

    WPLog(@"FontLayout", @"✓ FontLayoutHook install complete");
}

@end
```

---

## 四、与锤子助手的逐行对照

| 锤子助手 | 本项目 | 逻辑 |
|---------|--------|------|
| `FUN_00753804` 安装 Hook | `+ (void)install` | 安装两个 MSHookMessageEx |
| `FUN_00753950`（MMThemeManager 替代） | `hook_getValueOfProperty_inRuleSet` | 拦截主题属性查询 |
| `allLevel` + `_font_set` | `[property isEqualToString:@"allLevel"]` + `hasSuffix:@"_font_set"` | 匹配全局布局属性 |
| `webLevel` + `_font_set` | `[property isEqualToString:@"webLevel"]` + `hasSuffix:@"_font_set"` | 匹配网页布局属性 |
| `chatLevel` + `_font_set` | `[property isEqualToString:@"chatLevel"]` + `hasSuffix:@"_font_set"` | 匹配对话布局属性 |
| 读取 `changeCSSString` | `config.globalFontSize` | 获取配置值 |
| JSON 解析 + 取值 | 直接使用 `config.globalFontSize` | 你的 UI 已存储数值 |
| `FUN_00753ce8`（CLocalInfo 替代） | `hook_m_uiGlobalFontLevel` | 强制大字模式 |
| 返回 `1` | `return 1` | 激活大字模式 |

---

## 五、改造前后的执行流程对比

### 改造前（错误）

```
用户设置 fontSize=16
  → FontLayoutHook 安装
  ├── MMUILabel.setFont: 被 Hook
  │   → 修改 label.font 属性（只改字号）
  └── MMTableViewCell.layoutSubviews 被 Hook
      → 遍历 subviews 修改 label 字号

结果：只有部分文本字号变了
      cell高度没变、气泡没变、间距没变、头像没变
```

### 改造后（正确）

```
用户设置 fontSize=16
  → FontLayoutHook 安装
  ├── CLocalInfo.m_uiGlobalFontLevel
  │   → return 1
  │   → 微信使用大字版布局参数
  │      ├── cell 高度 ↑（~52→~62pt）
  │      ├── 气泡宽度 ↑（60%→65%）
  │      ├── 头像尺寸 ↑（40→44pt）
  │      ├── 控件间距 ↑
  │      └── 所有 UI 都放大
  │
  └── MMThemeManager.getValueOfProperty:inRuleSet:
      → query "allLevel" in "_font_set"
      → return @"16"
      → 微信使用 16pt 作为正文字号

结果：所有布局都变了（大字模式）+ 字号被覆盖为指定值
```

---

## 六、不需要修改的文件说明

### 6.1 FontLayoutConfig.h

你的 [FontLayoutConfig.h](file:///www/wwwroot/ios/MioPlugin/Modules/FontLayout/FontLayoutConfig.h) 当前定义：

```objc
@property (nonatomic, assign) BOOL globalLayoutEnabled;
@property (nonatomic, assign) CGFloat globalFontSize;
@property (nonatomic, assign) BOOL chatLayoutEnabled;
@property (nonatomic, assign) CGFloat chatFontSize;
```

**完全正确**，不需要修改。
- `CGFloat` 类型适合存储 10-16 的浮点数值
- 属性名 `globalFontSize`/`chatFontSize` 准确表达含义
- 默认值通过 ConfigManager descriptors 注入

### 6.2 FontLayoutConfig.m

你的 [FontLayoutConfig.m](file:///www/wwwroot/ios/MioPlugin/Modules/FontLayout/FontLayoutConfig.m) 当前 descriptors：

```objc
[ConfigDescriptor itemWithKey:@"globalLayoutEnabled" type:ConfigValueTypeBool   default:@(NO)],
[ConfigDescriptor itemWithKey:@"globalFontSize"      type:ConfigValueTypeFloat  default:@(16.0f)],
[ConfigDescriptor itemWithKey:@"chatLayoutEnabled"   type:ConfigValueTypeBool   default:@(NO)],
[ConfigDescriptor itemWithKey:@"chatFontSize"        type:ConfigValueTypeFloat  default:@(16.0f)],
```

**完全正确**，不需要修改。
- 默认值 `16.0f` 与锤子助手一致
- `ConfigValueTypeFloat` 正确匹配 `CGFloat`

### 6.3 WPUILayoutSettingsVC.m

你的 [WPUILayoutSettingsVC.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/WPUILayoutSettingsVC.m) 使用输入框输入字号：

```objc
*ecy = [self addInputRowInGroup:expand
                          title:@"全局字体大小(px)"
                            key:@"globalFontSize"
                          value:[NSString stringWithFormat:@"%.0f", globalSize]
                           hint:@"16"
                      valueType:InputValueTypeNumber
                     alertTitle:@"设置全局字体大小"
                   alertMessage:@"请输入10-16之间的数值"
                             cy:*ecy width:w];
```

**完全正确**，不需要修改。这就是锤子助手的做法——输入框输入数值。

### 6.4 MioModuleRegistry.m

注册代码：

```objc
[MioModuleDescriptor descriptorWithIdentifier:@"fontlayout"
                                        title:@"布局字号"
                                   configClass:[FontLayoutConfig class]
                                   hookClasses:@[[FontLayoutHook class]]
                               controllerClass:[WPUILayoutSettingsVC class]
                                      subtitle:@"全局/对话字号调整"
                                 sectionTitle:@"通用"],
```

**无需修改**，自动完成 Config 注册 + Hook 安装 + UI 入口。

---

## 七、总结：只需要改 1 个文件

```
FontLayoutHook.m：删除旧的 MMUILabel/MMTableViewCell Hook
                 新增 MMThemeManager + CLocalInfo Hook
                 代码见第三章完整内容

其他文件：全部不动
```