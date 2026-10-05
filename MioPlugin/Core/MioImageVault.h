//
//  MioImageVault.h
//  MioPlugin
//
//  图片保险库 —— 沙盒文件 + Keychain 双存储。
//
//  背景：实测重签覆盖安装后 Documents 里的图片会丢（NSUserDefaults 配置却在），
//  各图片功能都要重新上传。Keychain 条目在同一签名账号（team id 不变）下
//  卸载重装后仍保留，读取时文件丢了自动从 Keychain 恢复写回，用户无感。
//
//  约定：每个功能的图片用唯一的 key（如 HomeCardLight），dirName/fileName
//  维持各功能原有沙盒布局，老用户已上传的文件无需迁移。
//

#import <Foundation/Foundation.h>

@interface MioImageVault : NSObject

// 写入：写 Documents/<dirName>/<fileName> + Keychain 备份；任一成功即返回 YES
+ (BOOL)storeData:(NSData *)data
           dirName:(NSString *)dirName
          fileName:(NSString *)fileName
               key:(NSString *)key;

// 读取：文件存在直接返回路径；文件丢 → Keychain 恢复写回再返回；两侧都无 → nil
+ (NSString *)restorePathForDirName:(NSString *)dirName
                           fileName:(NSString *)fileName
                                key:(NSString *)key;

// 是否有图（文件或 Keychain 任一存在）
+ (BOOL)hasDataForDirName:(NSString *)dirName
                 fileName:(NSString *)fileName
                      key:(NSString *)key;

// 删除：文件 + Keychain 条目
+ (void)removeForDirName:(NSString *)dirName
                fileName:(NSString *)fileName
                     key:(NSString *)key;

@end
