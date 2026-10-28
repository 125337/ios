@interface EcsWAAppMessageModel : NSObject
{
    BOOL _disableForward; // +0x8
    unsigned int _sourceVersion; // +0xc
    unsigned int _sourceAppServiceType; // +0x10
    unsigned int _sourceBrandOfficialFlag; // +0x14
    unsigned int _sourceRelievedBuyFlag; // +0x18
    unsigned int _sourceFlagshipFlag; // +0x1c
    unsigned int _bizType; // +0x20
    NSString * _sourceAppID; // +0x28
    NSString * _sourceAppName; // +0x30
    NSString * _sourceUsername; // +0x38
    NSString * _sourceBrandIconUrl; // +0x40
    NSString * _title; // +0x48
    NSString * _desc; // +0x50
    NSString * _imageUrl; // +0x58
    NSString * _path; // +0x60
    NSString * _bizSourceName; // +0x68
    NSString * _bizSourceIconUrl; // +0x70
    EcsInfoItem * _ecsInfo; // +0x78
}
- (id)genAppMsgItem;
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (id)sourceAppID;
- (void)setSourceAppID:(id)arg1;
- (id)sourceAppName;
- (void)setSourceAppName:(id)arg1;
- (id)sourceUsername;
- (void)setSourceUsername:(id)arg1;
- (unsigned int)sourceVersion;
- (void)setSourceVersion:(unsigned int)arg1;
- (id)sourceBrandIconUrl;
- (void)setSourceBrandIconUrl:(id)arg1;
- (unsigned int)sourceAppServiceType;
- (void)setSourceAppServiceType:(unsigned int)arg1;
- (unsigned int)sourceBrandOfficialFlag;
- (void)setSourceBrandOfficialFlag:(unsigned int)arg1;
- (unsigned int)sourceRelievedBuyFlag;
- (void)setSourceRelievedBuyFlag:(unsigned int)arg1;
- (unsigned int)sourceFlagshipFlag;
- (void)setSourceFlagshipFlag:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (unsigned int)bizType;
- (void)setBizType:(unsigned int)arg1;
- (id)bizSourceName;
- (void)setBizSourceName:(id)arg1;
- (id)bizSourceIconUrl;
- (void)setBizSourceIconUrl:(id)arg1;
- (id)ecsInfo;
- (void)setEcsInfo:(id)arg1;
- (void).cxx_destruct;
@end
