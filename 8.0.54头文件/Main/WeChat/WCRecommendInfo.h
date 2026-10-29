@interface WCRecommendInfo : NSObject <NSCoding>
{
    int recommendType; // +0x8
    int source; // +0xc
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)recommendType;
- (void)setRecommendType:(int)arg1;
- (int)source;
- (void)setSource:(int)arg1;
@end

