@interface WASubscriptionMessageSettingsViewItem : MMObject
{
    BOOL _selected; // +0x8
    int _templateType; // +0xc
    NSString * _wording; // +0x10
    NSString * _templateID; // +0x18
    NSArray * _detailItems; // +0x20
    SubscribeMsgItem * _originMsgItem; // +0x28
}
- (id)initWith:(id)arg1;
- (void)fillWithMsgItem:(id)arg1;
- (id)generateDetailItems:(id)arg1;
- (BOOL)itemDataChanged;
- (id)toMsgItem;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (int)templateType;
- (void)setTemplateType:(int)arg1;
- (id)detailItems;
- (void)setDetailItems:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (id)originMsgItem;
- (void)setOriginMsgItem:(id)arg1;
- (void).cxx_destruct;
@end

