@interface MPPagePageUrlInfo : MMObject
{
    BOOL _isPaySubscribe; // +0x8
    unsigned int _itemShowType; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _commentTopicId; // +0x14
    NSString * _url; // +0x18
    NSString * _pageIdentifier; // +0x20
    NSString * _title; // +0x28
}
- (id)urlInfoIdentifier;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (BOOL)isPaySubscribe;
- (void)setIsPaySubscribe:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned int)commentTopicId;
- (void)setCommentTopicId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
