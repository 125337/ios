@interface YYTextAttachment : NSObject <NSCoding, NSCopying>
{
    id _content; // +0x8
    long long _contentMode; // +0x10
    NSDictionary * _userInfo; // +0x18
    UIEdgeInsets _contentInsets; // +0x20
}
+ (id)attachmentWithContent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (long long)contentMode;
- (void)setContentMode:(long long)arg1;
- (UIEdgeInsets)contentInsets;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
