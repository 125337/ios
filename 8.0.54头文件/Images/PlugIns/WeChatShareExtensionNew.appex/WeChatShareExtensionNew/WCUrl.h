@interface WCUrl : NSObject <NSCoding>
{
    NSString * url; // +0x8
    int type; // +0x10
}
+ (id)UrlWithUrl:(id)arg1 type:(int)arg2;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (void).cxx_destruct;
@end

