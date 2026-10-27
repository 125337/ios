#import <Foundation/Foundation.h>

// 字体美化 · WebView 层：公众号文章/搜一搜等 H5 页面走 WKWebView 渲染，
// 不经过 UIFont，需要注入 @font-face + 自定义 scheme 喂字体文件
@interface FontBeautifyWebView : NSObject
+ (void)install;
@end
