@interface MMEasterEggNativeWeAppActivityInfo : MMEasterEggBaseActivityInfo
{
    NSString * _weAppUsername; // +0x8
}
+ (id)activityNodeName;
- (Class)activityClass;
- (id)accessibilityLabel;
- (id)description;
- (id)initWithActivityNode:(XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (void)tryParseWeAppUsernameFromActivityNode:(XmlReaderNode_t *)arg1;
- (BOOL)isValid;
- (id)weAppUsername;
- (void)setWeAppUsername:(id)arg1;
- (void).cxx_destruct;
@end
