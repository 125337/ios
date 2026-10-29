@interface turing_QF9agPbeIjbkg6ggcbkm_YOUTU108138v208018 : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _channel; // +0x8
    unsigned long long _buildNumber; // +0x10
    NSString * _version; // +0x18
    NSString * _lc; // +0x20
    NSString * _metaData; // +0x28
    NSDictionary * _parameters; // +0x30
}
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (unsigned long long)buildNumber;
- (void)setBuildNumber:(unsigned long long)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)lc;
- (void)setLc:(id)arg1;
- (id)metaData;
- (void)setMetaData:(id)arg1;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (void).cxx_destruct;
@end
