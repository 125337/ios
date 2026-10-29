@interface WCAdSchemaDoubleLinkInfo : NSObject <NSCoding>
{
    int _doubleLinkWeAppType; // +0x8
    NSString * _doubleLinkH5Url; // +0x10
    NSString * _doubleLinkWeAppUsername; // +0x18
    NSString * _doubleLinkWeAppPath; // +0x20
    WCAdCardBtnInfo * _doubleLinkClickActionInfo; // +0x28
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isH5InfoValid;
- (BOOL)isWeAppInfoValid;
- (BOOL)isValid;
- (id)description;
- (id)doubleLinkH5Url;
- (void)setDoubleLinkH5Url:(id)arg1;
- (id)doubleLinkWeAppUsername;
- (void)setDoubleLinkWeAppUsername:(id)arg1;
- (id)doubleLinkWeAppPath;
- (void)setDoubleLinkWeAppPath:(id)arg1;
- (int)doubleLinkWeAppType;
- (void)setDoubleLinkWeAppType:(int)arg1;
- (id)doubleLinkClickActionInfo;
- (void)setDoubleLinkClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end

