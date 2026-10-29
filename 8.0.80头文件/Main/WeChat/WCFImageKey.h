@interface WCFImageKey : NSObject <NSCopying>
{
    NSString * _path; // +0x8
    long long _type; // +0x10
    NSString * _hashKey; // +0x18
    NSString * _uri; // +0x20
}
- (id)initWithType:(long long)arg1 key:(id)arg2 uri:(id)arg3;
- (id)path;
- (id)savedPath;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)type;
- (id)hashKey;
- (id)uri;
- (void).cxx_destruct;
@end
