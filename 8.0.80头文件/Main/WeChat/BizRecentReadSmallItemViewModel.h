@interface BizRecentReadSmallItemViewModel : BizRecentReadBaseViewModel
{
    unsigned int _appMsgId; // +0x8
    unsigned int _itemId; // +0xc
    long long _type; // +0x10
    NSString * _nickname; // +0x18
    NSString * _coverUrl; // +0x20
    NSString * _contentUrl; // +0x28
    NSString * _bizUin; // +0x30
}
- (void)updateViewModel:(id)arg1;
- (id)identifier;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (id)bizUin;
- (void)setBizUin:(id)arg1;
- (unsigned int)appMsgId;
- (void)setAppMsgId:(unsigned int)arg1;
- (unsigned int)itemId;
- (void)setItemId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
