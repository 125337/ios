@interface ShareMsgObj : NSObject
{
    unsigned int _createtime; // +0x8
    long long _svrid; // +0x10
    long long _newsvrid; // +0x18
}
+ (id)genShareMsgObjWithMsgWrap:(id)arg1;
+ (id)genShareMsgObjWithNode:(XmlReaderNode_t *)arg1;
- (id)genSourceContent;
- (unsigned int)createtime;
- (void)setCreatetime:(unsigned int)arg1;
- (long long)svrid;
- (void)setSvrid:(long long)arg1;
- (long long)newsvrid;
- (void)setNewsvrid:(long long)arg1;
@end
