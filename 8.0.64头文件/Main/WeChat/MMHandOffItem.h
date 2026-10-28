@interface MMHandOffItem : MMObject <NSCopying>
{
    unsigned int _receiveSeqNum; // +0x8
    MMHandOffAttributes * __XMLAttributes; // +0x10
    long long _handofftype; // +0x18
    NSString * _title; // +0x20
    NSString * _displaySourceName; // +0x28
    long long _opCode; // +0x30
}
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)initWith:(long long)arg1;
- (id)getXML;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initFromMinimizeTaskData:(id)arg1;
- (id)_XMLAttributes;
- (void)set_XMLAttributes:(id)arg1;
- (long long)handofftype;
- (void)setHandofftype:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)displaySourceName;
- (void)setDisplaySourceName:(id)arg1;
- (long long)opCode;
- (void)setOpCode:(long long)arg1;
- (unsigned int)receiveSeqNum;
- (void)setReceiveSeqNum:(unsigned int)arg1;
- (void).cxx_destruct;
@end
