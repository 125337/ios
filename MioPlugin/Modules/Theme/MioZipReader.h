//
//  MioZipReader.h
//  MioPlugin
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 自研轻量 zip 解压器（主题导入兜底）：不依赖微信私有类。
// 支持：store(0)/deflate(8) 两种压缩方式；自动跳过 __MACOSX/.DS_Store/目录项；
//      防路径穿越（.. 与绝对路径组件）；libz 经 dlsym 加载（进程内必有，无需链接 -lz）。
// 限制：不支持加密 zip / zip64（主题包场景不需要）。
@interface MioZipReader : NSObject

+ (BOOL)unzipFileAtPath:(NSString *)zipPath
          toDestination:(NSString *)destPath
                errText:(NSString **)errText;

@end

NS_ASSUME_NONNULL_END
