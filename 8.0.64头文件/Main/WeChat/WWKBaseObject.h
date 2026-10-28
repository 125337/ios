@interface WWKBaseObject : NSObject
{
    NSString * _bundleID; // +0x8
    NSString * _bundleName; // +0x10
    unsigned long long _sequence; // +0x18
}
+ (id)deserializeWithData:(id)arg1;
- (id)init;
- (id)serializedData;
- (id)serializedDict;
- (BOOL)deserializeWithDictionary:(id)arg1;
- (id)bundleID;
- (void)setBundleID:(id)arg1;
- (id)bundleName;
- (void)setBundleName:(id)arg1;
- (unsigned long long)sequence;
- (void)setSequence:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
