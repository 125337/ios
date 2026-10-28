@interface FavReferMsgItem : FavoritesModel
{
    unsigned int _type; // +0x8
    long long _svrId; // +0x10
    NSString * _displayName; // +0x18
    NSString * _referDesc; // +0x20
    NSString * _content; // +0x28
}
- (id)toMsgWrap;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (long long)svrId;
- (void)setSvrId:(long long)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)referDesc;
- (void)setReferDesc:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
