//
//  MioImageVault.m
//  MioPlugin
//

#import "MioImageVault.h"
#import <Security/Security.h>

// Keychain 服务名；条目按 account（功能 key）区分
static NSString * const kVaultService = @"com.mio.imagevault";

static NSString *VaultDocsDir(NSString *dirName) {
    NSString *docs = [NSSearchPathForDirectoriesInDomains(
        NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    return [docs stringByAppendingPathComponent:dirName];
}

@implementation MioImageVault

#pragma mark - Keychain（generic password，ARC __bridge）

+ (BOOL)kcSave:(NSData *)data key:(NSString *)key {
    NSDictionary *query = @{
        (__bridge id)kSecClass: (__bridge id)kSecClassGenericPassword,
        (__bridge id)kSecAttrService: kVaultService,
        (__bridge id)kSecAttrAccount: key,
    };
    SecItemDelete((__bridge CFDictionaryRef)query);   // 覆盖旧条目
    NSDictionary *add = @{
        (__bridge id)kSecClass: (__bridge id)kSecClassGenericPassword,
        (__bridge id)kSecAttrService: kVaultService,
        (__bridge id)kSecAttrAccount: key,
        (__bridge id)kSecValueData: data,
        (__bridge id)kSecAttrAccessible: (__bridge id)kSecAttrAccessibleAfterFirstUnlock,
    };
    return SecItemAdd((__bridge CFDictionaryRef)add, NULL) == errSecSuccess;
}

+ (NSData *)kcLoad:(NSString *)key {
    NSDictionary *query = @{
        (__bridge id)kSecClass: (__bridge id)kSecClassGenericPassword,
        (__bridge id)kSecAttrService: kVaultService,
        (__bridge id)kSecAttrAccount: key,
        (__bridge id)kSecReturnData: @YES,
        (__bridge id)kSecMatchLimit: (__bridge id)kSecMatchLimitOne,
    };
    CFTypeRef out = NULL;
    OSStatus st = SecItemCopyMatching((__bridge CFDictionaryRef)query, &out);
    if (st != errSecSuccess || !out) return nil;
    return (__bridge_transfer NSData *)out;
}

+ (void)kcDelete:(NSString *)key {
    NSDictionary *query = @{
        (__bridge id)kSecClass: (__bridge id)kSecClassGenericPassword,
        (__bridge id)kSecAttrService: kVaultService,
        (__bridge id)kSecAttrAccount: key,
    };
    SecItemDelete((__bridge CFDictionaryRef)query);
}

#pragma mark - 对外

+ (BOOL)storeData:(NSData *)data
           dirName:(NSString *)dirName
          fileName:(NSString *)fileName
               key:(NSString *)key {
    if (data.length == 0 || fileName.length == 0 || key.length == 0) return NO;
    NSString *dir = VaultDocsDir(dirName);
    [[NSFileManager defaultManager] createDirectoryAtPath:dir
                              withIntermediateDirectories:YES attributes:nil error:nil];
    BOOL fileOk = [data writeToFile:[dir stringByAppendingPathComponent:fileName]
                        atomically:YES];
    BOOL kcOk = [self kcSave:data key:key];
    return fileOk || kcOk;
}

+ (NSString *)restorePathForDirName:(NSString *)dirName
                           fileName:(NSString *)fileName
                                key:(NSString *)key {
    NSString *dir = VaultDocsDir(dirName);
    NSString *path = [dir stringByAppendingPathComponent:fileName];
    NSFileManager *fm = [NSFileManager defaultManager];
    if ([fm fileExistsAtPath:path]) return path;
    // 文件被清（重签覆盖安装实测丢 Documents 图片）：Keychain 恢复写回
    if (key.length == 0) return nil;
    NSData *data = [self kcLoad:key];
    if (data.length == 0) return nil;
    [fm createDirectoryAtPath:dir withIntermediateDirectories:YES attributes:nil error:nil];
    if (![data writeToFile:path atomically:YES]) return nil;
    return path;
}

+ (BOOL)hasDataForDirName:(NSString *)dirName
                 fileName:(NSString *)fileName
                      key:(NSString *)key {
    NSString *dir = VaultDocsDir(dirName);
    if ([[NSFileManager defaultManager] fileExistsAtPath:
            [dir stringByAppendingPathComponent:fileName]]) return YES;
    return key.length > 0 && [self kcLoad:key].length > 0;
}

+ (void)removeForDirName:(NSString *)dirName
                fileName:(NSString *)fileName
                     key:(NSString *)key {
    [[NSFileManager defaultManager] removeItemAtPath:
        [[VaultDocsDir(dirName)] stringByAppendingPathComponent:fileName] error:nil];
    if (key.length > 0) [self kcDelete:key];
}

@end
