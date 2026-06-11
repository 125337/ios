# WCRefine vs 黄白助手 Hook 技术全面对比分析

## 分析范围

基于两份反编译源码：
- `/www/wwwroot/ios/插件/WCRefine反编译/WCRefine1.4-5.dylib.c`
- `/www/wwwroot/ios/插件/黄白助手反编译/黄白助手 2.0-9(1).dylib.c`

---

## 一、Hook 注册方式对比

### 1.1 MSHookMessageEx（ObjC 方法 Hook）

| 项目 | WCRefine | 黄白助手 |
|------|---------|---------|
| **使用次数** | ~50 次直接调用 | ~100+ 次（含包装函数） |
| **使用模式** | 按功能分组在 C 函数中直接调用 | Theos Logos 自动生成的包装函数，批量调用 |
| **是否有统一抽象层** | **否**，直接 `_objc_getClass()` + `_MSHookMessageEx()` | **否**，直接 `_objc_getClass()` + `_MSHookMessageEx()` |
| **代码风格** | 手写 C 函数，每组 2-8 个 Hook | Theos `%hook` 编译产物，自动生成 |

**典型代码对比：**

WCRefine（手写风格）：
```c
void FUN_0000a7d0(void) {
    pcVar1 = "UIApplication";
    _objc_getClass();
    _MSHookMessageEx(pcVar1, "_sendApplicationDidEnterBackgroundNotification", FUN_0000a838, &DAT_...);
    _MSHookMessageEx(pcVar1, "_sendApplicationWillEnterForegroundNotification", FUN_0000a8e8, &DAT_...);
}
```

黄白助手（Logos 自动生成风格）：
```c
void FUN_0069XXXX(void) {  // 大量独立的包装函数
    _objc_getClass("CMessageMgr");
    _sel_registerName("OnAddMsg:MsgWrap:");
    _MSHookMessageEx();
}
void FUN_0069XXX1(void) {
    _objc_getClass("CContact");
    _sel_registerName("m_nsNickName");
    _MSHookMessageEx();
}
// ... 每个 Hook 一个独立包装函数
```

### 1.2 表驱动注册

| 项目 | WCRefine | 黄白助手 |
|------|---------|---------|
| **使用自定义 Hook 结构体数组** | **否** | **否** |
| **是否有统一注册入口函数** | 有（一个主 init 函数调用各分组函数） | 有（Theos 自动生成的初始化函数） |
| **结论** | **两插件均未使用表驱动** | **两插件均未使用表驱动** |

---

## 二、全面技术矩阵对比

### 2.1 技术使用总表

| 编号 | 技术 | WCRefine | 黄白助手 | 说明 |
|------|------|:--------:|:--------:|------|
| 1 | **MSHookMessageEx** | ✅ ~50次 | ✅ ~100+次 | 两者最主要的 Hook 方式 |
| 2 | **method_setImplementation** | ✅ **~13次** | ❌ 仅3个桩函数 | **WCRefine 独有**，直接 IMP 替换 |
| 3 | **imp_implementationWithBlock** | ✅ **~20次** | ❌ 未使用 | **WCRefine 独有**，Block→IMP 转换 |
| 4 | **class_addMethod** | ✅ ~24次 | ✅ ~84次 | 两者都大量使用动态添加方法 |
| 5 | **class_replaceMethod** | ✅ ~31次 | ✅ ~100+次 | 两者都大量使用 |
| 6 | **method_exchangeImplementations** | ✅ **~16次** | ❌ **未使用** | **WCRefine 独有**的 swizzle 模式 |
| 7 | **class_getInstanceMethod** | ✅ ~30+次 | ✅ 3次（onMultiDone） | WCRefine 使用更频繁 |
| 8 | **NSSelectorFromString** | ✅ ~30+次 | ✅ 少量 | WCRefine 使用更频繁 |
| 9 | **sel_registerName** | ✅ ~40+次 | ✅ ~100+次 | 两者都大量使用 |
| 10 | **dispatch_once 初始化** | ✅ ~15+次 | ✅ 少量 | WCRefine 更依赖 |
| 11 | **objc_allocateClassPair / objc_registerClassPair** | ✅ **创建了 WCRAvatarPreviewSectionManager** | ❌ 未使用 | **WCRefine 独有**的运行时类创建 |
| 12 | **C++ vtable hook** | ❌ 未使用 | ❌ 未使用 | 两者都未使用 |
| 13 | **MSHookFunction** | ❌ 未使用 | ❌ 未使用 | 两者都未使用 C 函数 Hook |
| 14 | **fishhook / rebind_symbols** | ❌ 未使用 | ❌ 未使用 | 两者都未使用 |
| 15 | **_dyld_register** | ❌ 未使用 | ❌ 未使用 | 两者都未使用 |
| 16 | **dlopen / dlsym** | ❌ 未使用 | ✅ 仅用于 VideoToolbox 常量 | 黄白助手独有，非 Hook 用途 |
| 17 | **Hook 触发时机** | 主 init 函数 + dispatch_once | **+ initialize 方法**（4个类） | 两者触发方式不同 |
| 18 | **表驱动注册（struct/table）** | ❌ **未使用** | ❌ **未使用** | **两者均未使用** |
| 19 | **代码生成方式** | 疑似**手写** C/ObjC | **Theos Logos 自动生成** | 架构差异的根本原因 |
| 20 | **元类（metaclass）Hook** | 未发现 | ✅ ~100+次 `_objc_getMetaClass` | 黄白助手大量涉及类方法 Hook |

### 2.2 技术架构图

