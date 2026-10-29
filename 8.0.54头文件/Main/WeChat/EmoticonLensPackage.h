@interface EmoticonLensPackage : NSObject
{
    NSString * _packagePath; // +0x8
    EmoticonLensPackageConfig * _config; // +0x10
    NSArray * _lensItems; // +0x18
}
+ (id)unpackLensPackage:(id)arg1 toTargetDir:(id)arg2;
- (id)initWithPackageDir:(id)arg1;
- (void)applyToEffectManager:(id)arg1;
- (void)setAutoAdjust:(BOOL)arg1;
- (BOOL)hasSegment;
- (long long)actionType;
- (id)actionTypes;
- (id)subtitle;
- (id)subtitleColor;
- (id)strokeColor;
- (long long)previewSize;
- (id)initWithConfig:(id)arg1 lensItems:(id)arg2;
- (id)packagePath;
- (void)setPackagePath:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)lensItems;
- (void)setLensItems:(id)arg1;
- (void).cxx_destruct;
@end

