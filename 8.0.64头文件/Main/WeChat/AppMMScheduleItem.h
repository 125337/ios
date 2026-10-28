@interface AppMMScheduleItem : MMObject <NSCopying>
{
    NSString * _displayName; // +0x8
    NSString * _iconUrl; // +0x10
    ScheduleOPWrap * _scheduleOpWrap; // +0x18
    NSMutableArray * _opItems; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)scheduleOpWrap;
- (void)setScheduleOpWrap:(id)arg1;
- (id)opItems;
- (void)setOpItems:(id)arg1;
- (void).cxx_destruct;
@end
