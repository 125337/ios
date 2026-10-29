@interface WCPayLqbShowInfo : NSObject <NSCoding>
{
    BOOL _isShowlqbEntry; // +0x8
    BOOL _isOpenlqb; // +0x9
    NSString * _lqbOpenUrl; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isShowlqbEntry;
- (void)setIsShowlqbEntry:(BOOL)arg1;
- (BOOL)isOpenlqb;
- (void)setIsOpenlqb:(BOOL)arg1;
- (id)lqbOpenUrl;
- (void)setLqbOpenUrl:(id)arg1;
- (void).cxx_destruct;
@end

