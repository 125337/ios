@interface WCMomentsTemplateShareInfo : NSObject
{
    long long _shareSource; // +0x8
    NSString * _itemID; // +0x10
    WCMomentsTemplateInfo * _templateInfo; // +0x18
    NSString * _extInfo; // +0x20
    NSString * _title; // +0x28
}
- (long long)shareSource;
- (void)setShareSource:(long long)arg1;
- (id)itemID;
- (void)setItemID:(id)arg1;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

