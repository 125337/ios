# WCMoments（双列朋友圈 0.6.49）· 反编译导读

> 产物：`C:\Users\20546\Desktop\ios_cc4BX\WCMoments反编译\`
> 格式：A=功能链文件（`_chain_*.c`，按调用深度排序+CALLERS/CALLEES 注释）、B=交叉引用 HTML（`_xref.html`，函数名可点击跳转）
> 包信息：com.wcmoments.plugin v0.6.49，注入 `com.tencent.xin`，dylib 1.6MB arm64，4367 函数

## 模块地图（从链名还原，按阅读优先级）

### 1. 主功能：双列信息流（WCMFeedController）
| 链文件 | 内容 |
|---|---|
| `_chain_24_..._WCMFeedController_start__block_invoke_2.c` | 信息流启动 |
| `_chain_28_..._WCMFeedController_adjustHeaderSize__block_invoke.c` | **头部尺寸调整（双列布局核心嫌疑）** |
| `_chain_29_..._WCMFeedController_customizeHeader__block_invoke.2114.c` | 自定义头部 |
| `_chain_30_..._WCMFeedController_requestTimelineMore__block_invoke.c` | 加载更多 |
| `_chain_25/26/27/31_...` | 发布/缓存管理/相册选择/视频 |

### 2. WebView 桥（设置页与注入脚本通信）
| 链文件 | 内容 |
|---|---|
| `_chain_83_..._userContentController_didReceiveScriptMessage_.c`（1119KB，最大） | JS→Native 消息入口 |
| `_chain_02_webView_startURLSchemeTask_.c` | URL Scheme 资源服务 |
| `_chain_09/13/15/21/22_viewDidLoad.c` | 各控制器加载（设置页/预览页） |

### 3. 捆绑的第三方库（读懂主干后再看）
| 库 | 链 | 说明 |
|---|---|---|
| WCMYBImageBrowser / WCMYBIB* | 35-37, 41-46, 84-85 | YBImageBrowser 图片浏览器 |
| WCMYYImageDecoder / WCMYYAnimatedImageView | 51-57 | YYImage 图像解码 |
| WCMTOCropViewController | 59-69, 71-76, 79 | TOCropViewController 图片裁剪 |
| WCMQQRefreshControl | 8 | 下拉刷新 |

### 4. 基础设施
- `_chain_34_..._Install_block_invoke.3018.c`（802KB）：**钩子安装总入口——想看它 hook 了微信哪些方法，从这读**
- `_chain_18__Trace.c`：诊断追踪

## 快速回答"双列怎么实现的"

1. 先读 `_chain_34_..._Install...`（钩子清单）
2. 再读 `_chain_28_..._adjustHeaderSize...` + `_chain_29_..._customizeHeader...`（布局调整）
3. 配合 `_xref.html` 从 `WCMFeedController` 类点击跳转

## 格式说明
- `_xref.html`（4.6MB）：左侧类分组索引，右侧代码，金色函数名可点击跳转；每函数头部标 ←调用方 / →被调方
- `_chain_*.c`：每函数头 `[dN]` = 距根调用深度；CALLERS/CALLEES 列出关联函数
- 全量底料：`FUN_.c` 分片 + `_index.tsv`（4367 函数名/地址）
