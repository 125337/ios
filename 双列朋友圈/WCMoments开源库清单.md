# WCMoments（双列朋友圈 0.6.49）· 捆绑开源库清单

> 来源：`WCMoments反编译\`（类名解析 29 类 + dylib 字符串扫描 12223 条）
> 所有第三方符号都加了 **WCM 前缀**（`WCMYYImageDecoder`、`wcm_yyb_*`、`_wcm_yy_*`）——避免和微信宿主类撞名，这是唯一改名手段，代码逻辑未变。

## 总览

| 库 | 上游仓库 | 许可证 | 类数 | 占比 |
|---|---|---|---|---|
| **YBImageBrowser** | github.com/indulgeIn/YBImageBrowser | MIT | ~18 | 最大头 |
| **TOCropViewController** | github.com/TimOliver/TOCropViewController | MIT | ~8 | 中 |
| **YYImage** | github.com/ibireme/YYImage | MIT | ~6 | 中 |
| 插件本体（双列逻辑） | 无（闭源自写） | — | ~7 | 小 |
| QQ 样式下拉刷新 | 自写/魔改 | — | 1 | 2 方法 |

**没有** Masonry / SDWebImage / MBProgressHUD / MJRefresh 等常见依赖——纯自包含三库。

## 1. YBImageBrowser（图片浏览器）

类：`WCMYBImageBrowser`(7)、`WCMYBIBImageCell`(3)、`WCMYBIBImageData`(9)、`WCMYBIBImageData_loadOriginImage/_loadURL/_wcm_yb`、`WCMYBIBSheetView`(2)、`WCMYBIBToolViewHandler`(3)、`WCMYBIBIconManager`(1)、`WCMYBIBPhotoAlbumManager`、`WCMYBIBCopywriter`、`WCMYBIBAuxiliaryViewHandler`、`WCMYBIBAnimatedTransition_wcm_yb`(2)、`WCMYBIBCollectionViewLayout`(1)、`WCMYBIBScreenRotationHandler`(2)、分类 `NSObject(WCMYBIBImageCache)`、`UIView(WCMYBIBLoading)`、`UIImage(WCMYBImageBrowser)`

签名 API（字符串实证）：
- `wcm_yb_showTransitioningWithContainer:startView:...` / `wcm_yb_hideTransitioning...`
- `wcm_yb_imageBrowser:pageChanged:data:`（FeedController 实现的浏览器回调）
- `wcm_yb_maximumZoomScaleWithContainerSize:image:`
- `wcm_ybib_saveToPhotoAlbum`、`wcm_ybib_getImageDataWithPHAsset:completion:`

读：`_chain_35/36/37`（浏览器主体）、`_chain_41/42/43`（ImageCell/Data）、`_chain_84/85`

## 2. TOCropViewController（图片裁剪）

类：`WCMTOCropViewController`(15)、`WCMTOCropView`(11)、`WCMTOCropOverlayView`(4)、`WCMTOCropToolbar`、`WCMTOCropRotate`、`WCMTOCropViewControllerTransitioning`、`WCMTOCropViewControllerAspectRatioPreset`

签名 API：`ratio16x9/ratio4x3/square...`（九宫比例预设）、`wcm_croppedImageWithFrame:angle:circularClip:`

读：`_chain_59-69`（viewDidLoad 系 + 转场 + layoutSubviews）、`_chain_71-79`

## 3. YYImage（图像解码/动图）

类：`WCMYYImage`、`WCMYYImageDecoder`、`WCMYYImageEncoder`、`WCMYYAnimatedImageView`(3)、`_YYImageWeakProxy`、分类 `UIImage(WCMYYImageCoder)`

签名 API：`wcm_yy_imageByDecoded`、`wcm_yy_imageDataRepresentation`、`encodeImage:type:quality:`、`updateSourceWebP`（WebP 支持）

读：`_chain_51-57`、`_chain_73/74/75`（解码帧/混合）

## 4. 插件本体（双列逻辑，全在这）

| 类 | 方法数 | 职责 |
|---|---|---|
| **WCMFeedController** | **25** | 信息流主控制器：start / requestTimelineMore / adjustHeaderSize / customizeHeader / publishPendingFeed / openCacheManager / picker / openVideo |
| WCMInboxController | 2 | 收件箱页 |
| WCMVideoController | 9 | 视频页 |
| WCMVideoComments | 3 | 评论 |
| WCMCommentPresentation / CommentTransition | 各 1 | 评论转场 |
| WCMCacheController | 3 | 缓存管理 |
| WCMAssetHandler | 1 | WebView URLScheme 资源服务 |
| WCMMomentsSettingsController | — | 设置页（表格） |

JS 桥线索（字符串实证）：设置/预览页内嵌 JS，含 `emojiVersion`、`coverVersion`、`dataKey`、`registerControllerWithTitle:version:controller:`——设置页是 WebView 驱动。

读：`_chain_24/28/29/30`（start/adjustHeaderSize/customizeHeader/requestTimelineMore）+ `_chain_83`（JS 桥，1119KB 最大链）+ `_chain_34`（钩子安装总入口）

## 5. 库版本

二进制中未发现三库的显式版本字符串（类名前缀化后未保留 version 宏）——按类结构对照上游：YBImageBrowser 为 2.x 结构（AuxiliaryViewHandler 拆分后）、TOCropViewController 为 2.5+ 结构（AspectRatioPreset 枚举化）、YYImage 为 1.0.x 结构。精确版本需上游 commit 对照，如需我再深挖。
