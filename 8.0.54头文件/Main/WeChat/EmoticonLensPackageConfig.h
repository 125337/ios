@interface EmoticonLensPackageConfig : NSObject <YYModel>
{
    double _version; // +0x8
    long long _previewType; // +0x10
    NSString * _subtitle; // +0x18
    UIColor * _subtitleColor; // +0x20
    UIColor * _strokeColor; // +0x28
    NSArray * _paramsList; // +0x30
    NSDictionary * _params; // +0x38
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (double)version;
- (void)setVersion:(double)arg1;
- (long long)previewType;
- (void)setPreviewType:(long long)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)subtitleColor;
- (void)setSubtitleColor:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (id)paramsList;
- (void)setParamsList:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

