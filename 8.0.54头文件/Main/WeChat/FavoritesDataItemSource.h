@interface FavoritesDataItemSource : FavoritesModel
{
    int _sourceType; // +0x8
    NSString * _sourceId; // +0x10
    NSString * _fromUsr; // +0x18
    NSString * _toUsr; // +0x20
    NSString * _realChatName; // +0x28
    NSString * _hashUserName; // +0x30
    NSString * _appId; // +0x38
    NSString * _brandId; // +0x40
    NSString * _link; // +0x48
}
+ (id)xmlAttributePropertylistForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (id)fromUsr;
- (void)setFromUsr:(id)arg1;
- (id)toUsr;
- (void)setToUsr:(id)arg1;
- (id)realChatName;
- (void)setRealChatName:(id)arg1;
- (id)hashUserName;
- (void)setHashUserName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)brandId;
- (void)setBrandId:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (void).cxx_destruct;
@end

