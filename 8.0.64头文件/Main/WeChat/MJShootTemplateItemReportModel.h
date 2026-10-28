@interface MJShootTemplateItemReportModel : NSObject
{
    unsigned long long _tabID; // +0x8
    unsigned long long _position; // +0x10
    MMCameraTemplateItem * _templateItem; // +0x18
}
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)tabID;
- (void)setTabID:(unsigned long long)arg1;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg1;
- (id)templateItem;
- (void)setTemplateItem:(id)arg1;
- (void).cxx_destruct;
@end
