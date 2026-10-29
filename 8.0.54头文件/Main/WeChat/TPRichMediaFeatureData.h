@interface TPRichMediaFeatureData : NSObject
{
    NSString * _featureType; // +0x8
    NSString * _env; // +0x10
    NSString * _version; // +0x18
    NSArray * _featureContents; // +0x20
}
- (id)featureType;
- (void)setFeatureType:(id)arg1;
- (id)env;
- (void)setEnv:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)featureContents;
- (void)setFeatureContents:(id)arg1;
- (void).cxx_destruct;
@end

