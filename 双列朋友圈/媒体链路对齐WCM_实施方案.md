# 媒体链路对齐 WCM · 实施方案

> 原则：**机制同构，行为自主**——数据流/key 体系/协议/校验/队列/就绪门槛与 WCM 反编译实证同构；
> 外显行为（零破图、占位、图源兼容）按我们需求保留，不逐字节复刻。
> 证据基线：[图片视频全链路_代码级对照.md](图片视频全链路_代码级对照.md)（2026-10 二次印证版）

---

## 〇、对齐总览

```
P0 key 体系      MD5(path) → SHA256(mediaKey) hex，root/<sha256>.<ext>（扩展名由魔数定）
P0 转码策略      无条件转码 → 魔数嗅探分流（jpg/png 直存，其余 JPEG 0.999）
P0 队列模型      单队列+_copying → 双队列（thumbnail/original）+ 双 pending 集合
P0 handler 校验  加 host==token 校验（SHA256(账号标识)），补齐三层校验链
P0 displayCache  data 单值 → {data, mime} 双值 + cost=length
P1 解码管线      UIImage 绘制 → ImageIO（CGImageSource+方向+maxPixel clamp+CGImageDestination）
P1 assetMiss 通道  新增 JS onerror → native script message 标准入口（二线保险）
P1 媒体提取      优先 pathFor* duck-typing（pathForData/HdData/UhdData/SightData），回落现四件套
P2 原图通道      pendingOriginalExports + original 队列 + galleryRawPath(quality 2/3/4)
P2 大图浏览器    YB fork（对齐⑥）——独立立项
P2 视频链路      extractVideoCover 同构（AVAsset 抽帧@0.1s → JPEG 0.999 → video_<sha256>.jpg）
```

---

## 一、P0：key 体系（MioDualMediaService + 全下游）

**WCM 实证**：key = `_Digest(mediaKey)` = CC_SHA256 → 64 位 hex；文件名 `root/<sha256>.<ext>`，
扩展名由导出块魔数嗅探决定；wcm-cache URL 自带 host（accountToken）+ 扩展名。