```
WCRefine Hook 架构:
┌─────────────────────────────────────────────┐
│              主初始化函数                      │
│         (dispatch_once 保护)                  │
├──────────┬──────────┬──────────┬─────────────┤
│ 分组函数1 │ 分组函数2 │ 分组函数3 │     ...     │
│ (UIApp)  │(MMHeadImg)│(MsgVC)  │             │
├─────┬────┼────┬─────┼────┬────┼──────┬──────┤
│MSHook│SWZ │MSHook│SWZ │MSHook│SWZ │class_│class_│
│MsgEx │zle │MsgEx │zle │MsgEx │zle │addMet│replac│
│      │    │      │    │      │    │hod   │eMeth │
└─────┴────┴──────┴─────┴──────┴────┴──────┴──────┘
  MSHook = MSHookMessageEx  SWZ = method_exchangeImplementations
  block = method_setImplementation + imp_implementationWithBlock

黄白助手 Hook 架构:
┌─────────────────────────────────────────────────┐
│       Theos Logos 自动生成的初始化代码群            │
│  (每个 Hook 一个独立的包装函数，通过 +initialize 触发) │
├─────────────────────────────────────────────────┤
│   ~100 个包装函数各自调用:                         │
│   _objc_getClass → _sel_registerName → _MSHookMessageEx │
│   或: _class_addMethod / _class_replaceMethod      │
│   或: _objc_getMetaClass + _class_addMethod        │
└─────────────────────────────────────────────────┘
```

---

## 三、你的项目 vs 两者的对比

| 对比维度 | WCRefine | 黄白助手 | **你的项目** |
|---------|:--------:|:--------:|:----------:|
| **主 Hook 方式** | MSHookMessageEx | MSHookMessageEx | MSHookMessageEx |
| **是否有统一抽象层** | ❌ 无 | ❌ 无 | ✅ **有 HookEngine** |
| **是否使用表驱动** | ❌ 否 | ❌ 否 | ⚠️ 仅 MessageTimeHook 自建表 |
| **是否使用 @selector() 编译期检查** | ❌ 反编译为 C 字符串 | ❌ 反编译为 C 字符串 | ✅ **是** |
| **Method Swizzle** | ✅ 大量 | ❌ 无 | ❌ 无 |
| **Block→IMP** | ✅ 大量 | ❌ 无 | ❌ 无 |
| **运行时创建类** | ✅ 创建了 1 个 | ❌ 无 | ❌ 无 |
| **元类 Hook** | ❌ 未发现 | ✅ 大量 | ❌ 无 |
| **Theos Logos 生成** | ❌ 否（手写） | ✅ 是 | ❌ 否（手写） |
| **静态选择器检查** | ⚠️ 无（NSSelectorFromString） | ⚠️ 无（sel_registerName） | ✅ `@selector()` 编译期检查 |
| **设计模式** | 纯命令式 C 函数分组 | Theos 自动生成包装函数 | 面向对象 + HookEngine 统一入口 |

---

## 四、关键发现

### 4.1 两者都不使用表驱动

WCRefine 用了 **5 种不同的 Hook 技术**（MSHookMessageEx、method_setImplementation、imp_implementationWithBlock、class_replaceMethod、method_exchangeImplementations），黄白助手用了 **3 种**（MSHookMessageEx、class_addMethod、class_replaceMethod），但**两者都没有使用结构体/数组形式的 Hook 注册表**。

这说明 Hook 表驱动在 iOS 插件开发中并不是主流做法，**传统的 `objc_getClass` + `MSHookMessageEx` 才是 de facto standard**。

### 4.2 两者架构风格差异巨大

- **WCRefine**：手写 C 函数，代码质量较高，分组清晰（按功能领域分组），使用了多种高级 Hook 技术
- **黄白助手**：Theos Logos 自动生成代码，代码量大但结构简单（每个 Hook 一个独立包装函数），依靠 `+ initialize` 自动触发

### 4.3 相比两者，你的项目已有更好的基础设施

| 优势 | 说明 |
|------|------|
| **有 HookEngine 统一入口** | WCRefine 和黄白助手都没有专门的 HookEngine 类 |
| **有 HookRegistry 统一调度** | HookRegistry 通过 FeatureModuleRegistry 统一管理所有 hook 的生命周期 |
| **使用 `@selector()` 编译期检查** | 两者都用 C 字符串 selector，拼错只在运行时暴露 |
| **面向对象设计** | 代码结构比两者更清晰、更易维护 |

---

## 五、总结

| 问题 | 答案 |
|------|------|
| **WCRefine 只有 MSHookMessageEx 吗？** | **不是**。它还用了 `method_setImplementation` + `imp_implementationWithBlock`（核心）、`method_exchangeImplementations`（swizzle）、`class_replaceMethod`、运行时创建类 |
| **黄白助手只有 MSHookMessageEx 吗？** | **基本是，但不是全部**。它用了 `class_addMethod`（~84次）、`class_replaceMethod`（~100+次）、元类 Hook（~100+次），但核心仍是 MSHookMessageEx |
| **两者使用表驱动吗？** | **都不使用**。两者都是纯命令式逐个注册。 |
| **你的项目有必要全量迁移到表驱动吗？** | **没必要**。行业顶尖插件（WCRefine）也不使用表驱动。你的项目已有 HookEngine + HookRegistry，基础设施已比两者更好。 |

### 建议

继续使用当前的**直接 `MSHookMessageEx` + `@selector()`** 模式。MessageTimeHook 的自建表可以作为局部优化保留，但没必要将全项目迁移到表驱动——行业里最好的插件也不这么做。