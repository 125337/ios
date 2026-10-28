@interface MJAssetDraftModel : NSObject <PBCoding>
{
    BOOL _isNeedOrigin; // +0x8
    unsigned long long _type; // +0x10
    NSString * _localIdentifier; // +0x18
    NSString * _relativeFilePath; // +0x20
    long long _mediaType; // +0x28
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_localIdentifier;
+ (void)PBArrayAdd_relativeFilePath;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_isNeedOrigin;
+ (void)initialize;
+ (id)modelWithAssetInfo:(id)arg1;
+ (id)modelWithMMPHAsset:(id)arg1;
- (id)getPBPropertyTable;
- (id)absoluteFilePath;
- (id)toMJAssetInfo;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)localIdentifier;
- (void)setLocalIdentifier:(id)arg1;
- (id)relativeFilePath;
- (void)setRelativeFilePath:(id)arg1;
- (long long)mediaType;
- (void)setMediaType:(long long)arg1;
- (BOOL)isNeedOrigin;
- (void)setIsNeedOrigin:(BOOL)arg1;
- (void).cxx_destruct;
@end
