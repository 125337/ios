@interface MMLiveCommentItemDisplayResult : NSObject
{
    NSString * _displayName; // +0x8
    NSString * _displayContent; // +0x10
    NSString * _originName; // +0x18
    NSString * _nameSuffix1; // +0x20
    NSString * _nameSuffix2; // +0x28
}
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)displayContent;
- (void)setDisplayContent:(id)arg1;
- (id)originName;
- (void)setOriginName:(id)arg1;
- (id)nameSuffix1;
- (void)setNameSuffix1:(id)arg1;
- (id)nameSuffix2;
- (void)setNameSuffix2:(id)arg1;
- (void).cxx_destruct;
@end