**改法**（[MioDualMediaService.m](file:///c:/Users/20546/Desktop/ios_cc4BX/MioPlugin/Modules/Moments/MioDualMediaService.m)）：

```objc
// 现状：key = MD5(path)（16 字节 hex，路径敏感：微信换缓存目录 → key 全变）
// 对齐：key = SHA256(mediaKey)，mediaKey 取微信侧稳定标识（优先 mediaKey 对象描述，
//       回落 CDN URL，再回落 path——与 WCM 的 mediaKey 语义一致）
static NSString *Digest(NSString *mediaKey);   // CC_SHA256 → %02x ×32

// 稳定副本路径带真实扩展名：Caches/mio_dual_media/<sha256>.<ext>
// 扩展名来源 = 导出时魔数嗅探（见 §二），注册表存 {key → {iid, cdn, ext}}
```

**连带**：displayCache 键、JS 行 mediaSrc（`mioimg://<token>/<sha256>.<ext>`）、快照、
注册表（NSUserDefaults）全部换新键。
**迁移**：不做兼容映射——自有副本可随时从源重建，直接清 `mio_dual_media/` + 旧注册表，
首启重导出（符合"删旧实现"惯例）。

## 二、P0：魔数嗅探 + 条件转码（对齐 WCM 导出块 @0x32ff4）

**WCM 实证**：读源 → 魔数嗅探（FF D8=jpg / PNG 签名 / ftyp heic|heix|mif1|msf1=heic）→
jpg/png/heic **原字节直存**（只定扩展名），其余格式才 `UIImageJPEGRepresentation(0.999)`。

**改法**（exportQueue 块内替换现"jpg/png 直拷 + heic/gif 转码"的格式判断）：

```objc
NSData *data = [NSData dataWithContentsOfFile:src options:NSDataReadingMappedIfSafe error:nil];
NSString *ext = SniffExt(data);        // 按魔数：jpg / png / heic / …
if ([ext isEqualToString:@"jpg"] || [ext isEqualToString:@"png"]) {
    [data writeToFile:dst_atomic options:0x40000001 error:nil];   // 原字节直存（原子+保护，同 WCM）
} else {
    // heic：WebKit 兼容 → JPEG 0.999（与 WCM 的行为差异点：WebKit 低版本不支持 HEIC，机制同构）
    UIImage *img = [UIImage imageWithData:data];
    [UIImageJPEGRepresentation(img, 0.999) writeToFile:dst_atomic options:0x40000001 error:nil];
}
```

与 WCM 唯一差异：heic 分支我们转码（WebKit 兼容），他直存 + mime image/heic（高版本 WebKit）。
写文件统一走 `NSFileWriteAtomic + NSFileProtectionComplete`（0x40000001，对齐）。

## 三、P0：双队列 + 双 pending 集合（对齐 WCM @0x32700）

**WCM 实证**：`pendingExports`（quality==1 缩略图，previewQueue）/ `pendingOriginalExports`
（quality>1 原图，mediaQueue）各自 containsObject 去重，两套独立。

**改法**：

```objc
_exportThumbQueue   （NSOperationQueue，缩略图通道）
_exportOriginalQueue（NSOperationQueue，原图通道，P2 启用）
_pendingThumbs      （NSMutableSet，@synchronized）
_pendingOriginals   （NSMutableSet，@synchronized）
// 删除 _copying、单 _exportQueue
```

## 四、P0：handler 三层校验 + URL 形态（对齐 @0x41e0）

**WCM 实证**：三层校验 = ① `URL.host isEqualToString: accountToken`
（accountToken = SHA256 摘要，start 时算一次）② key 字符白名单 `[A-Za-z0-9_]`
③ 禁 `_` 前缀。任一不过 → NSURLErrorDomain fail（fail-fast）。

**改法**（[MioDualSchemeHandler](file:///c:/Users/20546/Desktop/ios_cc4BX/MioPlugin/Modules/Moments/MomentsDualPanel.m)）：

```objc
// URL 形态：mioimg://<token>/<sha256>.<ext>   （host 段 = token，替换现 "local"）
// token = SHA256(activeUser 标识) 启动算一次存 gDualMediaToken——防跨账号串图，语义同 accountToken
// ① host 校验（新增） ②③ 白名单/前缀（已有，保留）
```

**失败路径保留我们的 zero-fail**（占位 200 + no-store），这是行为差异、非机制差异——
他 fail-fast 后靠 JS onerror→assetMiss 补拉，我们占位 + ensureMediaForKey 补拉，
补拉入口在 §六 P1 补齐 assetMiss 消息通道后两条腿都有。

## 五、P0：displayCache 双值（对齐 @0x4968）

```objc
// 现状：URL → NSData
// 对齐：URL → {data, mime}（NSDictionary 或轻量 struct），cost = data.length
// mime 由扩展名映射：jpg→image/jpeg / png→image/png / gif→image/gif
```

## 六、P1：ImageIO 解码管线（对齐 @0x4968 解码块）

**WCM 实证**：CGImageSource 取属性（宽高/方向）→ 方向 4-9 交换画布 →
`CGImageSourceCreateThumbnailAtIndex`（kCGImageSourceShouldCacheImmediately + maxPixel clamp
[1024, 2048]）→ CGImageDestination 重编码（LossyCompressionQuality）。

**改法**：替换现 `UIImage drawInRect + UIImageJPEGRepresentation(0.8)`：

```objc
CGImageSourceRef src = CGImageSourceCreateWithData(...);
// maxPixel = MAX(512, (bounds.width - 40) * scale / 2 + 64)   ← 公式已与 WCM 逐字一致，直接喂给 clamp
CGImageRef thumb = CGImageSourceCreateThumbnailAtIndex(src, 0, &opts);   // transform+cacheImmediately
CGImageDestinationRef dst = CGImageDestinationCreateWithData(..., kUTTypeJPEG, ...);
CGImageDestinationAddImage(dst, thumb, @{kCGImageDestinationLossyCompressionQuality: @0.8, ...});
```

收益：方向/EXIF 自动处理、低峰内存（不整图解码）、HEIC 源可直解。

## 七、P1：assetMiss 消息通道（对齐 didReceiveScriptMessage）

**WCM 实证**：`userContentController:didReceiveScriptMessage:` 识别 `assetMiss` 动作
（JS img onerror 上报 key）→ native 补拉。

**改法**：panel.js 的 `<img>` onerror → `webkit.messageHandlers.mio.postMessage({a:'assetMiss', key})`；
native 侧在既有消息分发里加该 action → `ensureMediaForKey`（复用现管线）。
现 zero-fail 下 onerror 理论不触发，此通道作为 WebKit 层异常的二线保险（行为不变，链路对齐）。

## 八、P1：媒体提取 pathFor* 优先（对齐 ②）

**WCM 实证**：nativePath 来自 `pathForData/pathForHdData/pathForUhdData`（gallery 质量 2/3/4）、
`pathForSightData`（视频），galleryRawPath:quality: 附 size+mtime 签名去重。

**改法**（[MioDualTimelineStore.mediaSrc](file:///c:/Users/20546/Desktop/ios_cc4BX/MioPlugin/Modules/Moments/MioDualTimelineStore.m#L337-L362)）：

```objc
// 优先级：mediaItem → pathForData 系 duck-typing（gallery 稳定 API）
//        → 回落现四件套（thumb/preview/data/hd）
//        → 分享帖 attachThumbUrl 直连（保留，我们独有增强）
// 帖子元信息可带 quality（2/3/4）供 P2 原图通道复用
```

## 九、P2：原图通道（对齐 ⑥ 原图半边）

```objc
// galleryRawPath:quality: duck-typing：quality 2=pathForData 3=pathForHdData 4=pathForUhdData
// size+mtime 签名（galleryFileSignature）去重：签名变了才重导
// 走 §三 original 队列 + _pendingOriginals；完成 → renderKeys 语义更新 → patch 推 JS
// 入口：卡片点图/长按（配合 P2 大图浏览器或先做"查看原图"轻交互）
```

## 十、P2：大图浏览器 + 视频链路（对齐 ⑥ 整段，独立立项）

- **大图浏览器**：YB fork（WCMYBImageBrowser 簇 270 函数 + WCMYYImageDecoder 全格式）。
  机制对齐项：YBIBImageData 数据源协议（loadThumbImage/loadYBImage）、解码器接口
  （frameAtIndex:decodeForDisplay: / newCGImageFromIndex）、原图质量通道接入。
  体量大（270 函数级），建议 fork 成熟 YB 库按 WCM 接口收口，勿手写。
- **视频**：extractVideoCover 同构（AVAssetImageGenerator 抽帧@0.1s → JPEG 0.999 →
  `video_<sha256>.jpg` → wcm-cache 式 URL）；播放走 WCMVideoController 同构
  （localVideoPath/prepareVideoPaths + WCDownloadVideoCDNMgr 回调）。

## 十一、对齐后的删除清单（先建后删）

| # | 删除项 | 接管者 |
|---|---|---|
| 1 | `_copying` 单队列去重 | `_pendingThumbs/_pendingOriginals` 双集合（§三） |
| 2 | MD5 key + 旧注册表 | SHA256 key + 新注册表（§一，直接清重建） |
| 3 | `_ready` stat-once 集合 | displayCache 命中 + 服务时文件校验（WCM 模式，§五） |
| 4 | `gMediaEpoch` / `_pendingMedia` 代际重映射 | 导出完成 → 更新行 → patch 推 JS（WCM renderKeys 语义，§九完成链复用） |
| 5 | `UIImage drawInRect` 缩放 | ImageIO 管线（§六） |

#3/#4 在 §一/§三/§六 落地后执行，一次提交内先建后删。

## 十二、行为保留项（明确不对齐）

| 项 | WCM | 我们保留 | 理由 |
|---|---|---|---|
| 失败路径 | fail-fast（-1100 didFail） | zero-fail 占位 200 | B1/B2 破图根治产物；补拉链路经 §七 双腿对齐 |
| heic 源 | 原字节直存 + image/heic | 转 JPEG 0.999 | WebKit 低版本兼容 |
| scheme 名 | wcm-cache:// | mioimg:// | 命名，无机制差异 |
| 备图触发 | assetMiss 被动 | visible 视口主动 + 5s 轮询 + assetMiss 二线 | 主动备图是我们的体验增强 |
| 分享帖封面 | 无证据 | attachThumbUrl 直连 | 我们独有 |

## 十三、实施顺序与验证

**顺序**：§一 key → §二 嗅探 → §三 队列 → §四 handler → §五 cache（P0 一个提交链）
→ §六 ImageIO → §七 assetMiss → §八 pathFor*（P1）→ §九/§十（P2 立项另议）
→ §十一 删除清单收尾。

**验证基线**（沿用对照文档 §八）：
1. 清缓存冷启 → 首启重导出全量成功，key 全为 64 位 hex
2. 新帖秒出文本卡 → 图就绪 patch 补图（零破图，占位链回归）
3. 跨账号切换：token 变 → 旧图全部 miss → 重导出（不串图）
4. HEIC 源帖 → JPEG 落盘可显；jpg/png 源帖 → 原字节直存（字节级 diff 源=副本）
5. 连续滚动 3 分钟：零破图、媒体相关 LEAVE ≤5ms（ImageIO 后应更低）
6. assetMiss 通道：人为删副本 + 强制 onerror → 补拉成功重载
