@interface WCAdRollInfo : NSObject <NSCoding>
{
    NSString * _iconUrl; // +0x8
    NSArray * _textList; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)textList;
- (void)setTextList:(id)arg1;
- (void).cxx_destruct;
@end

