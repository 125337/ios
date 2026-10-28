@interface OMJClipBundleInfo : NSObject
{
    NSString * _bundleID; // +0x8
    unsigned long long _bundleSize; // +0x10
}
- (id)initWithBundleID:(id)arg1 bundleSize:(unsigned long long)arg2;
- (id)bundleID;
- (unsigned long long)bundleSize;
- (void).cxx_destruct;
@end
