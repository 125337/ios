@interface OMJTemplateMetadata : NSObject
{
    NSString * _identifier; // +0x8
    unsigned long long _descVersion; // +0x10
    NSString * _descDownloadURL; // +0x18
    unsigned long long _minimumiOSSDKVersion; // +0x20
    unsigned long long _minimumAndroidSDKVersion; // +0x28
    NSString * _aiModelType; // +0x30
}
+ (id)metaDataWithMJTemplate:(id)arg1;
+ (id)metaDataWithOMJTemplate:(id)arg1;
- (id)initWithIdentifier:(id)arg1 descVersion:(unsigned long long)arg2 descDownloadURL:(id)arg3 minimumiOSSDKVersion:(unsigned long long)arg4 minimumAndroidSDKVersion:(unsigned long long)arg5 aiModelType:(id)arg6;
- (id)initWithIdentifier:(id)arg1 descVersion:(unsigned long long)arg2 descDownloadURL:(id)arg3 minimumiOSSDKVersion:(unsigned long long)arg4 minimumAndroidSDKVersion:(unsigned long long)arg5;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)identifier;
- (unsigned long long)descVersion;
- (id)descDownloadURL;
- (unsigned long long)minimumiOSSDKVersion;
- (unsigned long long)minimumAndroidSDKVersion;
- (id)aiModelType;
- (void).cxx_destruct;
@end

