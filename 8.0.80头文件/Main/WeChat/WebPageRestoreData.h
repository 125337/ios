@interface WebPageRestoreData : NSObject <NSCoding, NSSecureCoding>
{
    unsigned int _itemShowType; // +0x8
    NSString * _url; // +0x10
    NSMutableDictionary * _extraInfo; // +0x18
}
+ (BOOL)supportsSecureCoding;
+ (id)allowedSecureDecodingClasses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
