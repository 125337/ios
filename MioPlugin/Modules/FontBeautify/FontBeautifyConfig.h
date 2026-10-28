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
// 字体文件名（只存文件名不存路径：容器 UUID 迁移后绝对路径会失效，
// 运行时统一按 Library/MioFonts/<文件名> 解析）
@property (nonatomic, copy) NSString *fontBeautifyFileName;

+ (instancetype)shared;

/// 字体统一落盘目录：Library/MioFonts（目录不存在则创建）
+ (NSString *)mioFontsDir;
/// 当前启用字体的完整路径：fontBeautifyFileName 非空且文件存在时返回路径，否则返回 nil
- (NSString *)resolvedActiveFontPath;

/// 字体文件字节备份进 NSUserDefaults（幸存区：重签覆盖安装清沙盒文件但不清 UserDefaults）。
/// 沙盒文件丢失时由 restoreMissingFontFiles 自动恢复，实现"导入一次一直生效"
+ (void)backupFontFile:(NSString *)fileName;
/// 删除字体时同步清掉对应备份
+ (void)removeFontBackup:(NSString *)fileName;
/// 启动时调用：扫描所有备份，把沙盒里已丢失的字体文件恢复写回；返回恢复个数
+ (NSInteger)restoreMissingFontFiles;

@end

NS_ASSUME_NONNULL_END
