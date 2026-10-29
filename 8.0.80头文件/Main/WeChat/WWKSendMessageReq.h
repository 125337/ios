@interface WWKSendMessageReq : WWKBaseReq <WWKApiSerializable>
{
    WWKMessageAttachment * _attachment; // +0x20
}
- (id)serializedDict;
- (BOOL)deserializeWithDictionary:(id)arg1;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (void).cxx_destruct;
@end
