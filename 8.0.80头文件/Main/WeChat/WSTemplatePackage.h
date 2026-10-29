@interface WSTemplatePackage : NSObject
{
    NSString * _folderPath; // +0x8
    NSString * _htmlPath; // +0x10
    NSDictionary * _md5map; // +0x18
    NSDictionary * _customDataDic; // +0x20
    NSDictionary * _configDic; // +0x28
    NSString * _pakageName; // +0x30
    NSDictionary * _sha1Map; // +0x38
}
+ (id)makeDictionaryFromFileInPath:(id)arg1;
+ (unsigned long long)verifyTemplateContentStatusForPath:(id)arg1 bizType:(unsigned long long)arg2;
+ (BOOL)verifyMD5ForTemplateFiles:(id)arg1 withMD5Map:(id)arg2 bizType:(unsigned long long)arg3;
+ (BOOL)VerifySHA1ForFiles:(id)arg1 withSHA1Map:(id)arg2 bizType:(unsigned long long)arg3;
+ (id)VerifyTextForBizType:(unsigned long long)arg1;
+ (BOOL)MustCheckFileDigest:(unsigned long long)arg1;
- (id)initWithPackagePath:(id)arg1 packageName:(id)arg2;
- (void)reloadConfig;
- (void)removeFile;
- (BOOL)isValid;
- (BOOL)fileExist;
- (unsigned int)version;
- (id)md5map;
- (id)sha1Map;
- (id)description;
- (id)folderPath;
- (void)setFolderPath:(id)arg1;
- (id)htmlPath;
- (void)setMd5map:(id)arg1;
- (id)customDataDic;
- (void)setCustomDataDic:(id)arg1;
- (id)configDic;
- (void)setConfigDic:(id)arg1;
- (id)pakageName;
- (void)setPakageName:(id)arg1;
- (void)setSha1Map:(id)arg1;
- (void).cxx_destruct;
@end
