@interface WCAdPushMessageItem : NSObject <WCAdParserProtocol>
{
    long long _actionType; // +0x8
    WCAdPushDeleteAdInfo * _deleteAdInfo; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (long long)actionType;
- (void)setActionType:(long long)arg1;
- (id)deleteAdInfo;
- (void)setDeleteAdInfo:(id)arg1;
- (void).cxx_destruct;
@end

