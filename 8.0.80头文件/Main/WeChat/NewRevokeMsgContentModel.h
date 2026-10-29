@interface NewRevokeMsgContentModel : NSObject
{
    NSString * _type; // +0x8
    NewRevokeMsgRevokeContentModel * _revokemsgcontent; // +0x10
    NewRevokeMsgExtCommontInfoModel * _extcommoninfo; // +0x18
}
+ (id)xmlAttributePropertylistForConfigTag:(id)arg1;
- (id)init;
- (id)type;
- (void)setType:(id)arg1;
- (id)revokemsgcontent;
- (void)setRevokemsgcontent:(id)arg1;
- (id)extcommoninfo;
- (void)setExtcommoninfo:(id)arg1;
- (void).cxx_destruct;
@end
