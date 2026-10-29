@interface WCMomentsTemplateInfo : NSObject <NSCoding, PBCoding, NSCopying>
{
    NSString * _type; // +0x8
    NSString * _subtype; // +0x10
    NSString * _templateID; // +0x18
    NSString * _musicID; // +0x20
    NSString * _AIModelType; // +0x28
    NSString * _templateIndex; // +0x30
    NSString * _iOSSDKVersionMin; // +0x38
    NSString * _AndroidSDKVersionMin; // +0x40
    unsigned long long _minimumAssetCount; // +0x48
    unsigned long long _maximumAssetCount; // +0x50
}
+ (id)templateInfoWithOMJTemplateInfo:(id)arg1 OMJMusicInfo:(id)arg2 templateType:(unsigned long long)arg3;
+ (id)templateInfoWithOMJTemplateInfo:(id)arg1 musicID:(id)arg2 templateType:(unsigned long long)arg3;
+ (id)templateInfoWithMJVideoTemplate:(id)arg1 musicID:(id)arg2;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_templateID;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_iOSSDKVersionMin;
+ (void)PBArrayAdd_AndroidSDKVersionMin;
+ (void)PBArrayAdd_subtype;
+ (void)PBArrayAdd_AIModelType;
+ (void)PBArrayAdd_minimumAssetCount;
+ (void)PBArrayAdd_maximumAssetCount;
+ (void)initialize;
- (BOOL)isTemplateFromMiaoJian;
- (unsigned long long)mjTemplateType;
- (void)setMjTemplateType:(unsigned long long)arg1;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)subtype;
- (void)setSubtype:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)musicID;
- (void)setMusicID:(id)arg1;
- (id)AIModelType;
- (void)setAIModelType:(id)arg1;
- (id)templateIndex;
- (void)setTemplateIndex:(id)arg1;
- (id)iOSSDKVersionMin;
- (void)setIOSSDKVersionMin:(id)arg1;
- (id)AndroidSDKVersionMin;
- (void)setAndroidSDKVersionMin:(id)arg1;
- (unsigned long long)minimumAssetCount;
- (void)setMinimumAssetCount:(unsigned long long)arg1;
- (unsigned long long)maximumAssetCount;
- (void)setMaximumAssetCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

