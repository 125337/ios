@interface WCStackFeatPool : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary * _stackFeatDict; // +0x8
    double _featStackTime; // +0x10
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)addStackFeat:(unsigned long long)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)stackFeatDict;
- (void)setStackFeatDict:(id)arg1;
- (double)featStackTime;
- (void)setFeatStackTime:(double)arg1;
- (void).cxx_destruct;
@end
