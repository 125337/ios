@interface WAReportCacheDetailItem : WAReportBaseItem
{
    unsigned int _countedWeAppNum; // +0x8
    unsigned int _top1AppidAppServiceType; // +0xc
    unsigned int _top2AppidAppServiceType; // +0x10
    unsigned int _top3AppidAppServiceType; // +0x14
    unsigned int _top4AppidAppServiceType; // +0x18
    unsigned int _top5AppidAppServiceType; // +0x1c
    unsigned int _top6AppidAppServiceType; // +0x20
    unsigned int _top7AppidAppServiceType; // +0x24
    unsigned int _top8AppidAppServiceType; // +0x28
    unsigned long long _weAppAllCacheSizeInBytes; // +0x30
    NSString * _top1Appid; // +0x38
    unsigned long long _top1AppidCacheSizeInBytes; // +0x40
    NSString * _top1NickName; // +0x48
    NSString * _top2Appid; // +0x50
    unsigned long long _top2AppidCacheSizeInBytes; // +0x58
    NSString * _top2NickName; // +0x60
    NSString * _top3Appid; // +0x68
    unsigned long long _top3AppidCacheSizeInBytes; // +0x70
    NSString * _top3NickName; // +0x78
    NSString * _top4Appid; // +0x80
    unsigned long long _top4AppidCacheSizeInBytes; // +0x88
    NSString * _top4NickName; // +0x90
    NSString * _top5Appid; // +0x98
    unsigned long long _top5AppidCacheSizeInBytes; // +0xa0
    NSString * _top5NickName; // +0xa8
    NSString * _top6Appid; // +0xb0
    unsigned long long _top6AppidCacheSizeInBytes; // +0xb8
    NSString * _top6NickName; // +0xc0
    NSString * _top7Appid; // +0xc8
    unsigned long long _top7AppidCacheSizeInBytes; // +0xd0
    NSString * _top7NickName; // +0xd8
    NSString * _top8Appid; // +0xe0
    unsigned long long _top8AppidCacheSizeInBytes; // +0xe8
    NSString * _top8NickName; // +0xf0
    unsigned long long _restWeAppAllCacheSizeInBytes; // +0xf8
    unsigned long long _publicDataSizeInBytes; // +0x100
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned long long)weAppAllCacheSizeInBytes;
- (void)setWeAppAllCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned int)countedWeAppNum;
- (void)setCountedWeAppNum:(unsigned int)arg1;
- (id)top1Appid;
- (void)setTop1Appid:(id)arg1;
- (unsigned long long)top1AppidCacheSizeInBytes;
- (void)setTop1AppidCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned int)top1AppidAppServiceType;
- (void)setTop1AppidAppServiceType:(unsigned int)arg1;
- (id)top1NickName;
- (void)setTop1NickName:(id)arg1;
- (id)top2Appid;
- (void)setTop2Appid:(id)arg1;
- (unsigned long long)top2AppidCacheSizeInBytes;
- (void)setTop2AppidCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned int)top2AppidAppServiceType;
- (void)setTop2AppidAppServiceType:(unsigned int)arg1;
- (id)top2NickName;
- (void)setTop2NickName:(id)arg1;
- (id)top3Appid;
- (void)setTop3Appid:(id)arg1;
- (unsigned long long)top3AppidCacheSizeInBytes;
- (void)setTop3AppidCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned int)top3AppidAppServiceType;
- (void)setTop3AppidAppServiceType:(unsigned int)arg1;
- (id)top3NickName;
- (void)setTop3NickName:(id)arg1;
- (id)top4Appid;
- (void)setTop4Appid:(id)arg1;
- (unsigned long long)top4AppidCacheSizeInBytes;
- (void)setTop4AppidCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned int)top4AppidAppServiceType;
- (void)setTop4AppidAppServiceType:(unsigned int)arg1;
- (id)top4NickName;
- (void)setTop4NickName:(id)arg1;
- (id)top5Appid;
- (void)setTop5Appid:(id)arg1;
- (unsigned long long)top5AppidCacheSizeInBytes;
- (void)setTop5AppidCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned int)top5AppidAppServiceType;
- (void)setTop5AppidAppServiceType:(unsigned int)arg1;
- (id)top5NickName;
- (void)setTop5NickName:(id)arg1;
- (id)top6Appid;
- (void)setTop6Appid:(id)arg1;
- (unsigned long long)top6AppidCacheSizeInBytes;
- (void)setTop6AppidCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned int)top6AppidAppServiceType;
- (void)setTop6AppidAppServiceType:(unsigned int)arg1;
- (id)top6NickName;
- (void)setTop6NickName:(id)arg1;
- (id)top7Appid;
- (void)setTop7Appid:(id)arg1;
- (unsigned long long)top7AppidCacheSizeInBytes;
- (void)setTop7AppidCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned int)top7AppidAppServiceType;
- (void)setTop7AppidAppServiceType:(unsigned int)arg1;
- (id)top7NickName;
- (void)setTop7NickName:(id)arg1;
- (id)top8Appid;
- (void)setTop8Appid:(id)arg1;
- (unsigned long long)top8AppidCacheSizeInBytes;
- (void)setTop8AppidCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned int)top8AppidAppServiceType;
- (void)setTop8AppidAppServiceType:(unsigned int)arg1;
- (id)top8NickName;
- (void)setTop8NickName:(id)arg1;
- (unsigned long long)restWeAppAllCacheSizeInBytes;
- (void)setRestWeAppAllCacheSizeInBytes:(unsigned long long)arg1;
- (unsigned long long)publicDataSizeInBytes;
- (void)setPublicDataSizeInBytes:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
