#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

// 字体美化配置：全局字体替换（hook UIFont 工厂方法 + CascadeList 苹方回退）
@interface FontBeautifyConfig : NSObject <ConfigModule>

// 总开关
@property (nonatomic, assign) BOOL enableFontBeautify;
// 导入字体的字族名（CTFontDescriptor kCTFontFamilyNameAttribute）
@property (nonatomic, copy) NSString *fontBeautifyFamilyName;
// PostScript 名（kCTFontNameAttribute，预留）
@property (nonatomic, copy) NSString *fontBeautifyPostScriptName;
// 字体文件在沙盒内的落盘路径（重启后按此路径重新注册进进程字体表）
@property (nonatomic, copy) NSString *fontBeautifyFilePath;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
